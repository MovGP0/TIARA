/* Ghidra address: 014a7030 */
/* Ghidra symbol: FUN_014a7030 */


undefined1 FUN_014a7030(undefined8 param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  if (param_2 == 0) {
    local_31 = 0;
  }
  else {
    FUN_00441920(&local_30,param_1);
    FUN_004414c0(&local_28,local_30,0);
    FUN_00416dc0(local_20,local_28,1,8);
    FUN_0043e130(&local_10,local_20[0]);
    bVar2 = 0xa3;
    iVar1 = 0;
    if (local_10 != 0) {
      iVar1 = *(int *)(local_10 + -4);
    }
    if (0 < iVar1) {
      do {
        bVar2 = bVar2 ^ *(byte *)(local_10 + -2 + (longlong)iVar1 * 2);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (((uint)*(byte *)(param_2 + 0x243) == bVar2 / 0x10 + 0x48) &&
       (*(char *)(param_2 + 0x24b) == (byte)((bVar2 & 0xf) + 0x4c))) {
      local_31 = 1;
    }
    else {
      local_31 = 0;
    }
  }
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_10);
  return local_31;
}

