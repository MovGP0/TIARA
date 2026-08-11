/* Ghidra address: 00667000 */
/* Ghidra symbol: FUN_00667000 */


void FUN_00667000(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  FUN_00411a80(param_1,param_2);
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_00667a20(param_1);
  FUN_004d0ea0(param_1,param_2 & 0xfc);
  local_30 = FUN_004afa30(*(undefined8 *)(param_1 + 0x48));
  iVar2 = *(int *)(local_30 + 0x10);
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_004aeac0(local_30,local_24);
      FUN_00410f20(uVar1);
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_20 = *(longlong *)(param_1 + 0x48);
  FUN_00412130(*(undefined8 *)(local_20 + 0x10));
  FUN_004afcc0(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

