# invoke SourceDir generated makefile for alarm_clock.pem4f
alarm_clock.pem4f: .libraries,alarm_clock.pem4f
.libraries,alarm_clock.pem4f: package/cfg/alarm_clock_pem4f.xdl
	$(MAKE) -f /home/burneykb/repos/AlarmClock/src/makefile.libs

clean::
	$(MAKE) -f /home/burneykb/repos/AlarmClock/src/makefile.libs clean

