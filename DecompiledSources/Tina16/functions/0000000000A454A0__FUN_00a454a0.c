/* Ghidra address: 00a454a0 */
/* Ghidra symbol: FUN_00a454a0 */


void FUN_00a454a0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
  (**(code **)(*local_20 + 0xc0))(local_20,*(undefined8 *)(param_1 + 0x88));
  uVar1 = FUN_00a48dc0(&PTR_FUN_00a43c98,1,local_20);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}

