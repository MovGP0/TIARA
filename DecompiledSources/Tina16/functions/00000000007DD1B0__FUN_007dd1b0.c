/* Ghidra address: 007dd1b0 */
/* Ghidra symbol: FUN_007dd1b0 */


void FUN_007dd1b0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 != '\0') {
    FUN_007e2fb0(param_1[4],param_2);
  }
  return;
}

