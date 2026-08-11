/* Ghidra address: 00619270 */
/* Ghidra symbol: FUN_00619270 */


undefined8 FUN_00619270(int *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 < 0xb) && (*(int *)PTR_DAT_02005280 != 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

