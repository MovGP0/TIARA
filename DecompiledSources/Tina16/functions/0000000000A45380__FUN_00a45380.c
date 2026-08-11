/* Ghidra address: 00a45380 */
/* Ghidra symbol: FUN_00a45380 */


void FUN_00a45380(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
  (**(code **)(*local_20 + 0xc0))(local_20,*(undefined8 *)(param_1 + 0x88));
  uVar1 = FUN_00a48dc0(&PTR_FUN_00a43c98,1,local_20);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}

