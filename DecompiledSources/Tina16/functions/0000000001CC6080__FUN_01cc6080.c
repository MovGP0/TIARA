/* Ghidra address: 01cc6080 */
/* Ghidra symbol: FUN_01cc6080 */


undefined8 FUN_01cc6080(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 != '\0') {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  }
  if ((param_3 != '\0') && (*(int *)(param_1 + 0x48) == 0)) {
    uVar1 = 1;
    FUN_00410f20();
  }
  return uVar1;
}

