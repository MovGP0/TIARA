/* Ghidra address: 008ffae0 */
/* Ghidra symbol: FUN_008ffae0 */


undefined1 FUN_008ffae0(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_31 = 1;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + -4) >> 1;
  }
  FUN_00416430(local_20,param_1,uVar2,1);
  iVar3 = FUN_00416420(local_20[0],&DAT_008ffcf0);
  if (iVar3 == 0) {
    FUN_00416430(&local_28,param_1,1,3);
    iVar3 = FUN_00416420(local_28,&DAT_008ffcf8);
    if (iVar3 == 0) {
      uVar2 = 0;
      if (param_1 != 0) {
        uVar2 = *(uint *)(param_1 + -4) >> 1;
      }
      if (uVar2 < 5) {
        local_31 = 0;
      }
      else {
        uVar2 = 0;
        if (param_1 != 0) {
          uVar2 = *(uint *)(param_1 + -4) >> 1;
        }
        iVar3 = 4;
        if (3 < (int)(uVar2 - 1)) {
          iVar4 = uVar2 - 4;
          do {
            uVar1 = *(ushort *)(param_1 + -2 + (longlong)iVar3 * 2);
            if ((((uVar1 < 0x30) || (0x39 < uVar1)) && ((uVar1 < 0x61 || (0x66 < uVar1)))) &&
               ((uVar1 < 0x41 || (0x46 < uVar1)))) {
              local_31 = 0;
              break;
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    else {
      uVar2 = 0;
      if (param_1 != 0) {
        uVar2 = *(uint *)(param_1 + -4) >> 1;
      }
      if (uVar2 < 4) {
        local_31 = 0;
      }
      else {
        FUN_00416430(&local_30,param_1,1,2);
        iVar3 = FUN_00416420(local_30,&LAB_008ffd04);
        if (iVar3 == 0) {
          uVar2 = 0;
          if (param_1 != 0) {
            uVar2 = *(uint *)(param_1 + -4) >> 1;
          }
          iVar3 = 3;
          if (2 < (int)(uVar2 - 1)) {
            iVar4 = uVar2 - 3;
            do {
              uVar1 = *(ushort *)(param_1 + -2 + (longlong)iVar3 * 2);
              if ((uVar1 < 0x30) || (0x39 < uVar1)) {
                local_31 = 0;
                break;
              }
              iVar3 = iVar3 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          local_31 = 0;
        }
      }
    }
  }
  else {
    local_31 = 0;
  }
  FUN_004145c0(&local_30,3);
  return local_31;
}

