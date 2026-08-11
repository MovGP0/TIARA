/* Ghidra address: 00b29e80 */
/* Ghidra symbol: FUN_00b29e80 */


undefined1 FUN_00b29e80(undefined8 param_1,longlong param_2,short *param_3,undefined1 *param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_39;
  undefined8 local_30;
  undefined8 local_28;
  short *local_20;
  
  local_20 = (short *)0x0;
  local_28 = 0;
  local_30 = 0;
  local_39 = 0;
  FUN_00414520(&local_28);
  FUN_00414520(&local_30);
  *param_4 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + -4) >> 1;
  }
  if (uVar3 != 0) {
    FUN_00414be0(&local_20,param_2);
    if (*local_20 == 0x27) {
      uVar3 = 0;
      if (local_20 != (short *)0x0) {
        uVar3 = *(uint *)(local_20 + -2) >> 1;
      }
      if (local_20[(longlong)(int)uVar3 + -1] == 0x27) {
        uVar3 = 0;
        if (local_20 != (short *)0x0) {
          uVar3 = *(uint *)(local_20 + -2) >> 1;
        }
        FUN_00416430(&local_20,local_20,2,uVar3 - 2);
      }
    }
    psVar1 = local_20;
    uVar3 = 0;
    if (local_20 != (short *)0x0) {
      uVar3 = *(uint *)(local_20 + -2) >> 1;
    }
    if (uVar3 != 0) {
      iVar4 = FUN_00417170(&LAB_00b2a080,local_20,1);
      if (iVar4 < 1) {
        FUN_00414be0(&local_28,local_20);
      }
      else {
        FUN_00416430(&local_28,local_20,1,iVar4 + -1);
        uVar3 = 0;
        if (psVar1 != (short *)0x0) {
          uVar3 = *(uint *)(psVar1 + -2) >> 1;
        }
        FUN_00416430(&local_30,local_20,iVar4 + 1,uVar3 - iVar4);
        iVar4 = FUN_00416420(local_28,0);
        if ((iVar4 == 0) || (iVar4 = FUN_00416420(local_30,0), iVar4 == 0)) goto LAB_00b2a03f;
      }
      iVar4 = FUN_00416420(local_30,0);
      if (iVar4 == 0) {
        sVar2 = FUN_00b29b20(param_1,local_28);
        *param_3 = sVar2;
      }
      else {
        sVar2 = FUN_00b29b80(param_1,local_28,local_30);
        *param_3 = sVar2;
        *param_4 = 1;
      }
      if (*param_3 != -1) {
        local_39 = 1;
      }
    }
  }
LAB_00b2a03f:
  FUN_004145c0(&local_30,3);
  return local_39;
}

