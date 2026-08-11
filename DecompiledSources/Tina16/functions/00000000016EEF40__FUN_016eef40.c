/* Ghidra address: 016eef40 */
/* Ghidra symbol: FUN_016eef40 */


void FUN_016eef40(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined8 local_30;
  
  local_30 = 0;
  cVar2 = FUN_016e9e80(param_1,*(undefined1 *)(param_1 + 5));
  iVar6 = 1;
  for (uVar8 = (uint)*(byte *)(param_1 + 5); uVar8 != 0; uVar8 = uVar8 - 1) {
    cVar7 = cVar2 + (char)iVar6;
    FUN_016ebe60(param_1,cVar7,iVar6,0,1);
    FUN_016ed320(param_1,cVar7,0,*(undefined8 *)(param_2 + 0x430),0);
    *(undefined1 *)(param_1 + 0x11f) = 1;
    iVar6 = iVar6 + 1;
  }
  bVar1 = true;
  lVar5 = 0;
  iVar6 = 1;
  for (uVar8 = (uint)*(byte *)(param_1 + 4); uVar8 != 0; uVar8 = uVar8 - 1) {
    if ((bVar1) &&
       (lVar5 = (longlong)iVar6, *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + lVar5 * 8) != 0)
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar6 = iVar6 + 1;
  }
  if (!bVar1) {
    FUN_01b04d70(CONCAT62((int6)((ulonglong)lVar5 >> 0x10),0x219),&LAB_016ef154,0);
  }
  *(undefined1 *)(param_1 + 0x120) = 1;
  iVar6 = 1;
  for (uVar8 = (uint)*(byte *)(param_1 + 4); uVar8 != 0; uVar8 = uVar8 - 1) {
    if ((*(char *)(param_1 + 0x120) == '\0') ||
       (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)iVar6 * 8) + 0x39) ==
        '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x120) = uVar3;
    iVar6 = iVar6 + 1;
  }
  if (((((*(char *)(param_1 + 0x120) == '\0') && (*(char *)(param_1 + 0x110) == '\0')) &&
       (sVar4 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0xf8))
                          (*(longlong **)(param_1 + 0x128)), sVar4 != 9)) &&
      ((((sVar4 != 0x6b && (sVar4 != 200)) &&
        ((sVar4 != 0xd2 && ((sVar4 != 0xdc && (sVar4 != 0xb)))))) && (sVar4 != 0x26)))) &&
     (((sVar4 != 0x6e && (sVar4 != 0x85)) && (sVar4 != 0x84)))) {
    FUN_01b04d70(0x21a,&LAB_016ef154,0);
  }
  FUN_00414480(&local_30);
  return;
}

