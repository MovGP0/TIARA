/* Ghidra address: 0061d750 */
/* Ghidra symbol: FUN_0061d750 */


undefined8 FUN_0061d750(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + -4);
  }
  FUN_00415d10(param_1,iVar7,0);
  if (param_2 == 0) {
    uVar2 = *(undefined2 *)PTR_DAT_02001cb0;
  }
  else {
    uVar2 = *(undefined2 *)(param_2 + -0xc);
  }
  FUN_004173d0(param_1,uVar2,0);
  iVar5 = 1;
  if (0 < iVar7) {
    do {
      lVar6 = (longlong)iVar5;
      cVar1 = *(char *)(param_2 + -1 + lVar6);
      bVar3 = cVar1 - 0x40;
      if (bVar3 < 0x20 && (1 << (bVar3 & 0x1f) & 0x7fffffeU) != 0) {
        lVar4 = FUN_00414df0(param_1);
        *(char *)(lVar4 + -1 + lVar6) = *(char *)(param_2 + -1 + lVar6) + ' ';
      }
      else {
        lVar4 = FUN_00414df0(param_1);
        *(char *)(lVar4 + -1 + lVar6) = cVar1;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return param_1;
}

