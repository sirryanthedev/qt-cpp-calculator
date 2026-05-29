#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void slotPlusClicked();
    void slotMinusClicked();
    void slotTimesClicked();
    void slotDivideClicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
