/* Ghidra address: 01d31100 */
/* Ghidra symbol: FUN_01d31100 */


void FUN_01d31100(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_20;
  
  local_20 = *param_2;
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_01d31a70(param_1,0x1000);
  }
  else {
    iVar1 = FUN_01d31a40(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x34)) {
        FUN_01d31a70(param_1,0x1003);
      }
      else {
        FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),&local_20,8);
        FUN_01d31a90(param_1);
        *(undefined4 *)(param_1 + 0x34) = local_20._4_4_;
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
  }
  return;
}

