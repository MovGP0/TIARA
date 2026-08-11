/* Ghidra address: 01bc11a0 */
/* Ghidra symbol: FUN_01bc11a0 */


void FUN_01bc11a0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6b0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_20,uVar2);
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_28,uVar2);
  uVar4 = FUN_01bbbe90(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),local_20[0]);
  uVar4 = FUN_01bbbbd0(uVar4,1,local_28);
  FUN_01bbb5e0(uVar4,local_50,2);
  FUN_00414ad0(param_1 + 0x748,local_50[0]);
  FUN_01bbc0f0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),
               *(undefined8 *)(param_1 + 0x748));
  lVar5 = FUN_01bbc040(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),
                       *(undefined8 *)(param_1 + 0x748));
  if (lVar5 != 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x18))
              (*(longlong **)(lVar5 + 0x10),&local_30,uVar2);
    iVar3 = FUN_004170c0(&LAB_01bc13d8,local_30,1);
    FUN_00416dc0(param_1 + 0x748,local_30,1,iVar3 + -1);
    uVar4 = FUN_01bbc0f0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x48),
                         *(undefined8 *)(param_1 + 0x748));
    FUN_01bc13e0(param_1,uVar4);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_40,5);
  return;
}

