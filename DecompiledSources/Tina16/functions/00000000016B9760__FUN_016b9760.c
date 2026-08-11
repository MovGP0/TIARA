/* Ghidra address: 016b9760 */
/* Ghidra symbol: FUN_016b9760 */


undefined8 FUN_016b9760(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(char *)(param_1 + 0x28) == 'B') && (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) == 2))
     && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar1 = FUN_00414f50(*(undefined8 *)(param_1 + 0x10),&DAT_016b97cc,
                         (ulonglong)**(byte **)(param_1 + 0x10) + 1);
    if (iVar1 != 0) {
      iVar1 = FUN_00414f50(*(undefined8 *)(param_1 + 0x10),&DAT_016b97ce,
                           (ulonglong)**(byte **)(param_1 + 0x10) + 1);
      if (iVar1 != 0) goto LAB_016b97bf;
    }
    uVar2 = 1;
  }
  else {
LAB_016b97bf:
    uVar2 = 0;
  }
  return uVar2;
}

