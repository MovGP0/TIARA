/* Ghidra address: 019d07f0 */
/* Ghidra symbol: FUN_019d07f0 */


void FUN_019d07f0(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  int iVar7;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [32];
  
  local_80 = *(undefined8 *)(param_1 + 0xb0 + (longlong)param_3 * 0x10);
  local_78 = *(undefined8 *)(param_1 + 0x700 + (longlong)param_3 * 8);
  FUN_019d0160(param_1,&local_80,local_48);
  local_80 = *(undefined8 *)(param_1 + 0xb0 + (longlong)(param_3 + 1) * 0x10);
  local_78 = *(undefined8 *)(param_1 + 0x700 + (longlong)(param_3 + 1) * 8);
  FUN_019d0160(param_1,&local_80,local_50);
  FUN_019cfd20(local_48,&local_64,&local_68);
  FUN_019cfd20(local_50,&local_6c,&local_70);
  iVar3 = local_6c;
  if (local_64 < local_6c) {
    iVar3 = local_64;
  }
  iVar5 = local_70;
  if (local_68 < local_70) {
    iVar5 = local_68;
  }
  iVar6 = local_6c;
  if (local_6c < local_64) {
    iVar6 = local_64;
  }
  iVar7 = local_70;
  if (local_70 < local_68) {
    iVar7 = local_68;
  }
  local_58 = FUN_019cfd00(iVar3,iVar5);
  uVar4 = FUN_019cfd00(iVar6,iVar7);
  local_60._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
  local_60._0_4_ = (int)uVar4;
  local_60 = CONCAT44(local_60._4_4_ + (iVar7 - iVar5),(int)local_60);
  FUN_019cfd20(&local_58,&local_64,&local_68);
  FUN_019cfd20(&local_60,&local_6c,&local_70);
  uVar2 = local_58;
  uVar1 = local_60;
  iVar3 = local_58._4_4_;
  if (*(short *)(param_2 + 0x1fa4) == 0x4c) {
    local_94 = (int)local_60;
    local_90 = (local_58._4_4_ + local_60._4_4_) / 2;
    local_8c = ((int)local_58 + (int)local_60) / 2;
    uVar4 = FUN_019cfd00(local_8c,local_58._4_4_);
    *param_4 = uVar4;
    uVar4 = FUN_019cfd00(uVar1 & 0xffffffff,local_90);
    *param_5 = uVar4;
    unaff_ESI = iVar3;
  }
  else if (*(short *)(param_2 + 0x1fa4) == 0x48) {
    local_94 = ((int)local_58 + (int)local_60) / 2;
    local_90 = local_58._4_4_;
    local_8c = (int)local_58;
    uVar1 = (longlong)(local_58._4_4_ + local_60._4_4_) / 2;
    unaff_ESI = (int)uVar1;
    uVar4 = FUN_019cfd00(local_94,local_58._4_4_);
    *param_4 = uVar4;
    uVar4 = FUN_019cfd00(uVar2 & 0xffffffff,uVar1 & 0xffffffff);
    *param_5 = uVar4;
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))
            (*(longlong **)(param_1 + 0x30),local_64,local_68,local_6c,local_70,local_94,local_90,
             local_8c,unaff_ESI);
  return;
}

