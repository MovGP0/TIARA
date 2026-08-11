/* Ghidra address: 0198a990 */
/* Ghidra symbol: FUN_0198a990 */


undefined8 FUN_0198a990(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x10)) {
    lVar2 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x28));
    *param_2 = *(undefined4 *)(lVar2 + 8);
    lVar2 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x28));
    *param_3 = *(undefined4 *)(lVar2 + 0xc);
    piVar1 = (int *)(param_1 + 0x28);
    *piVar1 = *piVar1 + 1;
    uVar3 = CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

