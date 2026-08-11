/* Ghidra address: 00559cd0 */
/* Ghidra symbol: FUN_00559cd0 */


undefined8
FUN_00559cd0(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,int param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *local_70 [2];
  int local_5c;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_70[0] = (longlong *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  uStack_38 = param_3[2];
  uStack_30 = param_3[3];
  FUN_004179d0(&local_48,&DAT_00527bf8);
  (**(code **)(*param_1 + 0x70))(param_1,&local_58);
  lVar4 = 0;
  if (local_58 != 0) {
    lVar4 = *(longlong *)(local_58 + -8);
  }
  if (param_5 + 1 != lVar4) {
    uVar3 = FUN_0044d710(&PTR_FUN_005277c0,1,PTR_PTR_02001778);
    FUN_004134c0(uVar3);
  }
  FUN_00419260(&local_50,&DAT_00492e48,1,(longlong)(param_5 + 2));
  local_5c = 0;
  FUN_00537950(&local_48,local_70);
  plVar1 = local_70[0];
  (**(code **)(*param_1 + 0x28))(param_1);
  FUN_00417c40(local_50 + (longlong)local_5c * 0x20,&local_48,&DAT_00527bf8);
  local_5c = local_5c + 1;
  iVar6 = 0;
  if (-1 < param_5) {
    param_5 = param_5 + 1;
    do {
      uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
      FUN_00535440(*(undefined8 *)(local_58 + (longlong)iVar6 * 8),param_4,
                   local_50 + (longlong)local_5c * 0x20,uVar2);
      local_5c = local_5c + 1;
      iVar6 = iVar6 + 1;
      param_4 = param_4 + 0x20;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  uVar3 = *(undefined8 *)(*plVar1 + (longlong)(int)param_1[10] * 8);
  FUN_00534b80(uVar3);
  (**(code **)(*param_1 + 0x28))(param_1);
  lVar4 = (**(code **)(*param_1 + 0x30))(param_1);
  if (lVar4 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_00557210(param_2,uVar3,local_50,uVar2,0,0,0);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar5 = FUN_005466a0(uVar5);
    FUN_00557210(param_2,uVar3,local_50,uVar2,uVar5,0,0);
  }
  FUN_0041b800(local_70);
  FUN_00419430(&local_58,&DAT_00531510);
  FUN_00419430(&local_50,&DAT_00492e48);
  FUN_00417740(&local_48,&DAT_00527bf8);
  return param_2;
}

