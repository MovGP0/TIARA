/* Ghidra address: 006e0450 */
/* Ghidra symbol: FUN_006e0450 */


undefined8 FUN_006e0450(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  FUN_00414480(param_2);
  lVar2 = FUN_006df500(*(undefined8 *)(param_1 + 0x38),param_3);
  iVar1 = FUN_006ddf30();
  if (-1 < iVar1 + -1) {
    do {
      FUN_00416ad0(param_2,&DAT_006e04cc);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00416ad0(param_2,*(undefined8 *)(lVar2 + 0x10));
  return param_2;
}

