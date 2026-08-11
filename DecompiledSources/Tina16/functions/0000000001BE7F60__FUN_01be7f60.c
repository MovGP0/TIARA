/* Ghidra address: 01be7f60 */
/* Ghidra symbol: FUN_01be7f60 */


void FUN_01be7f60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x450))(param_1,param_2);
  FUN_01c01c50(param_1,param_2);
  lVar1 = FUN_01bfaa70(param_1[0x93]);
  *(undefined1 *)(lVar1 + 0x40) = 0;
  return;
}

