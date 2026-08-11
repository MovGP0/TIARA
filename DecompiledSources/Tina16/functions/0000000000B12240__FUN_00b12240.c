/* Ghidra address: 00b12240 */
/* Ghidra symbol: FUN_00b12240 */


bool FUN_00b12240(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  bool local_21;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_21 = false;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x628);
  if (lVar1 != 0) {
    cVar2 = FUN_006805f0(lVar1);
    if (cVar2 != '\0') {
      FUN_008350c0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x628),&local_10);
      FUN_008503f0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x628));
      FUN_008350c0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x628),local_20);
      iVar3 = FUN_00416db0(local_10,local_20[0]);
      local_21 = iVar3 != 0;
      if (local_21) {
        FUN_00680ad0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x628));
      }
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return local_21;
}

