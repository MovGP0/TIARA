/* Ghidra address: 01d3f8b0 */
/* Ghidra symbol: FUN_01d3f8b0 */


undefined8 FUN_01d3f8b0(int param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar2 = 5;
  piVar1 = &DAT_01ffb1c8;
  do {
    if (param_1 == *piVar1) {
      *param_2 = (char)piVar1[1];
      return 1;
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

