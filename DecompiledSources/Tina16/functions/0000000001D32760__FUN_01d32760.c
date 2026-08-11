/* Ghidra address: 01d32760 */
/* Ghidra symbol: FUN_01d32760 */


void FUN_01d32760(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_01d31a40(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x38)) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                  (*(longlong **)(param_1 + 0x10),
                   *(int *)(param_1 + 0x2c) + (uint)*(ushort *)(param_1 + 0x26) +
                   (uint)*(ushort *)(param_1 + 0x24) + *(int *)(param_1 + 0x34),0);
        FUN_01d31a90(param_1);
      }
      iVar1 = FUN_01d31a40(param_1);
      if (iVar1 == 0) {
        uVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
        FUN_01d31a90(param_1);
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
  return;
}

