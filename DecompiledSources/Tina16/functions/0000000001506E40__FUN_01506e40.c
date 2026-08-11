/* Ghidra address: 01506e40 */
/* Ghidra symbol: FUN_01506e40 */


void FUN_01506e40(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x9cc) = 0x10;
  *(undefined1 *)(param_1 + 0x990) = 10;
  (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x268))(*(longlong **)(param_1 + 0xb68),0);
  FUN_010f5a80(param_1,param_1);
  *(undefined1 *)(param_1 + 0x9c1) = 1;
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  *(undefined1 *)(lVar1 + 0xc0) = 1;
  *(undefined1 *)(lVar1 + 0xc1) = 1;
  *(undefined1 *)(param_1 + 0xc08) = 0;
  *(undefined8 *)(param_1 + 0xc50) = 0;
  *(undefined8 *)(param_1 + 0xc58) = 0x3ff0000000000000;
  FUN_01506c40(param_1);
  return;
}

