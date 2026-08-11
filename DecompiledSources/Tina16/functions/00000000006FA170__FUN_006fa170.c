/* Ghidra address: 006fa170 */
/* Ghidra symbol: FUN_006fa170 */


void FUN_006fa170(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 local_48 [4];
  int local_44;
  
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) && (param_1[0x68] != 0)) {
    lVar1 = param_1[0x68];
    if ((*(ushort *)(lVar1 + 0x34) & 1) == 0) {
      FUN_0065b830(lVar1);
    }
    iVar2 = FUN_006fa830(param_1);
    lVar4 = FUN_007017d0(lVar1,0x417,(longlong)iVar2,local_48);
    if (lVar4 != 0) {
      FUN_0064fca0(lVar1,0x404,(longlong)local_44,*(char *)((longlong)param_1 + 0xa9) == '\0');
    }
    if (*(char *)(lVar1 + 0xae) != '\0') {
      pcVar5 = (code *)FUN_00411550(lVar1,0xffee);
      (*pcVar5)(lVar1);
    }
    (**(code **)(*param_1 + 0x1c8))(param_1);
    uVar3 = FUN_006fa830(param_1);
    FUN_006fb920(param_1[0x68],uVar3);
  }
  return;
}

