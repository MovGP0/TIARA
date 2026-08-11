/* Ghidra address: 01449f70 */
/* Ghidra symbol: FUN_01449f70 */


void FUN_01449f70(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_68;
  int local_60;
  double local_58;
  double local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_38 = *param_1;
  local_30 = param_1[1];
  local_48 = *param_2;
  local_40 = param_2[1];
  FUN_01449ab0(0,local_30 & 0xffffffff,&local_68,param_4);
  iVar3 = 0;
  iVar4 = local_60;
  if (-1 < local_60) {
    iVar2 = local_60 + 1;
    do {
      lVar1 = (longlong)iVar3;
      *(undefined8 *)(local_68 + lVar1 * 0x10) = *(undefined8 *)(local_38 + lVar1 * 0x10);
      *(undefined8 *)(local_68 + 8 + lVar1 * 0x10) = *(undefined8 *)(local_38 + 8 + lVar1 * 0x10);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  for (; (int)local_40 <= iVar4; iVar4 = iVar4 + -1) {
    FUN_01449410(local_68 + (longlong)iVar4 * 0x10,local_48 + (longlong)(int)local_40 * 0x10,
                 *param_3 + (longlong)(iVar4 - (int)local_40) * 0x10,param_4);
    for (iVar3 = 0; iVar3 <= (int)local_40 + -1; iVar3 = iVar3 + 1) {
      FUN_01449560(*param_3 + (longlong)(iVar4 - (int)local_40) * 0x10,
                   local_48 + (longlong)iVar3 * 0x10,&local_58,param_4);
      lVar1 = (longlong)((iVar4 - (int)local_40) + iVar3);
      *(double *)(local_68 + lVar1 * 0x10) = *(double *)(local_68 + lVar1 * 0x10) - local_58;
      lVar1 = (longlong)((iVar4 - (int)local_40) + iVar3);
      *(double *)(local_68 + 8 + lVar1 * 0x10) = *(double *)(local_68 + lVar1 * 0x10) - local_50;
    }
  }
  *(int *)(param_3 + 1) = local_60 - (int)local_40;
  FUN_01449b90(&local_68);
  return;
}

