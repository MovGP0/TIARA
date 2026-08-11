/* Ghidra address: 00874c90 */
/* Ghidra symbol: FUN_00874c90 */


undefined8 FUN_00874c90(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_00876b00(param_2,param_3,param_4);
  if (iVar1 < 1) {
    FUN_00414480(param_1);
  }
  else {
    FUN_004169f0(param_1,iVar1 * 2);
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_00414de0(param_1);
        *(undefined2 *)(lVar2 + -2 + (longlong)(iVar3 * 2 + 1) * 2) =
             *(undefined2 *)
              (&DAT_01e1df68 + (ulonglong)(*(byte *)(param_2 + (param_4 + iVar3)) >> 4) * 2);
        lVar2 = FUN_00414de0(param_1);
        *(undefined2 *)(lVar2 + -2 + (longlong)(iVar3 * 2 + 2) * 2) =
             *(undefined2 *)
              (&DAT_01e1df68 + (ulonglong)(*(byte *)(param_2 + (param_4 + iVar3)) & 0xf) * 2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return param_1;
}

