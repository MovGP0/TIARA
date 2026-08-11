/* Ghidra address: 01bf8420 */
/* Ghidra symbol: FUN_01bf8420 */


void FUN_01bf8420(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x38))(*(longlong **)(param_1 + 0x158),&local_38);
  FUN_0043ea00(local_30,local_38);
  iVar2 = 0;
  if (local_30[0] != 0) {
    iVar2 = *(int *)(local_30[0] + -4);
  }
  if (iVar2 == 0) {
    FUN_0041ddd0(&local_40,PTR_PTR_020025a8);
    iVar2 = FUN_0072d5c0(local_40,3,0xc,0,0xffffffff,0xffffffff,0);
    if (iVar2 == 1) {
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x60))
                (*(longlong **)(param_1 + 0x158),PTR_u_0_3_1_3_2_6_3_9_4_12_5_12_6_17_7_01fe2170);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x90))(*(longlong **)(param_1 + 0x158));
    }
  }
  else {
    FUN_004b3cf0(param_2,&local_48,0);
    FUN_0043fc00(local_48);
    FUN_004b3cf0(param_2,&local_58,0);
    FUN_004b4060(param_2,&local_50,local_58);
    FUN_0043fc00(local_50);
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x10))(*(longlong **)(param_1 + 0x158),param_2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x150))
            (*(longlong **)(param_1 + 0x158),FUN_01bf8390);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(param_1 + 0x158);
      FUN_004b3cf0(plVar1,&local_68,iVar4);
      FUN_004b4060(plVar1,&local_60,local_68);
      iVar3 = FUN_0043fc00(local_60);
      (**(code **)(*plVar1 + 0x48))(plVar1,iVar4,(longlong)iVar3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_68,8);
  return;
}

