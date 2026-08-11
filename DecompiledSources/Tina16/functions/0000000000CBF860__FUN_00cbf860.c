/* Ghidra address: 00cbf860 */
/* Ghidra symbol: FUN_00cbf860 */


void FUN_00cbf860(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_28 = (longlong *)FUN_004afa30(param_1);
  (**(code **)(*local_28 + 0x10))(local_28);
  FUN_004aef40(local_28,*(undefined4 *)(param_2 + 0x14));
  iVar2 = *(int *)(param_2 + 0x10);
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_2,local_1c);
      FUN_004ae7e0(local_28,uVar1);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return;
}

