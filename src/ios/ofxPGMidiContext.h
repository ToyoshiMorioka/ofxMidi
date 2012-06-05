#pragma once

#import "PGMidi.h"
#import "ofxPGMidiDelegate.h"

/// global static wrapper around PGMidi Obj-C instance
class ofxPGMidiContext {

	public:
	
		/// creates the PGMidi instance if not already existing
		static void setup();
		
		/// get the PGMidi instance
		static PGMidi * getMidi();
		
		/// enable the iOS CoreMidi network interface? 
		static void enableNetwork(bool network);
	
	private:

		static NSAutoreleasePool * pool; // for happy garbage collection ...
		static PGMidi * midi; ///< global Obj-C PGMidi instance
};
