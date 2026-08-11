/* Ghidra address: 010fc150 */
/* Ghidra symbol: FUN_010fc150 */


undefined1 FUN_010fc150(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_2 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x8c8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_019ac2d0(*(longlong *)(param_1 + 0x8c8),param_2);
    }
    (**(code **)(*param_2 + 0x288))(param_2,&local_40);
    if (local_40 == 0) {
      FUN_0043f750(local_50,uVar3);
      FUN_00416ba0(&local_40,L"no_label_",local_50[0]);
    }
    uVar3 = (**(code **)(*param_2 + 0x210))(param_2,0);
    uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
    local_99 = 0;
    cVar2 = FUN_0153a250(1,param_2);
    if (cVar2 == '\0') {
      FUN_0043f750(&local_68,uVar3);
      FUN_0043f750(&local_70,uVar4);
      FUN_00416cd0(local_30,7,&DAT_010fc650,local_40,&DAT_010fc660,local_68,&DAT_010fc670,local_70,
                   &LAB_010fc680);
      FUN_0043f750(&local_78,uVar4);
      FUN_0043f750(&local_80,uVar3);
      FUN_00416cd0(&local_38,7,&DAT_010fc650,local_40,&DAT_010fc660,local_78,&DAT_010fc670,local_80,
                   &LAB_010fc680);
      iVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb30) + 8) + 0x28))();
      iVar8 = 0;
      if (-1 < iVar5 + -1) {
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_88,iVar8);
          iVar6 = FUN_004170c0(local_30[0],local_88,1);
          if (iVar6 < 1) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_90,iVar8);
            iVar6 = FUN_004170c0(local_38,local_90,1);
            if (0 < iVar6) goto LAB_010fc53c;
          }
          else {
LAB_010fc53c:
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_98,iVar8);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
            uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar8);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb38) + 8);
            (**(code **)(*plVar1 + 0x80))(plVar1,local_98,uVar7);
            local_99 = 1;
          }
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      FUN_00414b50(local_30,local_40);
      FUN_00414480(&local_38);
      iVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb30) + 8) + 0x28))();
      iVar8 = 0;
      if (-1 < iVar5 + -1) {
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,iVar8);
          iVar6 = FUN_00416db0(local_30[0],local_58);
          if (iVar6 == 0) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_60,iVar8);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb30) + 8);
            uVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar8);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb38) + 8);
            (**(code **)(*plVar1 + 0x80))(plVar1,local_60,uVar7);
            local_99 = 1;
          }
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  FUN_00414560(&local_98,10);
  FUN_00414560(&local_40,3);
  return local_99;
}

