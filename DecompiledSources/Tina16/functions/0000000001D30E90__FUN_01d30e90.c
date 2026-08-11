/* Ghidra address: 01d30e90 */
/* Ghidra symbol: FUN_01d30e90 */


void FUN_01d30e90(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_01d31a40(param_1);
    if (iVar1 == 0) {
      FUN_01d30df0(param_1);
      FUN_004b84c0(*(undefined8 *)(param_1 + 0x10),param_2,8);
      FUN_01d31a90(param_1);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
  return;
}

