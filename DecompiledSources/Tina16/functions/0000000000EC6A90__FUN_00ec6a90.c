/* Ghidra address: 00ec6a90 */
/* Ghidra symbol: FUN_00ec6a90 */


void FUN_00ec6a90(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_40,uVar2);
  FUN_00ea9ca0(&local_28,local_40[0]);
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_48,uVar2);
  FUN_00ea9ca0(&local_30,local_48);
  FUN_0043e130(&local_60,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x850) + 0x10))
            (*(longlong **)(param_1 + 0x850),&local_58,L"DigitalICs",local_60,0);
  FUN_0043ea00(&local_50,local_58);
  FUN_00414ad0(param_1 + 0x868,local_50);
  uVar2 = FUN_004170c0(local_30,*(undefined8 *)(param_1 + 0x868),1);
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_68,uVar3);
  FUN_00ebb850(&local_20,local_68,*(undefined4 *)(param_1 + 0x8bc));
  if (local_20 != 0) {
    FUN_00ea9ef0(&local_70,local_20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
    iVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_70);
    if (iVar4 == -1) {
      FUN_00416ba0(&local_78,local_20,&DAT_00ec6e94);
      FUN_00416ea0(local_78,param_1 + 0x868,uVar2);
      FUN_0043e130(&local_80,local_28);
      FUN_0043ea00(&local_88,*(undefined8 *)(param_1 + 0x868));
      (**(code **)(**(longlong **)(param_1 + 0x850) + 0x18))
                (*(longlong **)(param_1 + 0x850),L"DigitalICs",local_80,local_88);
      FUN_00ec1150(param_1);
      FUN_00ec0380(param_1);
      plVar1 = *(longlong **)(param_1 + 0x818);
      uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar2,1);
    }
    else {
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_98,0x845);
      local_a8 = local_20;
      local_a0 = 0x11;
      FUN_00442f70(&local_90,local_98,&local_a8,0);
      FUN_0072d440(local_90,1,4,0);
    }
  }
  FUN_00414560(&local_98,0xc);
  FUN_00414560(&local_30,3);
  return;
}

