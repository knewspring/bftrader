#include "nofocusdelegate.h"

void bfAdjustTableWidget(QTableWidget* tableWidget){
    tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft); //设置列左对齐=
    tableWidget->horizontalHeader()->setStretchLastSection(true); //最后一览自适应宽度=
    //tableWidget->horizontalHeader()->setDefaultSectionSize(150); //缺省列宽=
    tableWidget->horizontalHeader()->setSectionsClickable(false); //设置表头不可点击=
    tableWidget->horizontalHeader()->setSectionsMovable(false); //设置表头不可点击=
    tableWidget->horizontalHeader()->setHighlightSections(false); //当表格只有一行的时候，则表头会出现塌陷问题=
    //tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:#FFFFFF;}"); //设置表头背景色=
    tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #FFFFFF, stop: 0.5 #F5F5F5,stop: 0.6 #E8E8E8, stop:1 #FFFFFF);color: black;padding-left:4px; border: 1px solid #E8E8E8;}"); //设置表头背景色=

    tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents); //自适应行距=
    tableWidget->verticalHeader()->setVisible(false); //设置垂直头不可见=

    //tableWidget->resizeColumnsToContents(); //自动调整列宽度=
    //tableWidget->setFrameShape(QFrame::NoFrame); //设置无边框=
    //tableWidget->setShowGrid(false); //设置不显示格子线=
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑=
    tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection); //可多选多行=
    tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择行为时每次选择一行=
    tableWidget->setItemDelegate(new NoFocusDelegate()); // 去鼠标点击出现的虚框=
}
