/* Ghidra address: 005b99e0 */
/* Ghidra symbol: FUN_005b99e0 */


undefined8 FUN_005b99e0(longlong *param_1,int param_2,uint *param_3)

{
  int iVar1;
  bool bVar2;
  uint7 uVar4;
  undefined8 uVar3;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  *param_3 = 0;
  iVar1 = (int)param_1[1];
  if (iVar1 < 1) {
    bVar2 = false;
  }
  else {
    iVar6 = 0;
    if (*param_1 != 0) {
      iVar6 = *(int *)(*param_1 + -4);
    }
    bVar2 = iVar1 <= iVar6;
  }
  if (bVar2) {
    uVar5 = *(ushort *)(*param_1 + -2 + (longlong)iVar1 * 2);
  }
  else {
    uVar5 = 0;
  }
  while( true ) {
    uVar4 = (uint7)(uint3)((uint)iVar1 >> 8);
    if ((uVar5 < 0x30) || (0x39 < uVar5)) {
      if ((int)param_1[1] == iVar1) {
        uVar3 = CONCAT71(uVar4,1);
      }
      else if (param_2 < (int)*param_3) {
        uVar3 = CONCAT71(uVar4,2);
      }
      else {
        uVar3 = 0;
      }
      return uVar3;
    }
    if ((*param_3 & 0xf0000000) != 0) {
      return CONCAT71(uVar4,2);
    }
    *param_3 = (*param_3 * 10 + (uint)uVar5) - 0x30;
    if ((int)*param_3 < 0) break;
    iVar6 = 0;
    if (*param_1 != 0) {
      iVar6 = *(int *)(*param_1 + -4);
    }
    if ((int)param_1[1] <= iVar6) {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
    iVar6 = (int)param_1[1];
    if (iVar6 < 1) {
      bVar2 = false;
    }
    else {
      iVar7 = 0;
      if (*param_1 != 0) {
        iVar7 = *(int *)(*param_1 + -4);
      }
      bVar2 = iVar6 <= iVar7;
    }
    if (bVar2) {
      uVar5 = *(ushort *)(*param_1 + -2 + (longlong)iVar6 * 2);
    }
    else {
      uVar5 = 0;
    }
  }
  return CONCAT71(uVar4,2);
}

