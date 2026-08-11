/* Ghidra address: 019801e0 */
/* Ghidra symbol: FUN_019801e0 */


undefined8 FUN_019801e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_3);
  if ((iVar1 == 0) && (*(char *)(*(longlong *)(param_1 + 0x58) + 0x28) == '\0')) {
    FUN_00414520(param_2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,param_3);
  }
  return param_2;
}

