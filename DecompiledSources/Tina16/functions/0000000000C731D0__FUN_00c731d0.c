/* Ghidra address: 00c731d0 */
/* Ghidra symbol: FUN_00c731d0 */


void FUN_00c731d0(longlong param_1,undefined8 param_2,int *param_3,int *param_4,longlong param_5,
                 int param_6,int param_7,int *param_8,int *param_9,uint param_10,char param_11,
                 char param_12)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  
  iVar5 = param_3[2];
  iVar1 = *param_3;
  local_38 = FUN_00498310(iVar5 - iVar1,param_3[3] - param_3[1]);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    local_40 = FUN_00498310(0,0);
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
    local_40 = FUN_00498310((longlong)iVar3 / (longlong)(int)(uint)*(byte *)(param_1 + 0x2c) &
                            0xffffffff,uVar4);
  }
  iVar3 = 0;
  if (param_5 != 0) {
    iVar3 = *(int *)(param_5 + -4);
  }
  if (iVar3 < 1) {
    FUN_00498350(&local_68,0,0,0,0);
    *(undefined8 *)param_9 = local_68;
    *(undefined8 *)(param_9 + 2) = uStack_60;
    local_48 = FUN_00498310(0,0);
  }
  else {
    FUN_00498350(&local_68,0,0,iVar5 - iVar1,0);
    *(undefined8 *)param_9 = local_68;
    *(undefined8 *)(param_9 + 2) = uStack_60;
    uVar6 = FUN_005ffa40(param_2);
    uVar4 = 0;
    if (param_5 != 0) {
      uVar4 = *(undefined4 *)(param_5 + -4);
    }
    uVar7 = FUN_00416740(param_5);
    thunk_FUN_041a24be(uVar6,uVar7,uVar4,param_9,param_10 | 0x400);
    local_48 = FUN_00498310(param_9[2] - *param_9,param_9[3] - param_9[1]);
  }
  param_8[1] = ((local_38._4_4_ - local_40._4_4_) + 1) / 2;
  iVar5 = (local_38._4_4_ - local_48._4_4_) + 1;
  local_2c = iVar5 / 2;
  uVar8 = (longlong)iVar5 % 2 & 0xffffffff;
  if ((int)local_40 == 0) {
    param_7 = 0;
  }
  if (param_6 == -1) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),uVar8);
    local_50 = FUN_00498310((int)local_48 + param_7 * 2 + iVar5,0);
    param_6 = ((int)local_38 - (int)local_50) / 2;
    uVar8 = (longlong)((int)local_38 - (int)local_50) % 2 & 0xffffffff;
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),uVar8);
  *param_8 = (param_3[2] - iVar5) - param_7;
  local_30 = param_6;
  if ((param_11 != '\0') && (param_12 == '\0')) {
    *param_8 = *param_8 + -2;
    param_8[1] = param_8[1] + -1;
  }
  if ((param_12 != '\0') && (param_11 == '\0')) {
    *param_8 = *param_8 + 1;
    param_8[1] = param_8[1] + 1;
  }
  iVar5 = *param_3;
  iVar1 = *param_4;
  *param_8 = *param_8 + iVar5 + iVar1;
  iVar3 = param_3[1];
  param_8[1] = param_8[1] + iVar3 + param_4[1];
  FUN_00429ca0(param_9,param_6 + iVar5 + iVar1,local_2c + iVar3 + iVar1);
  return;
}

