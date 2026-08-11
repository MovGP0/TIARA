/* Ghidra address: 0064ba50 */
/* Ghidra symbol: FUN_0064ba50 */


void FUN_0064ba50(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar1 != '\0') {
    FUN_0064cf80(param_1[4],param_2);
  }
  return;
}

