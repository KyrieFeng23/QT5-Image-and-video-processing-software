#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <QTimer>
#include <QImage>
#include <QMessageBox>
using namespace cv;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void showascii();
    QImage gray(QImage image);//灰度化
    QImage gray2(QImage image);//灰度化2
    QImage setRGB(QImage image,int value_r,int value_g,int value_b);//调整rgb
    QImage AdjustContrast(QImage image, int value);//调整对比度
    QImage ImageCenter(QImage  qimage,QLabel *qLabel);//调整图片比例
    QImage AdjustSaturation(QImage image, int value);//调整饱和度
    QImage bianyuan(QImage image);//边缘
    Mat masaike(Mat image);//马赛克
    QStringList srcDirPathList;//图片list
    int index =0;//图片index
    int type=0;//视频操作类型
    QImage  MatToQImage(const cv::Mat& mat);
    QString stom(int s);
    QImage junzhi(QImage image);
    QImage fuhe(QImage images);
    QImage gamma(QImage image);

private slots:

    void on_action_Dock_triggered();

    void on_action_Open_triggered();

    void on_pushButton_clicked();

    //void onBtnClicked();
    void onTimeout();
    //void on_pushButton_2_clicked();
    void updatePosition();
    void on_action_Save_triggered();

    //void on_pushButton_choose_clicked();

    void on_pushButton_gray_clicked();

    void on_pushButton_junzhi_clicked();

    void on_action_L_triggered();

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_junzhi_2_clicked();

    void on_pushButton_junzhi_3_clicked();

    void on_horizontalSlider_2_valueChanged(int value);

    void on_pushButton_save_clicked();

    //void on_pushButton_left_clicked();


    void on_horizontalSlider_R_valueChanged(int value);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_origin_clicked();

    void on_horizontalSlider_G_valueChanged(int value);

    void on_horizontalSlider_B_valueChanged(int value);

    void on_pushButton_gamma_clicked();

    void on_horizontalSlider_erzhi_valueChanged(int value);

    void on_horizontalSlider_duibi_valueChanged(int value);

    void on_horizontalSlider_baohe_valueChanged(int value);

    void on_action_V_triggered();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_VideohorizontalSlider_2_valueChanged(int value);

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_horizontalSlider_suofang_valueChanged(int value);

    void on_pushButton_2_clicked();

    void on_action_H_triggered();

    void on_action_J_triggered();

    void on_action_B_triggered();

    void on_action_G_triggered();

    void on_action_Y_triggered();

    void on_action_About_triggered();

    void on_pushButton_turnleft_clicked();

    void on_pushButton_turnright_clicked();

    void on_pushButton_turnleft_2_clicked();

    void on_pushButton_turnleft_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    bool language=true;
    bool isstart=false;
    QString origin_path;//目前处理的图片的原图
    QString videoSrcDir;//视频路径
    VideoCapture capture; //用来读取视频结构
    QTimer timer;//视频播放的定时器
    int beishu;//调节播放速率
    int delay;//帧延迟时间
    QMessageBox customMsgBox;

};

#endif // MAINWINDOW_H
