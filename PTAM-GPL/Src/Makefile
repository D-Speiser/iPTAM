# DO NOT DELETE THIS LINE -- make depend depends on it.


# Edit the lines below to point to any needed include and link paths
# Or to change the compiler's optimization flags
CC = g++ -g -O3 -m32
COMPILEFLAGS = -I/usr/local/include -D_OSX -D_REENTRANT -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk/System/Library/Frameworks/Tk.framework/Versions/8.5/Headers/X11
LINKFLAGS = -framework OpenGL -framework VecLib -L/usr/local/lib -lGVars3 -lcvd

OBJECTS=	main.o\
		VideoSource_OSX.o\
		GLWindow2.o\
		GLWindowMenu.o\
		System.o \
		ATANCamera.o\
		KeyFrame.o\
		MapPoint.o\
		Map.o\
		SmallBlurryImage.o\
		ShiTomasi.o \
		MapMaker.o \
		Bundle.o \
		PatchFinder.o\
		HomographyInit.o\
		Relocaliser.o\
		MiniPatch.o\
		MapViewer.o\
		ARDriver.o\
		EyeGame.o\
		Tracker.o 

CALIB_OBJECTS=	GLWindow2.o\
		GLWindowMenu.o\
		VideoSource_OSX.o \
		CalibImage.o \
		CalibCornerPatch.o\
		ATANCamera.o \
		CameraCalibrator.o 

All: PTAM CameraCalibrator

PTAM:$(OBJECTS)
	$(CC) -o PTAM $(OBJECTS) $(LINKFLAGS)
	Rez OSX_resource_file.r -o PTAM
CameraCalibrator:$(CALIB_OBJECTS)
	$(CC) -o CameraCalibrator $(CALIB_OBJECTS) $(LINKFLAGS)
	Rez OSX_resource_file.r -o CameraCalibrator

%.o: %.cc
	$(CC) $< -o $@ -c $(COMPILEFLAGS)

clean:
	rm *.o


depend:
	rm dependecies; touch dependencies
	makedepend -fdependencies $(INCLUDEFLAGS) $(MOREINCS) *.cc *.h

-include dependencies