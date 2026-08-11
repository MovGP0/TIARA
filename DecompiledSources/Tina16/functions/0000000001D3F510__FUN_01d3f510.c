/* Ghidra address: 01d3f510 */
/* Ghidra symbol: FUN_01d3f510 */


undefined8 FUN_01d3f510(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 8) == '\0') {
    lVar10 = 0;
    cVar7 = FUN_01d3ff70(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),3);
    if ((cVar7 == '\0') || (param_2 != '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x10);
    cVar7 = FUN_01d3fee0(lVar10,3);
    if ((cVar7 == '\0') || (param_2 != '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  bVar6 = false;
  if ((*(char *)(param_1 + 8) == '\0') || (*(longlong *)(param_1 + 0x10) == 0)) {
    if ((*(char *)(param_1 + 8) == '\0') && (*(int *)(param_1 + 0x20) == 1)) {
      bVar6 = true;
    }
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x528);
    bVar6 = false;
    if ((lVar2 != 0) && (sVar8 = FUN_01d03160(lVar2), bVar6 = false, sVar8 == 0x2900)) {
      bVar6 = true;
    }
  }
  if (((lVar10 == 0) || (cVar7 = FUN_0198a580(lVar10), cVar7 != '\x04')) ||
     (cVar7 = FUN_01d05040(lVar10), cVar7 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((lVar10 == 0) || (cVar7 = FUN_0198a580(lVar10), cVar7 != '\x04')) ||
     (cVar7 = FUN_01d3f210(lVar10), cVar7 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  cVar7 = FUN_01d3ffd0(iVar1);
  if ((((((cVar7 != '\0') || ((param_2 != '\0' && (cVar7 = FUN_01d40000(iVar1), cVar7 != '\0')))) &&
        (!bVar3)) &&
       (((((!bVar4 && (iVar1 != 0x3a)) && (iVar1 != 0x96)) && ((iVar1 != 0x86 && (iVar1 != 0x34))))
        && ((iVar1 != 0x3b && ((iVar1 != 0x27 && (cVar7 = FUN_01d40240(iVar1), cVar7 == '\0'))))))))
      && ((iVar1 != 0x68 && (!bVar5)))) ||
     ((((((bVar6 || (iVar1 == 0x3ec)) || (iVar1 == 0x4b0)) ||
        ((iVar1 == 0x2903 || (iVar1 == 0x462)))) ||
       ((iVar1 == 0x45e || ((iVar1 == 0x45f || (cVar7 = FUN_01d3fc30(iVar1), cVar7 != '\0')))))) ||
      (iVar1 == 0x3ee)))) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

