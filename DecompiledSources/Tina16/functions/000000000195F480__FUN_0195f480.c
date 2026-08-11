/* Ghidra address: 0195f480 */
/* Ghidra symbol: FUN_0195f480 */


undefined1 FUN_0195f480(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong local_10;
  
  local_10 = 0;
  iVar2 = FUN_004b2060(*(undefined8 *)(param_1 + 0x2f8));
  if (iVar2 == 1) {
    lVar3 = FUN_0195f560(param_1);
    FUN_0043ea00(&local_10,*(undefined8 *)(lVar3 + 0x28));
    if (local_10 != 0) {
      uVar1 = 1;
      goto LAB_0195f4cd;
    }
  }
  uVar1 = 0;
LAB_0195f4cd:
  FUN_00414480(&local_10);
  return uVar1;
}

