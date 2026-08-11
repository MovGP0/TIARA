/* Ghidra address: 00841e20 */
/* Ghidra symbol: FUN_00841e20 */


void FUN_00841e20(longlong param_1,int *param_2,uint param_3,int param_4,int param_5,int param_6,
                 undefined8 *param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = (code *)*param_7;
  uVar2 = param_7[1];
  if ((param_3 & *(uint *)(*(longlong *)(param_1 + 0x70) + 0x4d4)) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x4d0);
  }
  param_2[1] = 0;
  iVar3 = 0;
  iVar5 = param_4;
  if (-1 < param_4 + -1) {
    do {
      iVar4 = (*pcVar1)(uVar2,iVar3);
      param_2[1] = param_2[1] + iVar4 + *param_2;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_2[6] = param_4;
  param_2[7] = param_5;
  param_2[8] = param_6;
  *(code **)(param_2 + 10) = pcVar1;
  *(undefined8 *)(param_2 + 0xc) = uVar2;
  return;
}

