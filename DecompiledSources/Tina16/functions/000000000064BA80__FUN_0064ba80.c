/* Ghidra address: 0064ba80 */
/* Ghidra symbol: FUN_0064ba80 */


void FUN_0064ba80(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar1 != '\0') {
    FUN_0064cf60(param_1[4],param_2);
  }
  return;
}

