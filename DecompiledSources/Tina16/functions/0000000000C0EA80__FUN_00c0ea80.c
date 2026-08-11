/* Ghidra address: 00c0ea80 */
/* Ghidra symbol: FUN_00c0ea80 */


void FUN_00c0ea80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_00c0ea50(param_1);
  lVar1 = param_1[0xaa];
  if ((param_2 == lVar1) && (*(char *)(lVar1 + 0x30) == '\0')) {
    lVar1 = FUN_00bd10f0(lVar1);
    if (lVar1 != 0) {
      lVar1 = FUN_00bd10f0(param_1[0xaa]);
      if (*(char *)(lVar1 + 8) != '\x15') {
        FUN_00bd0fa0(param_1[0xab]);
      }
    }
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    (**(code **)(*param_1 + 0x270))(param_1);
  }
  return;
}

