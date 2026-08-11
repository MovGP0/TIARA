/* Ghidra address: 017e1a50 */
/* Ghidra symbol: FUN_017e1a50 */


void FUN_017e1a50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (-1 < *(int *)(param_1 + 0x38)) {
    puVar1 = (undefined8 *)FUN_00b94e60(param_1,*(int *)(param_1 + 0x38));
    for (lVar2 = 0x52; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar1;
      param_2 = param_2 + 1;
    }
    FUN_00b94f10(param_1,*(undefined4 *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  return;
}

