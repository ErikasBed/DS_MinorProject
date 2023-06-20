<<<<<<< HEAD
% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
%  an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below
%% Variables
frequency_IRQ = 1000; % IRQ every 1000 ticks of hardware clock -> local clock: 1 kHz


idA = 4;
idB = 6;

V2 = 1.3889; % velocity 
L0F = 3; % Wheelbase of tractor
L0b = 1; % Distance between rear axle & hitch
L1F = 4; % Wheelbase of the trailing units
%% Signals
% Defining signals for viewing in HANtune


% Defining System Information Signals
SI_FreeStack = Simulink.Signal;
SI_FreeStack.StorageClass = 'ExportedGlobal';
SI_CPUload = Simulink.Signal;
SI_CPUload.StorageClass = 'ExportedGlobal';
SI_FreeHeap = Simulink.Signal;
SI_FreeHeap.StorageClass = 'ExportedGlobal';

dataArx = Simulink.Signal;
dataArx.StorageClass = 'ExportedGlobal';
dataArx = Simulink.Signal;

dataAtx = Simulink.Signal;
dataAtx.StorageClass = 'ExportedGlobal';


dataBrx = Simulink.Signal;
dataBrx.StorageClass = 'ExportedGlobal';


dataBtx = Simulink.Signal;
dataBtx.StorageClass = 'ExportedGlobal';


slotSelected = Simulink.Signal;
slotSelected.StorageClass = 'ExportedGlobal';


roleA = Simulink.Signal;
roleA.StorageClass = 'ExportedGlobal';


roleB = Simulink.Signal;
roleB.StorageClass = 'ExportedGlobal';


canActive = Simulink.Signal;
canActive.StorageClass = 'ExportedGlobal';


setSlotTime = Simulink.Signal;
setSlotTime.StorageClass = 'ExportedGlobal';


testCounter = Simulink.Signal;
testCounter.StorageClass = 'ExportedGlobal';

boolCan = Simulink.Signal;
boolCan.StorageClass ='ExportedGlobal';

%% Parameters
% Defining a parameter for editing in HANtune
desiredAngle = Simulink.Parameter; % Define as parameter
desiredAngle.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
desiredAngle.Value = 0; % Initial value is set to zero

trailer1Slider = Simulink.Parameter; % Define as parameter
trailer1Slider.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
trailer1Slider.Value = 0; % Initial value is set to zer

propVal = Simulink.Parameter; % Define as parameter
propVal.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
propVal.Value = 1; % Initial value is set to zer


intVal = Simulink.Parameter; % Define as parameter
intVal.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
intVal.Value = 0.15; % Initial value is set to zer

nodeRole = Simulink.Parameter; % Define as parameter
nodeRole.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
nodeRole.Value = 1; % Initial value is set to zero

ClockOn = Simulink.Parameter; % Define as parameter
ClockOn.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
ClockOn.Value = 0; % Initial value is set to zero

slotTime = Simulink.Parameter; % Define as parameter
slotTime.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
slotTime.Value = 50; % Initial value is 50 [ms]

matrixRows = Simulink.Parameter; % Define as parameter
matrixRows.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
matrixRows.Value = 10 ; % Initial value is 10 slots

SYNC1_ID = Simulink.Parameter; % Define as parameter
SYNC1_ID.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
SYNC1_ID.Value = 11; % ID

MMBS1_ID = Simulink.Parameter; % Define as parameter
MMBS1_ID.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
MMBS1_ID.Value = 12; % ID

SSTM1_ID = Simulink.Parameter; % Define as parameter
SSTM1_ID.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
SSTM1_ID.Value = 13; % ID

TRCK1_ID1 = Simulink.Parameter; % Define as parameter
TRCK1_ID1.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRCK1_ID1.Value = 14; % ID

TRCK1_ID2 = Simulink.Parameter; % Define as parameter
TRCK1_ID2.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRCK1_ID2.Value = 26; % ID

TRCK1_ID3 = Simulink.Parameter; % Define as parameter
TRCK1_ID3.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRCK1_ID3.Value = 37; % ID

TRLS1_ID4 = Simulink.Parameter; % Define as parameter
TRLS1_ID4.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRLS1_ID4.Value = 48; % ID

TRLS1_ID5 = Simulink.Parameter; % Define as parameter
TRLS1_ID5.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRLS1_ID5.Value = 59; % ID

trailer1TestAngle = Simulink.Parameter; % Define as parameter
trailer1TestAngle.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
trailer1TestAngle.Value = 0; % Angle in degrees

trailer2TestAngle = Simulink.Parameter; % Define as parameter
trailer2TestAngle.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
trailer2TestAngle.Value = 0; % Angle in degrees

