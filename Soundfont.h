/*
 * Soundfont.h
 *
 * Created on: 	21 Octber 2016
 * author: 		Sebastien CAPOU (neskweek@gmail.com) and Andras Kun (kun.andras@yahoo.de)
 * Source : 	Source :   https://github.com/Protonerd/FX-SaberOS
 * Description:	Soundfont Config file for FX-SaberOS
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/4.0/.
 */


#ifndef SOUNDFONT_H_
#define SOUNDFONT_H_


#if defined DIYINO_PRIME or defined DIYINO_STARDUST_V3
  #define SOUNDFONT_QUANTITY 18
  #define NR_CONFIGFOLDERFILES 29
  #define NR_JUKEBOXSONGS 0
  #define NR_FILE_SF 30
#else if defined DIYINO_STARDUST_V2
  #define SOUNDFONT_QUANTITY 3
  #define NR_CONFIGFOLDERFILES 29
  #define NR_JUKEBOXSONGS 0
  #define NR_FILE_SF 16
#endif


class SoundFont {


public:

	SoundFont() {
    ID=0;
    powerOnTime =500;
    powerOffTime = 500;
	}
	;
	~SoundFont() {
		/*
		 delete ID;
		 delete boot;
		 delete powerOn;
		 delete powerOff;
		 delete hum;
		 delete swing;
		 delete clash;
		 delete lockup;
		 delete blaster;
		 */
	}
	;
void setID(uint16_t id) {
  /*
    uint16_t boot[2];
    uint16_t powerOn[2];
    uint16_t powerOff[2];
    uint16_t hum[2];
    uint16_t swing[2];
    uint16_t clash[2];
    uint16_t lockup[2];
    uint16_t blaster[2];
    uint16_t menu[2];
  */
    this->ID = id;

    switch (id) {
  #if defined DIYINO_PRIME or defined DIYINO_STARDUST_V3
    default:
    case 0:
      // soundFont directory 01 :
      this->powerOnTime = 300;
      this->powerOffTime = 300;
      break;
    case 1:
      // soundFont directory 02 :
      this->powerOnTime = 700;
      this->powerOffTime = 900;
      break;
    case 2:
      // soundFont directory 03 :
      this->powerOnTime = 500;
      this->powerOffTime = 500;
      break;
    case 3:
      // soundFont directory 04 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
     case 4:
      // soundFont directory 05 :
      this->powerOnTime = 700;
      this->powerOffTime = 1500;
      break;
    case 5:
      // soundFont directory 06 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 6:
      // soundFont directory 07 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 7:
      // soundFont directory 08 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 8:
      // soundFont directory 09 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;     
    case 9:
      // soundFont directory 10 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 10:
      // soundFont directory 11 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 11:
      // soundFont directory 12 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 12:
      // soundFont directory 13 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 13:
      // soundFont directory 14 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 14:
      // soundFont directory 15 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 15:
      // soundFont directory 16 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 16:
      // soundFont directory 17 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;
    case 17:
      // soundFont directory 18 :
      this->powerOnTime = 700;
      this->powerOffTime = 600;
      break;                                                                              
  #else if DIYINO_STARDUST_V2
    default:
    case 0:
      // soundFont directory 01 :
      this->powerOnTime = 300;
      this->powerOffTime = 300;
      break;
    case 1:
      // soundFont directory 02 :
      this->powerOnTime = 700;
      this->powerOffTime = 900;
      break;
    case 2:
      // soundFont directory 03 :
      this->powerOnTime = 500;
      this->powerOffTime = 500;
      break;
  #endif // DIYINO_PRIME
    }
}

  #if defined DIYINO_PRIME  or defined DIYINO_STARDUST_V3 // 30 files per sound font
    #define SF_BOOT_OFFSET 1
    #define SF_POWERON_OFFSET 2
    #define SF_POWEROFF_OFFSET 6
    #define SF_SWING_OFFSET 8
    #define SF_CLASH_OFFSET 16
    #define SF_LOCKUP_OFFSET 24
    #define SF_BLASTER_OFFSET 25
    #define SF_MENU_OFFSET 29
    #define SF_HUM_OFFSET 30
    #define SF_BOOT_NR 1
    #define SF_POWERON_NR 4
    #define SF_POWEROFF_NR 2
    #define SF_SWING_NR 8
    #define SF_CLASH_NR 8
    #define SF_LOCKUP_NR 1
    #define SF_BLASTER_NR 4
    #define SF_MENU_NR 1
    #define SF_HUM_NR 1
  #else if DIYINO_STARDUST_V2 // 18 files per sound font
    #define SF_BOOT_OFFSET 1
    #define SF_POWERON_OFFSET 2
    #define SF_POWEROFF_OFFSET 3
    #define SF_SWING_OFFSET 4
    #define SF_CLASH_OFFSET 8
    #define SF_LOCKUP_OFFSET 12
    #define SF_BLASTER_OFFSET 13
    #define SF_MENU_OFFSET 15
    #define SF_HUM_OFFSET 16
    #define SF_BOOT_NR 1
    #define SF_POWERON_NR 1
    #define SF_POWEROFF_NR 1
    #define SF_SWING_NR 4
    #define SF_CLASH_NR 4
    #define SF_LOCKUP_NR 1
    #define SF_BLASTER_NR 2
    #define SF_MENU_NR 1
    #define SF_HUM_NR 1
  #endif

	uint8_t getID() const {
    #ifdef LINKEDLIST
      return this->ID;
    #else
      return 1;
    #endif
    
	}

	const uint16_t getBlaster(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_BLASTER_OFFSET + random(0,SF_BLASTER_NR);
	}

	const uint16_t getBoot(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_BOOT_OFFSET;    
	}

	const uint16_t getClash(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_CLASH_OFFSET + random(0,SF_CLASH_NR);
	}

	const uint16_t getHum(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_HUM_OFFSET + random(0,SF_HUM_NR);
	}

	const uint16_t getLockup(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_LOCKUP_OFFSET + random(0,SF_LOCKUP_NR);
	}

	const uint16_t getPowerOff(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_POWEROFF_OFFSET + random(0,SF_POWEROFF_NR);
	}

	const uint16_t getPowerOn(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_POWERON_OFFSET + random(0,SF_POWERON_NR);
	}

	const uint16_t getSwing(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_SWING_OFFSET + random(0,SF_SWING_NR);
	}

  const uint16_t getMenu(uint16_t offset = 0) {
      return NR_CONFIGFOLDERFILES + NR_JUKEBOXSONGS + offset + SF_MENU_OFFSET;
  }
  
	uint16_t getPowerOffTime() const {
      //uint16_t powerOffTime=500;
		return powerOffTime;
	}

	uint16_t getPowerOnTime() const {
      //uint16_t powerOnTime=500;
    return powerOnTime;
	}
private:

  uint16_t ID;
  uint16_t powerOnTime;
  uint16_t powerOffTime;

};

#endif /* SOUNDFONT_H_ */

