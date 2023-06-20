% This m-file will be run automatically when starting model 'HANcoder_E407'
% The name of the m-file must consist of the model name with the addition:
% '_startup'!
% This m-file will be run when loading the model because it is added to the
% model callbacks: see File->Model Properties->Model Properties->Callbacks

% In this m-file the signals and parameters for HANtune can be defined. As
% an example the signal LedValue and parameter HANtuneOverride are already
% defined.
% You can add your own signals and parameters to this m-file below

%% Signals
% Defining signals for viewing in HANtune
LedValue = Simulink.Signal; % Define as signal
LedValue.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

analogIn = Simulink.Signal; % Define as signal
analogIn.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

pwmOutput = Simulink.Signal; % Define as parameter
pwmOutput.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

desiredPosition = Simulink.Signal; % Define as parameter
desiredPosition.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

motorPosition = Simulink.Signal; % Define as parameter
motorPosition.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

speedActual = Simulink.Signal; % Define as parameter
speedActual.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

speedDesired = Simulink.Signal; % Define as parameter
speedDesired.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

rest = Simulink.Signal; % Define as parameter
rest.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

newMsg = Simulink.Signal; % Define as parameter
newMsg.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune

% Defining System Information Signals
SI_FreeStack = Simulink.Signal;
SI_FreeStack.StorageClass = 'ExportedGlobal';
SI_CPUload = Simulink.Signal;
SI_CPUload.StorageClass = 'ExportedGlobal';
SI_FreeHeap = Simulink.Signal;
SI_FreeHeap.StorageClass = 'ExportedGlobal';

%% Parameters
% Defining a parameter for editing in HANtune
HANtuneOverride = Simulink.Parameter; % Define as parameter
HANtuneOverride.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
HANtuneOverride.Value = 0; % Initial value is set to zero, no override

motorPWM = Simulink.Parameter; % Define as parameter
motorPWM.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
motorPWM.Value = 0; % Initial value is set to zero, no override

speedMode = Simulink.Parameter; % Define as parameter
speedMode.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
speedMode.Value = 1; % Initial value is set to zero, no override

sendMsg = Simulink.Parameter; % Define as parameter
sendMsg.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
sendMsg.Value = 0; % Initial value is set to zero, no override

speedDesiredIn = Simulink.Parameter; % Define as parameter
speedDesiredIn.StorageClass = 'ExportedGlobal'; % Only Exported Global will be visible in HANtune
speedDesiredIn.Value = 0; % Initial value is set to zero, no override
