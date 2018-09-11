<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>Calculator</class>
 <widget class="QMainWindow" name="Calculator">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>364</width>
    <height>432</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>Calculator</string>
  </property>
  <widget class="QWidget" name="centralWidget">
   <widget class="QTabWidget" name="Calculator_3">
    <property name="geometry">
     <rect>
      <x>-10</x>
      <y>0</y>
      <width>811</width>
      <height>381</height>
     </rect>
    </property>
    <property name="minimumSize">
     <size>
      <width>361</width>
      <height>0</height>
     </size>
    </property>
    <property name="currentIndex">
     <number>0</number>
    </property>
    <widget class="QWidget" name="Calculator_2">
     <attribute name="title">
      <string>Calculator</string>
     </attribute>
     <widget class="QPushButton" name="pushButton_Equals">
      <property name="geometry">
       <rect>
        <x>130</x>
        <y>310</y>
        <width>91</width>
        <height>41</height>
       </rect>
      </property>
      <property name="text">
       <string>=</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_MOD">
      <property name="geometry">
       <rect>
        <x>250</x>
        <y>232</y>
        <width>75</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>MOD</string>
      </property>
     </widget>
     <widget class="QRadioButton" name="radioButton_OCT">
      <property name="geometry">
       <rect>
        <x>170</x>
        <y>70</y>
        <width>41</width>
        <height>17</height>
       </rect>
      </property>
      <property name="text">
       <string>OCT</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_SUB">
      <property name="geometry">
       <rect>
        <x>90</x>
        <y>272</y>
        <width>75</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>-</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_DIV">
      <property name="geometry">
       <rect>
        <x>170</x>
        <y>272</y>
        <width>75</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>/</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_ClearCalc">
      <property name="geometry">
       <rect>
        <x>280</x>
        <y>150</y>
        <width>71</width>
        <height>61</height>
       </rect>
      </property>
      <property name="text">
       <string>CLEAR</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_XOR">
      <property name="geometry">
       <rect>
        <x>170</x>
        <y>232</y>
        <width>75</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>XOR</string>
      </property>
     </widget>
     <widget class="QRadioButton" name="radioButton_BIN">
      <property name="geometry">
       <rect>
        <x>220</x>
        <y>70</y>
        <width>41</width>
        <height>17</height>
       </rect>
      </property>
      <property name="text">
       <string>BIN</string>
      </property>
     </widget>
     <widget class="QLineEdit" name="Display">
      <property name="geometry">
       <rect>
        <x>20</x>
        <y>0</y>
        <width>321</width>
        <height>61</height>
       </rect>
      </property>
      <property name="text">
       <string/>
      </property>
      <property name="clearButtonEnabled">
       <bool>false</bool>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_MULT">
      <property name="geometry">
       <rect>
        <x>250</x>
        <y>272</y>
        <width>75</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>*</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_ADD">
      <property name="geometry">
       <rect>
        <x>10</x>
        <y>272</y>
        <width>75</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>+</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_AND">
      <property name="geometry">
       <rect>
        <x>10</x>
        <y>232</y>
        <width>75</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>AND</string>
      </property>
     </widget>
     <widget class="QRadioButton" name="radioButton_DEC">
      <property name="geometry">
       <rect>
        <x>120</x>
        <y>70</y>
        <width>41</width>
        <height>17</height>
       </rect>
      </property>
      <property name="text">
       <string>DEC</string>
      </property>
     </widget>
     <widget class="QRadioButton" name="radioButton_HEX">
      <property name="geometry">
       <rect>
        <x>70</x>
        <y>70</y>
        <width>41</width>
        <height>17</height>
       </rect>
      </property>
      <property name="text">
       <string>HEX</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_OR">
      <property name="geometry">
       <rect>
        <x>90</x>
        <y>232</y>
        <width>75</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>OR</string>
      </property>
     </widget>
     <widget class="QTextBrowser" name="textBrowser_HEX">
      <property name="geometry">
       <rect>
        <x>80</x>
        <y>140</y>
        <width>171</width>
        <height>21</height>
       </rect>
      </property>
      <property name="acceptDrops">
       <bool>true</bool>
      </property>
      <property name="verticalScrollBarPolicy">
       <enum>Qt::ScrollBarAlwaysOff</enum>
      </property>
     </widget>
     <widget class="QTextBrowser" name="textBrowser_OCT">
      <property name="geometry">
       <rect>
        <x>80</x>
        <y>160</y>
        <width>171</width>
        <height>21</height>
       </rect>
      </property>
      <property name="verticalScrollBarPolicy">
       <enum>Qt::ScrollBarAlwaysOff</enum>
      </property>
     </widget>
     <widget class="QTextBrowser" name="textBrowser_DEC">
      <property name="geometry">
       <rect>
        <x>80</x>
        <y>180</y>
        <width>171</width>
        <height>21</height>
       </rect>
      </property>
      <property name="verticalScrollBarPolicy">
       <enum>Qt::ScrollBarAlwaysOff</enum>
      </property>
     </widget>
     <widget class="QLabel" name="label_Hex">
      <property name="geometry">
       <rect>
        <x>30</x>
        <y>140</y>
        <width>47</width>
        <height>13</height>
       </rect>
      </property>
      <property name="text">
       <string>HEX</string>
      </property>
     </widget>
     <widget class="QLabel" name="label_Oct">
      <property name="geometry">
       <rect>
        <x>30</x>
        <y>160</y>
        <width>47</width>
        <height>13</height>
       </rect>
      </property>
      <property name="text">
       <string>OCT</string>
      </property>
     </widget>
     <widget class="QLabel" name="label_Dec">
      <property name="geometry">
       <rect>
        <x>30</x>
        <y>180</y>
        <width>47</width>
        <height>13</height>
       </rect>
      </property>
      <property name="text">
       <string>DEC</string>
      </property>
     </widget>
     <widget class="QLabel" name="label_Bin">
      <property name="geometry">
       <rect>
        <x>30</x>
        <y>200</y>
        <width>47</width>
        <height>13</height>
       </rect>
      </property>
      <property name="text">
       <string>BIN</string>
      </property>
     </widget>
     <widget class="QTextBrowser" name="textBrowser">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>90</y>
        <width>251</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
    </widget>
    <widget class="QWidget" name="Imaginary_Numbers">
     <attribute name="title">
      <string>Imaginary Numbers</string>
     </attribute>
     <widget class="QLineEdit" name="ReLineEdit1">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>30</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QLineEdit" name="ImLineEdit1">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>70</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QLineEdit" name="ReLineEdit2">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>160</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QLineEdit" name="ImLineEdit2">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>200</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QComboBox" name="comboBox_Options">
      <property name="geometry">
       <rect>
        <x>190</x>
        <y>110</y>
        <width>69</width>
        <height>22</height>
       </rect>
      </property>
      <item>
       <property name="text">
        <string>+</string>
       </property>
      </item>
      <item>
       <property name="text">
        <string>-</string>
       </property>
      </item>
      <item>
       <property name="text">
        <string>*</string>
       </property>
      </item>
      <item>
       <property name="text">
        <string>/</string>
       </property>
      </item>
      <item>
       <property name="text">
        <string>!</string>
       </property>
      </item>
     </widget>
     <widget class="QLabel" name="Solution">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>250</y>
        <width>61</width>
        <height>16</height>
       </rect>
      </property>
      <property name="text">
       <string>SOLUTION</string>
      </property>
     </widget>
     <widget class="QLabel" name="Number1Label">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>10</y>
        <width>71</width>
        <height>16</height>
       </rect>
      </property>
      <property name="text">
       <string>1 st Number</string>
      </property>
     </widget>
     <widget class="QLabel" name="Number2Label">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>140</y>
        <width>81</width>
        <height>16</height>
       </rect>
      </property>
      <property name="text">
       <string>2nd Number</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_Convert1">
      <property name="geometry">
       <rect>
        <x>270</x>
        <y>50</y>
        <width>71</width>
        <height>41</height>
       </rect>
      </property>
      <property name="text">
       <string>Convert</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_Convert2">
      <property name="geometry">
       <rect>
        <x>270</x>
        <y>170</y>
        <width>71</width>
        <height>41</height>
       </rect>
      </property>
      <property name="text">
       <string>Convert</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_Calculate">
      <property name="geometry">
       <rect>
        <x>270</x>
        <y>270</y>
        <width>81</width>
        <height>61</height>
       </rect>
      </property>
      <property name="text">
       <string>Calculate</string>
      </property>
     </widget>
     <widget class="QLabel" name="Re_1">
      <property name="geometry">
       <rect>
        <x>10</x>
        <y>30</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Re</string>
      </property>
     </widget>
     <widget class="QLabel" name="Phase_1">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>30</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Phase</string>
      </property>
     </widget>
     <widget class="QLabel" name="Re_2">
      <property name="geometry">
       <rect>
        <x>10</x>
        <y>160</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Re</string>
      </property>
     </widget>
     <widget class="QLabel" name="Phase_2">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>160</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Phase</string>
      </property>
     </widget>
     <widget class="QLabel" name="Im_1">
      <property name="geometry">
       <rect>
        <x>10</x>
        <y>70</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Im</string>
      </property>
     </widget>
     <widget class="QLabel" name="Module_1">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>70</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>|Z|</string>
      </property>
     </widget>
     <widget class="QLabel" name="Im_2">
      <property name="geometry">
       <rect>
        <x>10</x>
        <y>200</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Im</string>
      </property>
     </widget>
     <widget class="QLabel" name="Module_2">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>200</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>|Z|</string>
      </property>
     </widget>
     <widget class="QLabel" name="Re_3">
      <property name="geometry">
       <rect>
        <x>10</x>
        <y>270</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Re</string>
      </property>
     </widget>
     <widget class="QLabel" name="Im_3">
      <property name="geometry">
       <rect>
        <x>10</x>
        <y>310</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Im</string>
      </property>
     </widget>
     <widget class="QLabel" name="Phase_3">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>270</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>Phase</string>
      </property>
     </widget>
     <widget class="QLabel" name="Module_3">
      <property name="geometry">
       <rect>
        <x>140</x>
        <y>310</y>
        <width>41</width>
        <height>31</height>
       </rect>
      </property>
      <property name="text">
       <string>|Z|</string>
      </property>
     </widget>
     <widget class="QTextBrowser" name="PhaseTextBrowser1">
      <property name="geometry">
       <rect>
        <x>180</x>
        <y>30</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QTextBrowser" name="ModuleTextBrowser1">
      <property name="geometry">
       <rect>
        <x>180</x>
        <y>70</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QTextBrowser" name="PhaseTextBrowser2">
      <property name="geometry">
       <rect>
        <x>180</x>
        <y>160</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QTextBrowser" name="ModuleTextBrowser2">
      <property name="geometry">
       <rect>
        <x>180</x>
        <y>200</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QTextBrowser" name="PhaseTextBrowser3">
      <property name="geometry">
       <rect>
        <x>180</x>
        <y>270</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QTextBrowser" name="ModuleTextBrowser3">
      <property name="geometry">
       <rect>
        <x>180</x>
        <y>310</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QLabel" name="ChooseOption">
      <property name="geometry">
       <rect>
        <x>70</x>
        <y>100</y>
        <width>91</width>
        <height>41</height>
       </rect>
      </property>
      <property name="text">
       <string>CHOOSE OPTION</string>
      </property>
     </widget>
     <widget class="QTextBrowser" name="ReTextBrowser3">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>270</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QTextBrowser" name="ImTextBrowser3">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>310</y>
        <width>81</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButton_Clear">
      <property name="geometry">
       <rect>
        <x>270</x>
        <y>230</y>
        <width>61</width>
        <height>23</height>
       </rect>
      </property>
      <property name="text">
       <string>Clear</string>
      </property>
     </widget>
    </widget>
    <widget class="QWidget" name="SMDCalculator">
     <attribute name="title">
      <string>SMD Calculator</string>
     </attribute>
     <widget class="QLabel" name="label_21">
      <property name="geometry">
       <rect>
        <x>100</x>
        <y>30</y>
        <width>131</width>
        <height>41</height>
       </rect>
      </property>
      <property name="text">
       <string>SMD Resistor Calculator</string>
      </property>
     </widget>
     <widget class="QLabel" name="label_22">
      <property name="geometry">
       <rect>
        <x>40</x>
        <y>70</y>
        <width>101</width>
        <height>41</height>
       </rect>
      </property>
      <property name="text">
       <string>Enter Resistor Label</string>
      </property>
     </widget>
     <widget class="QLineEdit" name="SMDCode">
      <property name="geometry">
       <rect>
        <x>170</x>
        <y>80</y>
        <width>113</width>
        <height>20</height>
       </rect>
      </property>
     </widget>
     <widget class="QTextBrowser" name="ResistanceValue">
      <property name="geometry">
       <rect>
        <x>150</x>
        <y>180</y>
        <width>91</width>
        <height>31</height>
       </rect>
      </property>
     </widget>
     <widget class="QLabel" name="label_23">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>180</y>
        <width>91</width>
        <height>21</height>
       </rect>
      </property>
      <property name="text">
       <string>Resistance [Ohm]</string>
      </property>
     </widget>
     <widget class="QPushButton" name="CalculateButton">
      <property name="geometry">
       <rect>
        <x>110</x>
        <y>110</y>
        <width>91</width>
        <height>41</height>
       </rect>
      </property>
      <property name="text">
       <string>Calculate</string>
      </property>
     </widget>
    </widget>
    <widget class="QWidget" name="dBCalculator">
     <attribute name="title">
      <string>dB Calculator</string>
     </attribute>
     <widget class="QLabel" name="label">
      <property name="geometry">
       <rect>
        <x>110</x>
        <y>40</y>
        <width>111</width>
        <height>16</height>
       </rect>
      </property>
      <property name="text">
       <string>Gain (Loss) Calculator</string>
      </property>
     </widget>
     <widget class="QLabel" name="Input">
      <property name="geometry">
       <rect>
        <x>50</x>
        <y>80</y>
        <width>47</width>
        <height>13</height>
       </rect>
      </property>
      <property name="text">
       <string>Input</string>
      </property>
     </widget>
     <widget class="QRadioButton" name="radioButtonVoltage">
      <property name="geometry">
       <rect>
        <x>110</x>
        <y>80</y>
        <width>61</width>
        <height>17</height>
       </rect>
      </property>
      <property name="text">
       <string>Voltage</string>
      </property>
     </widget>
     <widget class="QRadioButton" name="radioButtonPower">
      <property name="geometry">
       <rect>
        <x>170</x>
        <y>80</y>
        <width>51</width>
        <height>16</height>
       </rect>
      </property>
      <property name="text">
       <string>Power</string>
      </property>
     </widget>
     <widget class="QLineEdit" name="InputSignal">
      <property name="geometry">
       <rect>
        <x>110</x>
        <y>110</y>
        <width>113</width>
        <height>20</height>
       </rect>
      </property>
     </widget>
     <widget class="QLineEdit" name="OutputSignal">
      <property name="geometry">
       <rect>
        <x>110</x>
        <y>140</y>
        <width>113</width>
        <height>20</height>
       </rect>
      </property>
     </widget>
     <widget class="QLineEdit" name="dB">
      <property name="geometry">
       <rect>
        <x>110</x>
        <y>170</y>
        <width>113</width>
        <height>20</height>
       </rect>
      </property>
     </widget>
     <widget class="QLabel" name="InputSignalLabel">
      <property name="geometry">
       <rect>
        <x>36</x>
        <y>110</y>
        <width>61</width>
        <height>20</height>
       </rect>
      </property>
      <property name="text">
       <string>Input Signal</string>
      </property>
     </widget>
     <widget class="QLabel" name="OutputSignalLabel">
      <property name="geometry">
       <rect>
        <x>26</x>
        <y>140</y>
        <width>71</width>
        <height>20</height>
       </rect>
      </property>
      <property name="text">
       <string>Output Signal</string>
      </property>
     </widget>
     <widget class="QLabel" name="LevelChange">
      <property name="geometry">
       <rect>
        <x>26</x>
        <y>170</y>
        <width>71</width>
        <height>16</height>
       </rect>
      </property>
      <property name="text">
       <string>Level Change</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButtonInput">
      <property name="geometry">
       <rect>
        <x>240</x>
        <y>110</y>
        <width>111</width>
        <height>23</height>
       </rect>
      </property>
      <property name="text">
       <string>Calculate Value 1</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButtonOutput">
      <property name="geometry">
       <rect>
        <x>240</x>
        <y>140</y>
        <width>111</width>
        <height>23</height>
       </rect>
      </property>
      <property name="text">
       <string>Calculate Value 2</string>
      </property>
     </widget>
     <widget class="QPushButton" name="pushButtondB">
      <property name="geometry">
       <rect>
        <x>240</x>
        <y>170</y>
        <width>111</width>
        <height>23</height>
       </rect>
      </property>
      <property name="text">
       <string>Calculate dB</string>
      </property>
     </widget>
    </widget>
   </widget>
  </widget>
  <widget class="QMenuBar" name="menuBar">
   <property name="geometry">
    <rect>
     <x>0</x>
     <y>0</y>
     <width>364</width>
     <height>21</height>
    </rect>
   </property>
  </widget>
  <widget class="QToolBar" name="mainToolBar">
   <attribute name="toolBarArea">
    <enum>TopToolBarArea</enum>
   </attribute>
   <attribute name="toolBarBreak">
    <bool>false</bool>
   </attribute>
  </widget>
  <widget class="QStatusBar" name="statusBar"/>
 </widget>
 <layoutdefault spacing="6" margin="11"/>
 <resources/>
 <connections/>
</ui>
