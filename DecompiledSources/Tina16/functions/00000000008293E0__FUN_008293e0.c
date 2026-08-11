/* Ghidra address: 008293e0 */
/* Ghidra symbol: FUN_008293e0 */


void FUN_008293e0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar1 != '\0') {
    FUN_0082a6c0(param_1[5],param_2);
  }
  return;
}

