/* Ghidra address: 01c02450 */
/* Ghidra symbol: FUN_01c02450 */


void FUN_01c02450(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  for (lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,0);
      (lVar1 != 0 && (*(char *)(lVar1 + 0x58) == '\0'));
      lVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,lVar1,0)) {
  }
  return;
}

