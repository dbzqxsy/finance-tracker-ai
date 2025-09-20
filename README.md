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
| 🧠 AI 接口 | `requests` + `OpenAI API` | 调用 ChatGPT 生成理财建议 |
| 🧪 项目管理 | `Git` + `GitHub` | 跨平台同步 + 版本控制 |

---

## 🗂 项目结构 Project Structure

finance-tracker-ai/
├── cpp/ # C++ 模块：逻辑与数据操作
│ ├── expense.cpp
│ ├── account_manager.cpp
│ └── ...
├── data/ # 数据文件存储（CSV/JSON）
├── gui/ # Python 图形界面模块
│ ├── main_window.py
│ ├── charts.py
│ └── ...
├── ai/ # AI 理财建议相关模块
│ └── advisor.py
├── README.md # 项目说明文档
└── requirements.txt # Python 依赖（GUI + requests）


---

## 📦 功能模块说明

### 💰 1. 消费记录模块（C++）
- `Expense` 类：定义每笔花费信息（金额、时间、分类）
- `AccountManager` 类：添加记录、周期计算、导入导出

### 🖥 2. 图形用户界面（Python）
- 支持用户输入支出、查看历史记录
- 支持消费数据表格展示与图表可视化

### 🧠 3. AI 理财建议系统
- 将账单数据构造为 prompt
- 请求 ChatGPT 并返回消费优化建议

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
