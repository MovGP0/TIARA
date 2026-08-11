/* Ghidra address: 00af4d30 */
/* Ghidra symbol: FUN_00af4d30 */


void FUN_00af4d30(longlong param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_35;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  
  if (((*(ushort *)(param_1 + 0x8a0) & 0x200) != 0) && (-1 < *(int *)(param_1 + 0x958))) {
    lVar1 = *(longlong *)(param_1 + 0x8b0);
    if (param_3 < 0) {
      param_3 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x9c);
    if (param_3 < *(int *)(param_1 + 0x9c)) {
      iVar2 = param_3;
    }
    iVar2 = FUN_00a9bd50(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x490),param_2,
                         iVar2 + *(int *)(lVar1 + 0x94),local_30,local_2c,local_34,&local_35);
    if ((-1 < iVar2) && (*(char *)(param_1 + 0x4dc) == '\0')) {
      if (*(int *)(param_1 + 0x958) < iVar2) {
        *(int *)(lVar1 + 0xa0) = iVar2;
        *(undefined4 *)(lVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x958);
      }
      else {
        *(int *)(lVar1 + 0x9c) = iVar2;
        *(undefined4 *)(lVar1 + 0xa0) = *(undefined4 *)(param_1 + 0x958);
      }
      uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x740));
      thunk_FUN_03a2fc9d(uVar3,0,0xffffffff);
    }
    FUN_00afe5a0(param_1,iVar2);
  }
  return;
}

