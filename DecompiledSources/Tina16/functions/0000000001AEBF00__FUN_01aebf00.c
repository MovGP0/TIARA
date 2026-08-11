/* Ghidra address: 01aebf00 */
/* Ghidra symbol: FUN_01aebf00 */


void FUN_01aebf00(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  byte local_68 [56];
  
  FUN_010dba00(local_68);
  iVar2 = FUN_00414f50(local_68,&DAT_01aec038,(ulonglong)local_68[0] + 1);
  bVar5 = iVar2 != 0;
  if (bVar5) {
    FUN_0064e030(param_1,0xff00000f);
  }
  else {
    FUN_0064e030(param_1,0x808080);
    FUN_007ff680(param_1,1);
    FUN_007ff400(param_1,1);
  }
  iVar2 = FUN_00654c00();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_00654bc0(param_1,iVar4);
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_00669e80);
      if (cVar1 != '\0') {
        if (bVar5) {
          FUN_005fc860(*(undefined8 *)(lVar3 + 0xb8),0);
        }
        else {
          FUN_005fc860(*(undefined8 *)(lVar3 + 0xb8),0xffffff);
        }
      }
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_006686f0);
      if (cVar1 != '\0') {
        if (bVar5) {
          FUN_005fc860(*(undefined8 *)(lVar3 + 0xb8),0);
        }
        else {
          FUN_005fc860(*(undefined8 *)(lVar3 + 0xb8),0xffffff);
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

