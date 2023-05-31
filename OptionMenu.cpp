#include "OptionsMenu.h"
#include <QDialogButtonBox>
#include <QLabel>
#include <QVBoxLayout>

OptionsMenu::OptionsMenu(QWidget *parent) : QDialog(parent)
{
    setupUI();
}

void OptionsMenu::setupUI()
{
    // Create sliders for board color and sound volume
    boardColorSlider = new QSlider(Qt::Horizontal);
    soundVolumeSlider = new QSlider(Qt::Horizontal);

    // Set slider ranges and default values
    boardColorSlider->setRange(0, 255);
    soundVolumeSlider->setRange(0, 100);
    boardColorSlider->setValue(128);
    soundVolumeSlider->setValue(50);

    // Connect slider signals to slots
    connect(boardColorSlider, &QSlider::valueChanged, this, &OptionsMenu::onBoardColorSliderChanged);
    connect(soundVolumeSlider, &QSlider::valueChanged, this, &OptionsMenu::onSoundVolumeSliderChanged);

    // Create a layout for the options menu
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(new QLabel("Board Color"));
    layout->addWidget(boardColorSlider);
    layout->addWidget(new QLabel("Sound Volume"));
    layout->addWidget(soundVolumeSlider);

    // Apply and Cancel buttons
    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Apply | QDialogButtonBox::Cancel);
    connect(buttonBox, &QDialogButtonBox::accepted, this, &OptionsMenu::applySettings);
    connect(buttonBox, &QDialogButtonBox::rejected, this, &OptionsMenu::reject);

    layout->addWidget(buttonBox);
    setLayout(layout);
}

void OptionsMenu::applySettings()
{
    // Apply the selected settings
    int boardColorValue = boardColorSlider->value();
    int soundVolumeValue = soundVolumeSlider->value();

    // Do something with the settings (e.g., update the board color and sound volume)
        updateBoardColor(boardColorValue);
        updateSoundVolume(soundVolumeValue);


    accept(); // Close the options menu
}

void OptionsMenu::updateBoardColor(int value)
{
    // Update the board color based on the selected value

    // Calculate the RGB values from the selected value
    int red = value;
    int green = value;
    int blue = value;

    // Create a QColor object with the calculated RGB values
    QColor boardColor(red, green, blue);

    // Set the board color to the selected color
    // Replace 'boardWidget' with the actual widget representing the chess board
//    Chessboard->setBackgroundColor(boardColor);
}
void OptionsMenu::updateSoundVolume(int value)
{
    // Update the sound volume based on the selected value
    // ...
    Q_UNUSED(value); // Placeholder code, replace with actual implementation
}




void OptionsMenu::onBoardColorSliderChanged(int value)
{
    // Handle board color slider value change
    // Update the board color based on the selected value
    // ...
}

void OptionsMenu::onSoundVolumeSliderChanged(int value)
{
    // Handle sound volume slider value change
    // Update the sound volume based on the selected value
    // ...
}
