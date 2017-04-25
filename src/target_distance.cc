void setup() {
    
}

void loop() {

    int mode = 0;

    int mode0option = 0;
    int mode1option = 0;

    int displayVal = 9999;

    // cycle forever
    for (;;) {
	// check mode button

	// check option button

	if (mode == 0) {
	    // show speed / clock
	    if (mode0option == 0) {
		// show speed
	    } else if (mode0option ==1) {
		// show clock
	    }
	}

	if (mode == 1) {
	    // show distance
	    long targetLon = targetLonTable[mode1option];
	    long targetLat = targetLatTable[mode1option];

	    long currentLon = 0L;
	    long currentLat = 0L;

	    long dist = getTargetDist(targetLon, targetLat, 
		    currentLon, currentLat);
	    
	    // displayVal
	}

	// updateDisplay
	

    }
}
