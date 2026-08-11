/* Ghidra address: 01bfc4a0 */
/* Ghidra symbol: FUN_01bfc4a0 */


void FUN_01bfc4a0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 != '\0') {
    FUN_01bfe1b0(param_1[4],param_2);
  }
  return;
}

