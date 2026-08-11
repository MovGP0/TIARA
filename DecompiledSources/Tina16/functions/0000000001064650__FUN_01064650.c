/* Ghidra address: 01064650 */
/* Ghidra symbol: FUN_01064650 */


bool FUN_01064650(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (param_2[2] != 0) {
    return param_2[2] != 0;
  }
  if (0 < param_3) {
    iVar1 = FUN_004170c0(L"Arduino Uno",*param_2,1);
    if (iVar1 < 1) {
      iVar1 = FUN_004170c0(L"Arduino Nano",*param_2,1);
      if ((iVar1 < 1) || (iVar1 = FUN_004170c0(L"ATmega328",*param_2,1), iVar1 < 1)) {
        iVar1 = FUN_004170c0(L"Arduino Nano",*param_2,1);
        if ((iVar1 < 1) || (iVar1 = FUN_004170c0(L"ATmega168",*param_2,1), iVar1 < 1)) {
          iVar1 = FUN_004170c0(L"Arduino Mega",*param_2,1);
          if ((iVar1 < 1) || (iVar1 = FUN_004170c0(L"ATmega2560",*param_2,1), iVar1 < 1)) {
            iVar1 = FUN_004170c0(L"Arduino Mega",*param_2,1);
            if ((iVar1 < 1) || (iVar1 = FUN_004170c0(L"ATmega1280",*param_2,1), iVar1 < 1)) {
              iVar1 = FUN_004170c0(L"Arduino Mini",*param_2,1);
              if ((iVar1 < 1) || (iVar1 = FUN_004170c0(L"ATmega328",*param_2,1), iVar1 < 1)) {
                iVar1 = FUN_004170c0(L"Arduino Mini",*param_2,1);
                if ((iVar1 < 1) || (iVar1 = FUN_004170c0(L"ATmega168",*param_2,1), iVar1 < 1)) {
                  iVar1 = FUN_004170c0(L"Arduino Micro",*param_2,1);
                  if (iVar1 < 1) {
                    iVar1 = FUN_004170c0(L"Arduino Nano Every",*param_2,1);
                    if (iVar1 < 1) {
                      iVar1 = FUN_004170c0(L"Arduino MKR1000",*param_2,1);
                      if (0 < iVar1) {
                        FUN_00414ad0(param_2 + 2,L"arduino:samd:mkr1000");
                      }
                    }
                    else {
                      FUN_00414ad0(param_2 + 2,L"arduino:megaavr:nanoevery");
                    }
                  }
                  else {
                    FUN_00414ad0(param_2 + 2,L"arduino:avr:micro");
                  }
                }
                else {
                  FUN_00414ad0(param_2 + 2,L"arduino:avr:mini:cpu=atmega168");
                }
              }
              else {
                FUN_00414ad0(param_2 + 2,L"arduino:avr:mini:cpu=atmega328");
              }
            }
            else {
              FUN_00414ad0(param_2 + 2,L"arduino:avr:mega:cpu=atmega1280");
            }
          }
          else {
            FUN_00414ad0(param_2 + 2,L"arduino:avr:mega:cpu=atmega2560");
          }
        }
        else {
          FUN_00414ad0(param_2 + 2,L"arduino:avr:nano:cpu=atmega168");
        }
      }
      else {
        FUN_00414ad0(param_2 + 2,L"arduino:avr:nano:cpu=atmega328");
      }
    }
    else {
      FUN_00414ad0(param_2 + 2,L"arduino:avr:uno");
    }
    return param_2[2] != 0;
  }
  return false;
}

