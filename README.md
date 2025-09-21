# 💰 AI 财务管家 · 记账软件（C++ + Python）

一个基于 **C++ + Python 跨语言协作开发** 的智能记账系统，集成了图形化消费记录、统计图表展示，以及通过 AI 接口提供个性化理财建议。适用于想提升编程实战能力的个人项目开发者和理财管理者。

---

## 🧩 项目亮点 Features

- ✅ **跨语言开发**：C++ 提供高速底层逻辑，Python 提供现代图形交互
- 🗃 **可配置账期**：用户可自由设定每月账期起止时间
- 📈 **可视化展示**：支出数据图表一目了然（饼图/柱状图）
- 🤖 **AI 理财建议**：通过 OpenAI 接口生成消费分析与建议
- 💾 **数据持久化**：消费记录本地存储为 CSV/JSON 文件，支持历史账单加载

---

## 🏗 技术栈 Technology Stack

| 层级 | 技术 | 说明 |
|------|------|------|
| 💻 后端逻辑 | `C++17` | 实现消费数据结构、账期逻辑、文件读写 |
| 📁 数据格式 | `CSV / JSON` | 结构化存储用户账单信息 |
| 🖼 图形界面 | `Python3` + `PyQt5` / `Tkinter` | 图形化输入与记录展示 |
| 📊 图表展示 | `matplotlib` / `PyQtChart` | 消费趋势、分类支出图表化 |
| 🤖 AI 接口 | `requests` + `OpenAI API` | 调用 ChatGPT 生成理财建议 |
| 🧪 项目管理 | `Git` + `GitHub` | 跨平台同步 + 版本控制 |

---

## 🗂 项目结构 Project Structure

```bash
finance-tracker-ai/
├── cpp/                 # C++ 模块：逻辑与数据操作
│   ├── main.cpp
│   ├── expense.cpp
│   ├── account_manager.cpp
│   └── ...
├── gui/                 # Python 图形界面模块
│   ├── main_window.py
│   ├── charts.py
│   └── ...
├── ai/                  # AI 理财建议相关模块
│   └── advisor.py
├── data/                # 数据文件存储（CSV/JSON）
├── requirements.txt     # Python 依赖（GUI + requests）
└── README.md            # 项目说明文档
```

---

## 📦 功能模块说明

### 💰 1. 消费记录模块（C++）

- `Expense` 类：定义每笔花费信息（金额、时间、分类）
- `AccountManager` 类：添加记录、周期计算、导入导出
- 文件读写使用 `<fstream>`，支持 CSV 和 JSON 格式

### 🖥 2. 图形用户界面（Python）

- 使用 `PyQt5` 构建主窗口、表单输入、表格展示
- 嵌入 `matplotlib` 图表展示支出趋势和分类分析
- 按钮交互可调用文件写入并刷新记录视图

### 🤖 3. AI 理财建议系统

- 自动读取当前周期数据，生成 prompt
- 调用 OpenAI Chat API 提供花费分析和建议
- 支持多模型配置与参数自定义（temperature, max_tokens）

---

## 🧪 技术实现细节 Technical Implementation

### 💻 C++ 模块开发（cpp/）

- 编译器：`g++`（建议版本 ≥ C++17）
- 编译命令示例：

```bash
cd cpp/
g++ -std=c++17 -o tracker main.cpp expense.cpp account_manager.cpp
./tracker
```

- 关键技术点：
  - 使用 `vector` 容器动态存储记录
  - 时间处理使用 `<ctime>` 或自定义日期类
  - JSON 导出可通过结构化输出拼接实现

### 🖼 Python 图形界面（gui/）

- 框架：`PyQt5`
- 图表：`matplotlib`（内嵌进 GUI 窗口）
- 界面元素：`QMainWindow`, `QTableWidget`, `QPushButton`, `QLineEdit`

安装依赖并启动：

```bash
pip install -r requirements.txt
python gui/main_window.py
```

### 🤖 AI 接口（ai/）

- 使用 `requests` 请求 OpenAI Chat API
- 示例调用代码（ai/advisor.py）：

```python
import requests

def get_advice(prompt):
    headers = {"Authorization": f"Bearer {OPENAI_API_KEY}"}
    payload = {
        "model": "gpt-4",
        "messages": [{"role": "user", "content": prompt}],
        "temperature": 0.7
    }
    res = requests.post("https://api.openai.com/v1/chat/completions", json=payload, headers=headers)
    return res.json()["choices"][0]["message"]["content"]
```

### 🧰 开发环境配置说明

| 工具 | 配置 |
|------|------|
| 系统环境 | macOS / Windows 双平台开发 |
| 编辑器 | VS Code（配置 JetBrains Mono 字体） |
| Git 协作 | 使用 SSH Key 登录 GitHub |
| 同步工具 | VS Code 设置同步 + Git CLI 操作 |
| 文件格式 | UTF-8 / Unix 换行符 |

---

## 🚀 快速开始 Getting Started

```bash
# 1. 编译 C++ 后端模块
cd cpp/
g++ main.cpp -o tracker

# 2. 安装 Python 依赖
pip install -r requirements.txt

# 3. 启动图形界面
python gui/main_window.py
```

---

## 🔧 开发计划 Development Plan

| 日期 | 内容 |
|------|------|
| Day 1 | 创建 `Expense`, `AccountManager` 类，基本逻辑编写 |
| Day 2 | 添加账期计算，支持文件保存 |
| Day 3 | Python GUI 原型搭建 |
| Day 4 | GUI ↔ 数据文件联通 |
| Day 5 | 接入 AI 接口生成理财建议 |
| Day 6 | 图表统计 + 美化界面 |
| Day 7 | 收尾打包发布，编写说明文档 |

---

## 🧪 测试与调试 Tips

```bash
# 检查 SSH 配置
ssh -T git@github.com

# Git 提交并推送
git add .
git commit -m "更新记录：添加 AI 模块"
git push origin main

# Python 模块调试
python -m ai.advisor
```

---

## 📌 TODO / 后续可拓展功能

- [ ] 多账本支持（按用户或分类区分）
- [ ] 月度消费预算提醒
- [ ] 支出导出 PDF 报告
- [ ] Docker 化部署跨平台运行

---

## 🧠 项目作者 Project Owner

| 信息 | 内容 |
|------|------|
| GitHub | [@dbzqxsy](https://github.com/dbzqxsy) |
| 开发定位 | 学习型实战项目，提升工程与多语言协作能力 |
| 目标用户 | 个人开发者 / 学生 / 财务管理入门者 |

---

## 🏁 最终成果

✅ 一个带图形界面 + AI 理财建议 + 数据统计能力的智能记账工具，具备良好模块化结构，可持续扩展优化。

欢迎 Star 🌟 或提出建议！