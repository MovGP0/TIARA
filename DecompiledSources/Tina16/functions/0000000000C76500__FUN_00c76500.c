/* Ghidra address: 00c76500 */
/* Ghidra symbol: FUN_00c76500 */


void FUN_00c76500(int param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 < 0) {
    thunk_FUN_04186711(DAT_02019d40,param_1,param_2,param_3);
  }
  else {
    bVar1 = false;
    if ((*(char *)(DAT_02019d30 + 0x3d9) != '\0') &&
       (*(longlong *)(param_3 + 0x20) == *(longlong *)(DAT_02019d30 + 0x298))) {
      lVar3 = FUN_00c7a690(DAT_02019d30);
      if (*(longlong *)(DAT_02019d30 + 0x1e0) != lVar3) {
        bVar1 = true;
      }
    }
    uVar4 = thunk_FUN_03de17fb(*(undefined8 *)(param_3 + 0x20));
    lVar3 = thunk_FUN_03de17fb(uVar4);
    if ((lVar3 != 0) && (*(int *)(param_3 + 0x18) == 0x1030)) {
      bVar1 = true;
    }
    if (*(int *)(param_3 + 0x18) == 0x1032) {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_00c7a310(DAT_02019d30);
      if (cVar2 != '\0') {
        FUN_00c76c10(DAT_02019d30);
      }
    }
    thunk_FUN_04186711(DAT_02019d40,param_1,param_2,param_3);
  }
  return;
}

