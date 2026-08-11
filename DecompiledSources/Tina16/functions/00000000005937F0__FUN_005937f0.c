/* Ghidra address: 005937f0 */
/* Ghidra symbol: FUN_005937f0 */


void FUN_005937f0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_2 + -8);
  }
  FUN_00525420(param_2,*(int *)(param_1 + 0x14) * iVar1,0);
  return;
}

