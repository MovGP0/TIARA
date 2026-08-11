/* Ghidra address: 00cbfb80 */
/* Ghidra symbol: FUN_00cbfb80 */


void FUN_00cbfb80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_004afa30(param_1);
  iVar2 = (int)local_20[2];
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_004aeac0(local_20,local_24);
      FUN_00410f20(uVar1);
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*local_20 + 0x10))(local_20);
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return;
}

