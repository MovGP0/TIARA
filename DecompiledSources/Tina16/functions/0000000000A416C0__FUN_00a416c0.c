/* Ghidra address: 00a416c0 */
/* Ghidra symbol: FUN_00a416c0 */


void FUN_00a416c0(undefined8 param_1,int param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_30;
  int local_2c;
  
  do {
    param_2 = param_2 + -1;
    if (param_2 < 1) break;
  } while (*(longlong *)(param_4 + (longlong)param_2 * 8) == 0);
  lVar1 = *(longlong *)(param_4 + (longlong)param_2 * 8);
  *(undefined8 *)(param_4 + (longlong)param_2 * 8) = *(undefined8 *)(lVar1 + 0x20);
  local_30 = 0;
  local_2c = 0;
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  do {
    lVar6 = (longlong)iVar5;
    lVar2 = *(longlong *)(lVar1 + 0x28 + lVar6 * 8);
    if (lVar2 != 0) {
      local_30 = local_30 + *(int *)(lVar2 + 0x10);
      local_2c = local_2c + *(int *)(lVar2 + 0x14);
      iVar3 = iVar3 + *(int *)(lVar2 + 0x18);
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + *(int *)(lVar2 + 0xc);
      FUN_00410f20(*(undefined8 *)(lVar1 + 0x28 + lVar6 * 8));
      *(undefined8 *)(lVar1 + 0x28 + lVar6 * 8) = 0;
      iVar4 = iVar4 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  *(undefined1 *)(lVar1 + 8) = 1;
  *(int *)(lVar1 + 0x10) = local_30;
  *(int *)(lVar1 + 0x14) = local_2c;
  *(int *)(lVar1 + 0x18) = iVar3;
  *param_3 = (*param_3 - iVar4) + 1;
  return;
}

