/* Ghidra address: 00ef9b40 */
/* Ghidra symbol: FUN_00ef9b40 */


void FUN_00ef9b40(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  
  if (((*param_1 == 0) || (*param_2 == 0)) || (*(char *)(param_3 + 0x92) != '\0')) {
    return;
  }
  iVar5 = 1;
  do {
    while( true ) {
      iVar3 = FUN_00ef7f30(*param_1,param_3);
      if ((iVar3 <= iVar5) || (*(char *)(param_3 + 0x92) != '\0')) {
        FUN_00ef9ad0(param_1,param_2,param_3);
        return;
      }
      uVar2 = FUN_00ef8190(*param_1,iVar5);
      cVar1 = FUN_00ef9780(*param_1,uVar2,param_3);
      if (cVar1 != '\0') break;
LAB_00ef9bf4:
      iVar5 = iVar5 + 1;
    }
    uVar4 = (ulonglong)uVar2;
    cVar1 = FUN_00ef9780(*param_2,uVar4,param_3);
    if (cVar1 == '\0') goto LAB_00ef9bf4;
    if ((ushort)uVar2 < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x22U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) goto LAB_00ef9bf4;
    FUN_00ef9850(param_1,uVar2,param_3);
    FUN_00ef9850(param_2,uVar2,param_3);
  } while( true );
}

