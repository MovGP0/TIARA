/* Ghidra address: 007dd0b0 */
/* Ghidra symbol: FUN_007dd0b0 */


void FUN_007dd0b0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (cVar1 != '\0') {
    FUN_007e2c60(param_1[4],param_2);
  }
  return;
}

