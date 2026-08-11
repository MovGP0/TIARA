/* Ghidra address: 0144a460 */
/* Ghidra symbol: FUN_0144a460 */


void FUN_0144a460(longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,int param_5,
                 double *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_38 = *param_1;
  local_30 = param_1[1];
  local_48 = *param_2;
  local_40 = param_2[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  FUN_01449ab0(0,local_30 & 0xffffffff,&local_68,param_7);
  iVar4 = 0;
  if (-1 < local_60) {
    iVar3 = local_60 + 1;
    do {
      lVar2 = (longlong)iVar4;
      *(undefined8 *)(local_68 + lVar2 * 0x10) = *(undefined8 *)(local_38 + lVar2 * 0x10);
      *(undefined8 *)(local_68 + 8 + lVar2 * 0x10) = *(undefined8 *)(local_38 + 8 + lVar2 * 0x10);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_01449ab0(0,local_40 & 0xffffffff,&local_78,param_7);
  iVar4 = 0;
  if (-1 < local_70) {
    iVar3 = local_70 + 1;
    do {
      lVar2 = (longlong)iVar4;
      *(undefined8 *)(local_78 + lVar2 * 0x10) = *(undefined8 *)(local_48 + lVar2 * 0x10);
      *(undefined8 *)(local_78 + 8 + lVar2 * 0x10) = *(undefined8 *)(local_48 + 8 + lVar2 * 0x10);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_88 = 0;
  local_80 = -1;
  local_98 = 0;
  local_90 = 0xffffffff;
  local_a8 = 0;
  local_a0 = -1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  param_5 = param_5 - param_4;
  dVar5 = (double)FUN_0144a420(param_5);
  *param_6 = 1.0 / dVar5;
  param_6[1] = 0.0;
  for (; 0 < param_5; param_5 = param_5 + -1) {
    FUN_01449ab0(0,local_60 + -1,&local_88,param_7);
    FUN_01449bc0(&local_68,&local_88,param_7);
    FUN_01449ab0(0,local_80 + local_70,&local_98,param_7);
    FUN_01449df0(&local_88,&local_78,&local_98,param_7);
    FUN_01449ab0(0,local_70 + -1,&local_a8,param_7);
    FUN_01449bc0(&local_78,&local_a8,param_7);
    FUN_01449ab0(0,local_a0 + local_60,&local_b8,param_7);
    FUN_01449df0(&local_a8,&local_68,&local_b8,param_7);
    FUN_01449b90(&local_68);
    uVar1 = FUN_00b905e0(local_90,local_b0);
    FUN_01449ab0(0,uVar1,&local_68,param_7);
    FUN_01449c50(&local_98,&local_b8,&local_68);
    FUN_01449b90(&local_88);
    FUN_01449b90(&local_98);
    FUN_01449b90(&local_a8);
    FUN_01449b90(&local_b8);
    FUN_01449ab0(0,local_70 * 2,&local_88,param_7);
    FUN_01449df0(&local_78,&local_78,&local_88,param_7);
    FUN_01449b90();
    local_70 = local_80;
    local_78 = local_88;
    local_88 = 0;
    local_80 = -1;
  }
  FUN_0144a190(&local_68,&local_58,local_c8,param_7);
  FUN_0144a190(&local_78,&local_58,local_d8,param_7);
  FUN_01449410(local_c8,local_d8,local_c8,param_7);
  FUN_01449560(param_6,local_c8,param_6,param_7);
  return;
}

