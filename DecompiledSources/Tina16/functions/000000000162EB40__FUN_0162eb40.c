/* Ghidra address: 0162eb40 */
/* Ghidra symbol: FUN_0162eb40 */


void FUN_0162eb40(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x14) != param_2) && (*(char *)(param_1 + 0x38) == '\0')) {
    uVar1 = FUN_01614c70(param_1);
    FUN_01615b20(param_1,uVar1);
    *(undefined4 *)(param_1 + 0x14) = 5;
  }
  return;
}

