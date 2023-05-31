#ifndef OPTIONSMENU_H
#define OPTIONSMENU_H

#include <QDialog>
#include <QSlider>

class OptionsMenu : public QDialog
{
    Q_OBJECT

public:
    explicit OptionsMenu(QWidget *parent = nullptr);

private:
    QSlider *boardColorSlider;
    QSlider *soundVolumeSlider;

    void setupUI();
    void applySettings();

private slots:
    void onBoardColorSliderChanged(int value);
    void onSoundVolumeSliderChanged(int value);
    void  updateBoardColor(int value);
    void  updateSoundVolume(int value);
};

#endif // OPTIONSMENU_H
