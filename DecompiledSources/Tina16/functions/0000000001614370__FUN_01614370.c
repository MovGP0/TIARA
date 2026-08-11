/* Ghidra address: 01614370 */
/* Ghidra symbol: FUN_01614370 */


undefined8 FUN_01614370(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x10) == 0) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) == 0) {
                FUN_00414ad0(param_1,L"UNDEFINED");
              }
              else {
                FUN_00414ad0(param_1,L"ANALMODE_NOISE");
              }
            }
            else {
              FUN_00414ad0(param_1,L"ANALMODE_AC");
            }
          }
          else {
            FUN_00414ad0(param_1,L"ANALMODE_TR");
          }
        }
        else {
          FUN_00414ad0(param_1,L"ANALMODE_DC");
        }
      }
      else {
        FUN_00414ad0(param_1,L"ANALMODE_IC");
      }
    }
    else {
      FUN_00414ad0(param_1,L"ANALMODE_STATIC");
    }
  }
  else {
    FUN_00414ad0(param_1,L"ANALMODE_NODESET");
  }
  return param_1;
}

