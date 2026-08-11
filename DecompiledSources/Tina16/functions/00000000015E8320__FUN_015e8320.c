/* Ghidra address: 015e8320 */
/* Ghidra symbol: FUN_015e8320 */


undefined4 FUN_015e8320(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  PEx64_UnwindInfo *pPVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_48 [40];
  
  do {
    lVar2 = *(longlong *)(param_1 + 8);
    FUN_00e07d90(lVar2);
    while( true ) {
      iVar4 = *(int *)(&DAT_01f7396c + (longlong)*(int *)(lVar2 + 0x28) * 4);
      if (iVar4 <= *(int *)(&DAT_01f739ac + (longlong)*(int *)(lVar2 + 0x28) * 4)) {
        iVar7 = (*(int *)(&DAT_01f739ac + (longlong)*(int *)(lVar2 + 0x28) * 4) - iVar4) + 1;
        pPVar5 = (PEx64_UnwindInfo *)((longlong)&UNWIND_INFO_01f73494 + (longlong)iVar4 * 4);
        do {
          FUN_00e07e60(lVar2,*pPVar5);
          pPVar5 = pPVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar4 = *(int *)(&DAT_01f73a2c + (longlong)*(int *)(lVar2 + 0x28) * 4);
      if (*(int *)(&DAT_01f739ec + (longlong)*(int *)(lVar2 + 0x28) * 4) <= iVar4) {
        iVar7 = (*(int *)(&DAT_01f739ec + (longlong)*(int *)(lVar2 + 0x28) * 4) - iVar4) + -1;
        puVar6 = (undefined4 *)(&DAT_01f734f4 + (longlong)iVar4 * 4);
        do {
          FUN_00e07ed0(lVar2,*puVar6);
          puVar6 = puVar6 + -1;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0);
      }
      if (*(int *)(&DAT_01f73aac + (longlong)*(int *)(lVar2 + 0x28) * 4) <
          *(int *)(&DAT_01f73a6c + (longlong)*(int *)(lVar2 + 0x28) * 4)) break;
      FUN_00e07e00(lVar2);
      for (iVar4 = *(int *)(&DAT_01f73a6c + (longlong)*(int *)(lVar2 + 0x28) * 4);
          iVar4 <= *(int *)(&DAT_01f73aac + (longlong)*(int *)(lVar2 + 0x28) * 4); iVar4 = iVar4 + 1
          ) {
        uVar1 = *(ushort *)(lVar2 + 0x2c);
        if (uVar1 < 0x100) {
          bVar8 = ((byte)(&DAT_01f73534)[((longlong)(ulonglong)uVar1 >> 3) + (longlong)iVar4 * 0x24]
                   >> ((ulonglong)uVar1 & 7) & 1) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) break;
      }
      if (*(int *)(&DAT_01f73aac + (longlong)*(int *)(lVar2 + 0x28) * 4) < iVar4) break;
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(&DAT_01f73554 + (longlong)iVar4 * 0x24);
    }
    do {
      cVar3 = FUN_00e07f50(lVar2,lVar2 + 0x30);
      if (cVar3 == '\0') {
        cVar3 = FUN_00e08040(lVar2);
        if ((cVar3 == '\0') && (cVar3 = FUN_00e07d60(lVar2), cVar3 != '\0')) {
          FUN_00e08090(lVar2);
          FUN_00e07d30(lVar2,0);
        }
        break;
      }
      FUN_015e8200(auStack_48,*(undefined4 *)(lVar2 + 0x30));
    } while (*(char *)(lVar2 + 0x34) != '\0');
    if (*(char *)(lVar2 + 0x35) != '\0') {
      return *(undefined4 *)(lVar2 + 0x38);
    }
  } while( true );
}

