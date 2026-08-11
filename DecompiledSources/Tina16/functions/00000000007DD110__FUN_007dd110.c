/* Ghidra address: 007dd110 */
/* Ghidra symbol: FUN_007dd110 */


void FUN_007dd110(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    FUN_007e2da0(param_1[4],param_2);
  }
  return;
}

