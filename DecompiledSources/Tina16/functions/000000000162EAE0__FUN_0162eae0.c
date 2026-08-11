/* Ghidra address: 0162eae0 */
/* Ghidra symbol: FUN_0162eae0 */


void FUN_0162eae0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      uVar1 = FUN_01614c70(param_1);
      FUN_01615b20(param_1,uVar1);
      *(undefined4 *)(param_1 + 0x14) = 5;
    }
    if (*(char *)(param_2 + 0x38) == '\0') {
      uVar1 = FUN_01614c70(param_2);
      FUN_01615b20(param_2,uVar1);
      *(undefined4 *)(param_2 + 0x14) = 5;
    }
  }
  return;
}

