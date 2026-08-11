/* Ghidra address: 01bb2b10 */
/* Ghidra symbol: FUN_01bb2b10 */


void FUN_01bb2b10(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),1);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),1);
  FUN_01bb3de0(param_1,&local_20,&local_28);
  FUN_01bb3f00(param_1,*(undefined8 *)(param_1 + 0x780),&local_20,&local_28);
  FUN_01bb3e80(param_1,local_20,local_28);
  return;
}

