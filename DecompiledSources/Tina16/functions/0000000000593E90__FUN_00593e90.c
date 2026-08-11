/* Ghidra address: 00593e90 */
/* Ghidra symbol: FUN_00593e90 */


undefined8 FUN_00593e90(undefined8 param_1,byte *param_2,byte *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == param_3) {
    uVar1 = 0;
  }
  else if (param_2 == (byte *)0x0) {
    uVar1 = (ulonglong)(uint)-*(int *)(param_3 + -4);
  }
  else if (param_3 == (byte *)0x0) {
    uVar1 = (ulonglong)*(uint *)(param_2 + -4);
  }
  else {
    uVar1 = (ulonglong)((uint)*param_2 - (uint)*param_3);
    if ((uint)*param_2 - (uint)*param_3 == 0) {
      iVar3 = *(int *)(param_2 + -4) + -1;
      iVar4 = *(int *)(param_3 + -4) + -1;
      iVar2 = iVar3;
      if (iVar4 < iVar3) {
        iVar2 = iVar4;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      for (; 0 < iVar2; iVar2 = iVar2 + -2) {
        uVar1 = (ulonglong)((uint)*param_2 - (uint)*param_3);
        if ((uint)*param_2 - (uint)*param_3 != 0) goto code_r0x00593f28;
        if (iVar2 == 1) break;
        uVar1 = (ulonglong)((uint)param_2[1] - (uint)param_3[1]);
        if ((uint)param_2[1] - (uint)param_3[1] != 0) goto code_r0x00593f28;
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
      }
      uVar1 = (ulonglong)(uint)(iVar3 - iVar4);
    }
  }
code_r0x00593f28:
  return CONCAT71((int7)(uVar1 >> 8),(int)uVar1 == 0);
}

