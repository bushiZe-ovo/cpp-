# 实验03 函数

姓名：戴孟哲；学号：2025302142113

本文件夹按《实验课件03-函数》整理：`src/classroom` 是 7 个课堂练习，`src/assignments` 是 5 道教材习题。每个 `.cpp` 都有自己的 `main`，应单独编译、运行和调试。`build` 只保存编译生成的程序，GitHub 提交时不需要上传生成的可执行文件。课件中的中文弯引号、全角逗号等排版字符已改成标准 C++ 写法。

## 在 VS Code 中运行

1. 启动 VS Code，选择“文件 → 打开文件夹”，打开**本文件夹** `实验03_函数提交材料`。不要只打开一个 `.cpp` 文件，否则编译设置无法定位到 `build` 文件夹。
2. 电脑上应有 VS Code 的 Microsoft **C/C++** 扩展、Apple 命令行工具。这里已配好 `.vscode/tasks.json` 和 `.vscode/launch.json`。
3. 在左侧资源管理器中打开要运行的 `.cpp`，例如 `src/assignments/3-9_prime.cpp`，先按 `⌘S` 保存。
4. 按 `⇧⌘B` 选择“编译当前 C++ 文件”。成功时终端显示编译完成，生成的程序位于 `build/3-9_prime`。有报错先看“问题”面板指出的行号。
5. 在 VS Code 菜单选择“终端 → 新建终端”，输入 `./build/3-9_prime` 后回车，再输入题目要求的数值。运行其他题目时，将命令末尾改成相应文件名，例如 `./build/01_factorial` 或 `./build/3-15_power`。

可在“终端”里直接编译和运行，例如：

```sh
clang++ -std=c++17 -g -O0 -Wall -Wextra src/assignments/3-9_prime.cpp -o build/3-9_prime
./build/3-9_prime
```

每次修改代码后需重新编译。注意区分 `3-9_prime.cpp`（源码）和 `build/3-9_prime`（程序）。

## 在 VS Code 中单步调试

1. 保持目标 `.cpp` 为当前打开的编辑器文件。点击希望暂停的代码行左侧空白，出现红点即断点。阶乘题建议在 `fact(5)` 调用行设断点；引用题在 `swapValues(a, a)` 处设断点；递归题在函数内部设断点。
2. 按 `F5`，或在“运行和调试”中选“调试当前 C++ 文件（LLDB）”。配置会先自动重新编译。需要输入的程序会打开外部控制台窗口，按提示在窗口中输入。
3. 停在函数调用处，按 `F11` 进入函数；按 `F10` 执行当前语句但不进入函数；按 `⇧F11` 返回调用者；按 `F5` 继续到下一断点；按 `⇧F5` 停止。Mac 键盘如果把 F 键当作音量、亮度键，可同时按 `fn`。
4. 在左侧“运行和调试”面板看“变量”，把 `val`、`product`、`num`、`x`、`y` 等添加到“监视”；“调用堆栈”能看到 `main → fact` 或多层 `fibonacci` 调用。对比每一步变量值与预期结果。

微软提供的[Visual Studio 调试教程](https://learn.microsoft.com/zh-cn/visualstudio/debugger/getting-started-with-the-debugger-cpp?view=visualstudio)介绍断点、F11、F10、变量监视和调用堆栈。这些概念可用于 VS Code，但教程中的“创建解决方案”“生成解决方案”等界面属于 Visual Studio。VS Code 的对应操作是打开本文件夹、执行编译任务、按 F5 调试。

## 题目与建议输入

| 源码 | 题目 | 建议输入或观察点 |
|---|---|---|
| `classroom/01_factorial.cpp` | 独立函数计算 5! | F11 进入 `fact`，观察 `val`、`product` |
| `classroom/02_swap_reference.cpp` | 引用参数交换 | 输入 `3 5`，比较 `swapValues(a,a)` 与 `swapValues(a,b)` |
| `classroom/03_overload_type.cpp` | 按参数类型重载 | 对三个 `magnitude` 调用分别按 F11 |
| `classroom/04_overload_count.cpp` | 按参数个数重载 | 对两个 `add` 调用分别按 F11 |
| `classroom/05_default_argument.cpp` | 默认参数 | 比较 `sum(100)` 和 `sum()` 中 `num` 的值 |
| `classroom/06_inline_max.cpp` | 内联最大值 | 输入 `3 8`；内联是建议，调试时编译器可能仍显示调用 |
| `classroom/07_inline_circle.cpp` | 内联圆面积 | 观察半径 1、2、3 的面积 |
| `assignments/3-7_divide.cpp` | 两个 unsigned short 相除，short 返回 | 输入 `12 3`，再试 `12 0`；第二个参数为 0 时返回 -1 |
| `assignments/3-9_prime.cpp` | 判断质数 | 输入 `17`，再试 `1`、`18` |
| `assignments/3-10_gcd_lcm.cpp` | 最大公约数、最小公倍数 | 输入 `12 18`，观察引用输出参数 |
| `assignments/3-13_fibonacci.cpp` | 递归斐波那契 | 输入 `6`，观察调用栈；限制在 1～30 以免朴素递归运行太久 |
| `assignments/3-15_power.cpp` | 整数/实数递归幂重载 | 输入 `2 2.5 -2`，比较整数版本 0 与实数版本 0.16 |

## 课件中的思考题

- `fact("hello")`、`fact()`、`fact(42,10,0)` 的实参类型或个数不匹配，不能编译。`fact(3.14)` 在当前函数签名下通常**能够编译**，但会把 `double` 隐式转换为 `int`，即按 3 计算；开启更严格的转换警告可帮助发现这一问题。不要把会导致编译失败的调用写进正常源文件。
- `swapValues(a,a)` 时两次引用指向同一变量。这里用地址判断是否为同一对象；`swapValues(a,b)` 才交换两个变量。仅比较 `v1 == v2` 会把“值相等但不是同一对象”的情况也提前返回，虽然此题的最终数值相同，原因却不同。
- 重载不能只凭返回类型区分，因为调用处可能没有使用返回值。不同参数类型或个数可以构成重载。
- 默认参数须从参数表右侧开始连续给出。`int Fun(int i, int j=5, int k);` 不合法；`Init(,20)` 也不合法。省略实参只能从右往左省略。
- `inline` 是给编译器的建议，不能保证函数一定展开；课件中“含 switch/while 就不能内联”等说法不应当成绝对语法规则。
- 3-7 的商若超过 `short` 范围，主程序会提示重新输入，避免依赖实现相关的类型转换。
- 3-15 按题意整数版遇到负指数返回 0。若希望整数底数的负次幂得到实数结果，调用 `getPower(static_cast<double>(a), m)`。指数限定为 -30～30，整数版在计算前检查结果是否超出 `int`。`0` 的负指数无定义。

## GitHub 上传

上传本文件夹内的 `.vscode`、`src`、`build/.gitkeep`、`.gitignore`、`README.md`，保留层级；`build` 中后来生成的程序不需要上传。若浏览器上传隐藏了 `.vscode`，可以使用 GitHub Desktop 或 Git 命令提交。课程若要求报告或运行截图，请在自己实际运行后补充；本材料没有替你生成结果截图。
