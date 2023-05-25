% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
% an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below
%% Variables
frequency_IRQ = 1000; % IRQ every 1000 ticks of hardware clock -> local clock: 1 kHz


idA = 4;
idB = 6;
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
dataAtx = Simulink.Signal;

dataBrx = Simulink.Signal;
dataBrx.StorageClass = 'ExportedGlobal';
dataBrx = Simulink.Signal;

dataBtx = Simulink.Signal;
dataBtx.StorageClass = 'ExportedGlobal';
dataBtx = Simulink.Signal;

slotSelected = Simulink.Signal;
slotSelected.StorageClass = 'ExportedGlobal';
slotSelected = Simulink.Signal;

roleA = Simulink.Signal;
roleA.StorageClass = 'ExportedGlobal';
roleA = Simulink.Signal;

roleB = Simulink.Signal;
roleB.StorageClass = 'ExportedGlobal';
roleB = Simulink.Signal;

canActive = Simulink.Signal;
canActive.StorageClass = 'ExportedGlobal';
canActive = Simulink.Signal;

setSlotTime = Simulink.Signal;
setSlotTime.StorageClass = 'ExportedGlobal';
setSlotTime = Simulink.Signal;
%% Parameters
% Defining a parameter for editing in HANtune
ClockOn = Simulink.Parameter; % Define as parameter
ClockOn.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
ClockOn.Value = 0; % Initial value is set to zero

slotTime = Simulink.Parameter; % Define as parameter
slotTime.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
slotTime.Value = 50; % Initial value is 50 [ms]

matrixRows = Simulink.Parameter; % Define as parameter
matrixRows.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
matrixRows.Value = 2; % Initial value is 50 [ms]
