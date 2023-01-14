CC = gcc
CFLAGS = -Wall -g

SRC_DIR  = ../src
OBJ_DIR  = ./build
INCLUDES = -I${SRC_DIR}

#SOURCE_LIST += ${SRC_DIR}/AdcConductor.c ${SRC_DIR}/AdcModel.c ${SRC_DIR}/TemperatureFilter.c ${SRC_DIR}/TemperatureCalculator.c ${SRC_DIR}/AdcHardware.c
#SOURCE_LIST += ${SRC_DIR}/AdcHardwareConfigurator.c ${SRC_DIR}/Executor.c ${SRC_DIR}/TimerModel.c ${SRC_DIR}/TimerInterruptHandler.c ${SRC_DIR}/TemperatureFilter.c ${SRC_DIR}/AdcTemperatureSensor.c 
#SOURCE_LIST += ${SRC_DIR}/IntrinsicsWrapper.c ${SRC_DIR}/TaskScheduler.c ${SRC_DIR}/TemperatureCalculator.c ${SRC_DIR}/TimerConductor.c ${SRC_DIR}/UsartTransmitBufferStatus.c 
#SOURCE_LIST += ${SRC_DIR}/UsartTransmitBufferStatus.c ${SRC_DIR}/UsartPutChar.c ${SRC_DIR}/UsartModel.c ${SRC_DIR}/UsartHardware.c ${SRC_DIR}/UsartConfigurator.c ${SRC_DIR}/UsartBaudRateRegisterCalculator.c
#SOURCE_LIST += ${SRC_DIR}/TimerModel.c ${SRC_DIR}/UsartConductor.c ${SRC_DIR}/TimerInterruptConfigurator.c ${SRC_DIR}/TimerHardware.c ${SRC_DIR}/main.c 

SOURCE_LIST += ${SRC_DIR}/AdcConductor.c ${SRC_DIR}/AdcHardware.c ${SRC_DIR}/AdcHardwareConfigurator.c ${SRC_DIR}/AdcModel.c ${SRC_DIR}/AdcTemperatureSensor.c ${SRC_DIR}/Executor.c ${SRC_DIR}/IntrinsicsWrapper.c ${SRC_DIR}/Model.c ${SRC_DIR}/TaskScheduler.c ${SRC_DIR}/TemperatureCalculator.c ${SRC_DIR}/TemperatureFilter.c ${SRC_DIR}/TimerConductor.c ${SRC_DIR}/TimerConfigurator.c ${SRC_DIR}/TimerHardware.c ${SRC_DIR}/TimerInterruptConfigurator.c ${SRC_DIR}/TimerInterruptHandler.c ${SRC_DIR}/TimerModel.c ${SRC_DIR}/UsartBaudRateRegisterCalculator.c ${SRC_DIR}/UsartConductor.c ${SRC_DIR}/UsartConfigurator.c ${SRC_DIR}/UsartHardware.c ${SRC_DIR}/UsartModel.c ${SRC_DIR}/UsartPutChar.c ${SRC_DIR}/UsartTransmitBufferStatus.c ${SRC_DIR}/Main.c


OBJECTS_LIST = $(SOURCE_LIST:.c=.o)

TARGET = main.exe

.PHONY: depend clean

all: create_dir build

create_dir:
	mkdir -p ${OBJ_DIR}

build: $(TARGET)
	@echo  Simple compiler named main.exe has been compiled.

$(TARGET): $(OBJECTS_LIST) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(OBJECTS_LIST)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) *.o *~ $(TARGET)

depend: $(SOURCE_LIST)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
