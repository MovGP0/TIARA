/* Ghidra address: 01d311c0 */
/* Ghidra symbol: FUN_01d311c0 */


void FUN_01d311c0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_01d31a70(param_1,0x1000);
  }
  else {
    iVar1 = FUN_01d31a40(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38) + param_3) {
        FUN_01d31a70(param_1,0x1002);
      }
      else {
        FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),param_2,(longlong)param_3);
        FUN_01d31a90(param_1);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_3;
      }
    }
  }
  return;
}

