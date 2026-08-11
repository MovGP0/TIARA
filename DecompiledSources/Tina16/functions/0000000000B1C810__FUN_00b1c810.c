/* Ghidra address: 00b1c810 */
/* Ghidra symbol: FUN_00b1c810 */


undefined8 FUN_00b1c810(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414be0(&local_10,param_2);
  iVar1 = FUN_00417170(&DAT_00b1ca60,local_10,1);
  if (iVar1 == 1) {
    iVar1 = FUN_00417170(&DAT_00b1ca6c,local_10,1);
    if (0 < iVar1) {
      uVar2 = 0;
      if (local_10 != 0) {
        uVar2 = *(uint *)(local_10 + -4) >> 1;
      }
      FUN_00416430(&local_10,local_10,iVar1 + 1,uVar2 - iVar1);
    }
  }
  iVar1 = FUN_00416420(local_10,0);
  if (iVar1 == 0) {
    FUN_00414bf0(param_1,"general");
  }
  else {
    FUN_00b155d0(local_20,local_10);
    iVar1 = FUN_00416420(local_20[0],L"general");
    if (iVar1 == 0) {
      FUN_00414bf0(param_1,"general");
    }
    else {
      iVar1 = FUN_00416420(local_10,&DAT_00b1ca9c);
      if (iVar1 == 0) {
        FUN_00414bf0(param_1,&DAT_00b1caac);
      }
      else {
        FUN_00b155d0(&local_28,local_10);
        iVar1 = FUN_00416420(local_28,L"mm:ss.0");
        if (iVar1 == 0) {
          FUN_00414bf0(param_1,&DAT_00b1cad4);
        }
        else {
          iVar1 = FUN_00417170(&DAT_00b1cae0,local_10,1);
          if (iVar1 < 1) {
            iVar1 = FUN_00417170(&DAT_00b1cae8,local_10,1);
            if (iVar1 < 1) {
              FUN_00414bf0(param_1,&DAT_00b1cad4);
              goto code_r0x00b1ca06;
            }
          }
          iVar1 = FUN_00417170(&DAT_00b1caf0,local_10,1);
          if (iVar1 < 1) {
            iVar1 = FUN_00417170(&DAT_00b1caf8,local_10,1);
            if (iVar1 < 1) {
              FUN_00414bf0(param_1,"integer");
              goto code_r0x00b1ca06;
            }
          }
          FUN_00414bf0(param_1,"double");
        }
      }
    }
  }
code_r0x00b1ca06:
  FUN_004145c0(&local_28,2);
  FUN_00414520(&local_10);
  return param_1;
}

