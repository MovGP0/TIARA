/* Ghidra address: 01a679a0 */
/* Ghidra symbol: FUN_01a679a0 */


void FUN_01a679a0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x729) != '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0))
    ;
    FUN_01a67a80(param_1,uVar1);
  }
  return;
}

