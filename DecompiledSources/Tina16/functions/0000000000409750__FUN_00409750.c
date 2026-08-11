/* Ghidra address: 00409750 */
/* Ghidra symbol: FUN_00409750 */


void FUN_00409750(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_0041f930();
  if (uVar1 <= param_1) {
    lVar2 = FUN_0041f930();
    if (param_1 <= lVar2 + 0x1e0U) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      lVar2 = FUN_0041f930();
      *(int *)(lVar2 + 0x200) = *(int *)(lVar2 + 0x200) + -1;
    }
  }
  return;
}

