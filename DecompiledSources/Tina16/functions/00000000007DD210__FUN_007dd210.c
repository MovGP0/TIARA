/* Ghidra address: 007dd210 */
/* Ghidra symbol: FUN_007dd210 */


void FUN_007dd210(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (cVar1 != '\0') {
    FUN_007e2f80(param_1[4],param_2);
  }
  return;
}

