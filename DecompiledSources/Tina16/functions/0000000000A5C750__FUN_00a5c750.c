/* Ghidra address: 00a5c750 */
/* Ghidra symbol: FUN_00a5c750 */


void FUN_00a5c750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  undefined **ppuVar4;
  bool bVar5;
  byte local_39;
  
  if (DAT_020146f0 == (longlong *)0x0) {
    DAT_020146f0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    cVar3 = '\0';
    ppuVar4 = &PTR_u_font_family_01e75688;
    do {
      (**(code **)(*DAT_020146f0 + 0x80))(DAT_020146f0,*ppuVar4,cVar3);
      cVar3 = cVar3 + '\x01';
      ppuVar4 = ppuVar4 + 1;
    } while (cVar3 != 'Q');
    (**(code **)(*DAT_020146f0 + 0x148))(DAT_020146f0);
  }
  iVar1 = (**(code **)(*DAT_020146f0 + 0xb0))(DAT_020146f0,param_2);
  bVar5 = false;
  if (-1 < iVar1) {
    if (DAT_020146f0 == (longlong *)0x0) {
      DAT_020146f0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      cVar3 = '\0';
      ppuVar4 = &PTR_u_font_family_01e75688;
      do {
        (**(code **)(*DAT_020146f0 + 0x80))(DAT_020146f0,*ppuVar4,cVar3);
        cVar3 = cVar3 + '\x01';
        ppuVar4 = ppuVar4 + 1;
      } while (cVar3 != 'Q');
      (**(code **)(*DAT_020146f0 + 0x148))(DAT_020146f0);
    }
    uVar2 = (**(code **)(*DAT_020146f0 + 0x30))(DAT_020146f0,iVar1);
    if ((byte)uVar2 < 0x48) {
      bVar5 = ((byte)(&DAT_00a5c8f0)[(longlong)(uVar2 & 0x7f) >> 3] >> (uVar2 & 7) & 1) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      local_39 = (byte)uVar2;
    }
  }
  if (bVar5) {
    FUN_00a5c220(param_1,local_39,param_3,param_4);
  }
  return;
}

