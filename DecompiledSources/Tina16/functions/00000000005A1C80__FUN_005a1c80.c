/* Ghidra address: 005a1c80 */
/* Ghidra symbol: FUN_005a1c80 */


void FUN_005a1c80(longlong param_1,int param_2,char param_3)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x50) < 1) {
    if (param_3 == '\0') {
      FUN_0041b800(*(longlong *)(param_1 + 8) + 8 + (longlong)param_2 * 0x20);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)param_2 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      if (*(int *)(param_1 + 0x10) + 4 < *(int *)(param_1 + 0x54) * 2) {
        FUN_005a1d40(param_1);
      }
    }
    else {
      FUN_00599740(param_1 + 8,param_2,5);
    }
  }
  else {
    FUN_0041b800(*(longlong *)(param_1 + 8) + 8 + (longlong)param_2 * 0x20);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)param_2 * 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}

