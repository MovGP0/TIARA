/* Ghidra address: 005d2620 */
/* Ghidra symbol: FUN_005d2620 */


undefined8 FUN_005d2620(longlong param_1,char param_2)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  char local_19;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != '\0') {
    cVar2 = FUN_005d2930(param_1,0);
    if (cVar2 == '\0') {
      uVar5 = FUN_0044d710(&PTR_FUN_00433ec0,1,PTR_PTR_02005ad8);
      FUN_004134c0(uVar5);
    }
  }
  iVar4 = FUN_005d27e0(param_1,&local_19);
  lVar6 = FUN_00416740(param_1);
  iVar7 = 0;
  if (param_1 != 0) {
    iVar7 = *(int *)(param_1 + -4);
  }
  iVar7 = (iVar7 - iVar4) + 1;
  if ((iVar7 < 2) || (*(short *)(lVar6 + (longlong)iVar4 * 2) != DAT_02011f46)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
LAB_005d26df:
    bVar3 = true;
  }
  else {
    if ((local_19 == '\0') && (0 < iVar7)) {
      sVar1 = *(short *)(lVar6 + (longlong)(iVar4 + -1) * 2);
      if ((sVar1 == DAT_02011f42) || (sVar1 == DAT_02011f40)) goto LAB_005d26df;
    }
    bVar3 = false;
  }
  if ((bVar3) ||
     ((local_19 == '\x02' &&
      (cVar2 = FUN_005d2d20(*(undefined2 *)(lVar6 + (longlong)(iVar4 + -1) * 2)), cVar2 != '\0'))))
  {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

