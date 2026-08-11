/* Ghidra address: 00835710 */
/* Ghidra symbol: FUN_00835710 */


void FUN_00835710(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_20 [4];
  undefined4 local_1c;
  
  iVar2 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x4d8));
  if (iVar2 != 0) {
    if ((((*(ushort *)(param_1 + 0x34) & 0x10) != 0) && (param_2 != 0)) &&
       ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
      FUN_00835030(param_1,0);
    }
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_00835860(param_1,&local_1c,local_20);
    }
    FUN_008355e0(param_1,param_2);
    *(byte *)(param_1 + 0x4e9) = *(byte *)(param_1 + 0x4e9) & 0xfe;
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
      *(byte *)(param_1 + 0x4e9) = *(byte *)(param_1 + 0x4e9) | 1;
    }
    FUN_00680590(param_1,0);
    cVar1 = FUN_008355d0(param_1);
    if ((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x4e4))) {
      FUN_00680590(param_1,*(undefined4 *)(param_1 + 0x4e4));
    }
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      lVar3 = thunk_FUN_041da4fa();
      lVar4 = FUN_0065b870(param_1);
      if ((lVar3 == lVar4) && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
        FUN_008358c0(param_1,local_1c);
      }
    }
  }
  return;
}

