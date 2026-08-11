/* Ghidra address: 0170b5e0 */
/* Ghidra symbol: FUN_0170b5e0 */


void FUN_0170b5e0(longlong param_1)

{
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  
  FUN_0170b440(param_1,param_1 + 0x58,0xff);
  FUN_0170b440(param_1,param_1 + 0x158,0xff);
  FUN_0170b440(param_1,param_1 + 600,0xff);
  FUN_0170b440(param_1,param_1 + 0x358,0xff);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50),local_1c,4);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50),local_20,4);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50),local_24,4);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50),local_28,4);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50),local_2c,4);
  FUN_0170b4e0(param_1,*(undefined8 *)(param_1 + 8));
  FUN_0170b4e0(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_0170b4e0(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_0170b4e0(param_1,*(undefined8 *)(param_1 + 0x20));
  FUN_0170b4e0(param_1,*(undefined8 *)(param_1 + 0x28));
  return;
}

