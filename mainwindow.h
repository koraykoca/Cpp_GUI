#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//QGIS Includes
#include <qgsmapcanvas.h>
#include <qgsmaptool.h>

//QT Includes
#include <QtGui>
#include <QWidget>
#include <qtoolbar.h>
#include <QVBoxLayout>
#include <QObject>

//Local Includes
#include <ui_mainwindowbase.h>

class MainWindow : public QMainWindow, private Ui::MainWindowBase
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = 0, Qt::WindowFlags fl = 0 );
    ~MainWindow();

public slots:
    void zoomInMode();
    void zoomOutMode();
    void panMode();
    void addLayer();

private:
    QgsMapCanvas * mpMapCanvas;
    QVBoxLayout  * mpLayout;
    QToolBar * mpMapToolBar;
    QgsMapTool * mpPanTool;
    QgsMapTool * mpZoomInTool;
    QgsMapTool * mpZoomOutTool;

};

#endif // MAINWINDOW_H