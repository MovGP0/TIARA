/* Ghidra address: 00416350 */
/* Ghidra symbol: FUN_00416350 */


ulonglong FUN_00416350(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == param_2) {
    uVar2 = 0;
  }
  else if (param_1 == 0) {
    uVar2 = (ulonglong)(uint)-(*(int *)(param_2 + -4) / 2);
  }
  else if (param_2 == 0) {
    uVar2 = (longlong)*(int *)(param_1 + -4) / 2 & 0xffffffff;
  }
  else {
    uVar1 = (longlong)*(int *)(param_1 + -4) / 2;
    uVar2 = (longlong)*(int *)(param_2 + -4) / 2;
    iVar6 = (int)uVar1;
    iVar7 = (int)uVar2;
    if (iVar7 < iVar6) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 & 0xffffffff;
    puVar3 = (ushort *)FUN_00415f70(param_1,(longlong)*(int *)(param_2 + -4) % 2 & 0xffffffff);
    puVar4 = (ushort *)FUN_00415f70(param_2);
    uVar5 = (uint)uVar1;
    while (0 < (int)uVar5) {
      if ((uint)*puVar3 - (uint)*puVar4 != 0) {
        return (ulonglong)((uint)*puVar3 - (uint)*puVar4);
      }
      if ((int)uVar2 == 1) break;
      if ((uint)puVar3[1] - (uint)puVar4[1] != 0) {
        return (ulonglong)((uint)puVar3[1] - (uint)puVar4[1]);
      }
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      uVar5 = (int)uVar2 - 2;
      uVar2 = (ulonglong)uVar5;
    }
    uVar2 = (ulonglong)(uint)(iVar6 - iVar7);
  }
  return uVar2;
}

