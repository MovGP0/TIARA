/* Ghidra address: 00611780 */
/* Ghidra symbol: FUN_00611780 */


undefined8 FUN_00611780(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_004ae870(param_1[1],*(int *)(param_1[1] + 0x10) + -1);
  return uVar1;
}

