/* Ghidra address: 00947190 */
/* Ghidra symbol: FUN_00947190 */


void FUN_00947190(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  short *local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = (short *)0x0;
  FUN_00414520(param_2);
  FUN_00947610(&local_10,param_1);
  uVar1 = 0;
  if (local_10 != (short *)0x0) {
    uVar1 = *(uint *)(local_10 + -2) >> 1;
  }
  if (uVar1 < 2) {
    *param_3 = 1;
  }
  else {
    if (*local_10 == 0x28) {
      uVar1 = 0;
      if (local_10 != (short *)0x0) {
        uVar1 = *(uint *)(local_10 + -2) >> 1;
      }
      bVar2 = local_10[(longlong)(int)uVar1 + -1] != 0x29;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_3 = 1;
    }
    else {
      uVar1 = 0;
      if (local_10 != (short *)0x0) {
        uVar1 = *(uint *)(local_10 + -2) >> 1;
      }
      FUN_00416430(&local_28,local_10,2,uVar1 - 2);
      FUN_00947610(local_20,local_28);
      FUN_00414b90(param_2,local_20[0]);
      *param_3 = 0;
    }
  }
  FUN_004145c0(&local_28,2);
  FUN_00414520(&local_10);
  return;
}

