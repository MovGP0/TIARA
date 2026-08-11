/* Ghidra address: 01c25680 */
/* Ghidra symbol: FUN_01c25680 */


int * FUN_01c25680(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = 0;
  iVar8 = 0;
  iVar9 = 0;
  iVar2 = FUN_01c232b0();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_01c233d0(*(undefined8 *)(param_1 + 0xa0),iVar6);
      if (*(longlong *)(lVar4 + 8) == 0) {
        uVar5 = FUN_01c233d0(*(undefined8 *)(param_1 + 0xa0),iVar6);
        iVar3 = FUN_01c23490(*(undefined8 *)(param_1 + 0xa0),uVar5);
        iVar7 = iVar7 + iVar3;
        if (iVar8 <= iVar3) {
          iVar8 = iVar3;
        }
        iVar9 = iVar9 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01c25630(param_1,param_2);
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xa0) + 0x4d9);
  if (cVar1 == '\0') {
    if (0 < param_2[2] - *param_2) {
      param_2[3] = param_2[1] + (iVar7 / (param_2[2] - *param_2) + 1) * 0x14 + 4;
    }
  }
  else if (cVar1 == '\x01') {
    *param_2 = (param_2[2] - iVar8 * ((param_2[3] - param_2[1]) / (iVar9 * 0x14))) + 4;
  }
  else if (cVar1 == '\x02') {
    if (0 < param_2[2] - *param_2) {
      param_2[1] = param_2[3] + (iVar7 / (param_2[2] - *param_2) + 1) * -0x14 + -4;
    }
  }
  else if (cVar1 == '\x03') {
    param_2[2] = *param_2 + iVar8 * ((param_2[3] - param_2[1]) / (iVar9 * 0x14)) + 4;
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xa0) + 0x4d9);
  if ((((cVar1 == '\x02') || (cVar1 == '\0')) &&
      ((iVar9 == 0 || ((iVar9 == 1 && (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x540) != 0))))
      )) && (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x5c9) == '\0')) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0xa0) + 0x4d9);
    if (cVar1 == '\x02') {
      param_2[1] = param_2[3];
    }
    else if (cVar1 == '\0') {
      param_2[3] = param_2[1];
    }
  }
  return param_2;
}

