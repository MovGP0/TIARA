/* Ghidra address: 01b678a0 */
/* Ghidra symbol: FUN_01b678a0 */


void FUN_01b678a0(longlong param_1,undefined8 param_2)

{
  undefined1 local_29 [9];
  
  (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x50))(*(longlong **)(param_1 + 0xda0),local_29);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xda0));
  if (*(longlong *)(param_1 + 0x998) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x998));
  }
  FUN_010f6580(param_1,param_2);
  return;
}

