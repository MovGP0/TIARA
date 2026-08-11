/* Ghidra address: 00624210 */
/* Ghidra symbol: FUN_00624210 */


longlong * FUN_00624210(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_00414ad0(param_1);
  puVar3 = (ushort *)FUN_004413a0(*param_1);
  while( true ) {
    iVar2 = 0;
    if (*param_1 != 0) {
      iVar2 = *(int *)(*param_1 + -4);
    }
    if (iVar2 < 1) {
      bVar5 = false;
    }
    else {
      uVar1 = *puVar3;
      if (uVar1 < 0x100) {
        bVar5 = ((byte)(&DAT_006242a0)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) &
                1) != 0;
      }
      else {
        bVar5 = false;
      }
    }
    if (!bVar5) break;
    lVar4 = FUN_00416740(*param_1);
    FUN_004169f0(param_1,((longlong)puVar3 - lVar4) / 2);
    puVar3 = (ushort *)FUN_004413a0(*param_1);
  }
  return param_1;
}