controlWidth = Simulink.Parameter; % Define as parameter
controlWidth.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
controlWidth.Value = 3; % Angle in degrees
=======
% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
%  an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below
%% Variables
frequency_IRQ = 1000; % IRQ every 1000 ticks of hardware clock -> local clock: 1 kHz


idA = 4;
idB = 6;

V2 = 0.5; % velocity 
L0F = 3; % Wheelbase of tractor
L0b = 1; % Distance between rear axle & hitch
L1F = 4; % Wheelbase of the trailing units
%% Signals
% Defining signals for viewing in HANtune


% Defining System Information Signals
SI_FreeStack = Simulink.Signal;
SI_FreeStack.StorageClass = 'ExportedGlobal';
SI_CPUload = Simulink.Signal;
SI_CPUload.StorageClass = 'ExportedGlobal';
SI_FreeHeap = Simulink.Signal;
SI_FreeHeap.StorageClass = 'ExportedGlobal';

dataArx = Simulink.Signal;
dataArx.StorageClass = 'ExportedGlobal';
dataArx = Simulink.Signal;

dataAtx = Simulink.Signal;
dataAtx.StorageClass = 'ExportedGlobal';


dataBrx = Simulink.Signal;
dataBrx.StorageClass = 'ExportedGlobal';


dataBtx = Simulink.Signal;
dataBtx.StorageClass = 'ExportedGlobal';


slotSelected = Simulink.Signal;
slotSelected.StorageClass = 'ExportedGlobal';


roleA = Simulink.Signal;
roleA.StorageClass = 'ExportedGlobal';


roleB = Simulink.Signal;
roleB.StorageClass = 'ExportedGlobal';


canActive = Simulink.Signal;
canActive.StorageClass = 'ExportedGlobal';


setSlotTime = Simulink.Signal;
setSlotTime.StorageClass = 'ExportedGlobal';


testCounter = Simulink.Signal;
testCounter.StorageClass = 'ExportedGlobal';

boolCan = Simulink.Signal;
boolCan.StorageClass ='ExportedGlobal';

%% Parameters
% Defining a parameter for editing in HANtune
desiredAngle = Simulink.Parameter; % Define as parameter
desiredAngle.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
desiredAngle.Value = 0; % Initial value is set to zero

trailer1Slider = Simulink.Parameter; % Define as parameter
trailer1Slider.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
trailer1Slider.Value = 0; % Initial value is set to zer

propVal = Simulink.Parameter; % Define as parameter
propVal.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
propVal.Value = 1; % Initial value is set to zer


intVal = Simulink.Parameter; % Define as parameter
intVal.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
intVal.Value = 0.15; % Initial value is set to zer

nodeRole = Simulink.Parameter; % Define as parameter
nodeRole.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
nodeRole.Value = 1; % Initial value is set to zero

ClockOn = Simulink.Parameter; % Define as parameter
ClockOn.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
ClockOn.Value = 0; % Initial value is set to zero

slotTime = Simulink.Parameter; % Define as parameter
slotTime.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
slotTime.Value = 10; % Initial value is 50 [ms]

matrixRows = Simulink.Parameter; % Define as parameter
matrixRows.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
matrixRows.Value = 10 ; % Initial value is 10 slots

SYNC1_ID = Simulink.Parameter; % Define as parameter
SYNC1_ID.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
SYNC1_ID.Value = 11; % ID

MMBS1_ID = Simulink.Parameter; % Define as parameter
MMBS1_ID.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
MMBS1_ID.Value = 12; % ID

SSTM1_ID = Simulink.Parameter; % Define as parameter
SSTM1_ID.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
SSTM1_ID.Value = 13; % ID

TRCK1_ID1 = Simulink.Parameter; % Define as parameter
TRCK1_ID1.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRCK1_ID1.Value = 14; % ID

TRCK1_ID2 = Simulink.Parameter; % Define as parameter
TRCK1_ID2.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRCK1_ID2.Value = 26; % ID

TRCK1_ID3 = Simulink.Parameter; % Define as parameter
TRCK1_ID3.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRCK1_ID3.Value = 37; % ID

TRLS1_ID4 = Simulink.Parameter; % Define as parameter
TRLS1_ID4.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRLS1_ID4.Value = 48; % ID

TRLS1_ID5 = Simulink.Parameter; % Define as parameter
TRLS1_ID5.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
TRLS1_ID5.Value = 59; % ID

trailer1TestAngle = Simulink.Parameter; % Define as parameter
trailer1TestAngle.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
trailer1TestAngle.Value = 0; % Angle in degrees

trailer2TestAngle = Simulink.Parameter; % Define as parameter
trailer2TestAngle.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
trailer2TestAngle.Value = 0; % Angle in degrees

controlWidth = Simulink.Parameter; % Define as parameter
controlWidth.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
controlWidth.Value = 10; % Angle in degrees
>>>>>>> 81417dd1e339209a4e3107c0a47e656175be45ac
