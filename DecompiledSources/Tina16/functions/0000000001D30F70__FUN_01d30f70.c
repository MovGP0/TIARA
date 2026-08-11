/* Ghidra address: 01d30f70 */
/* Ghidra symbol: FUN_01d30f70 */


void FUN_01d30f70(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_01d31a40(param_1);
    if (iVar1 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                (*(longlong **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x2c),0);
      FUN_01d31a90(param_1);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
  return;
}

