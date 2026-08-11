/* Ghidra address: 00ec49e0 */
/* Ghidra symbol: FUN_00ec49e0 */


void FUN_00ec49e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00ebb850(local_20,0,*(undefined4 *)(param_1 + 0x8bc));
  if (local_20[0] != 0) {
    FUN_00ea9ef0(local_40,local_20[0]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
    iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_40[0]);
    if (iVar2 < 0) {
      plVar1 = *(longlong **)(param_1 + 0x6c8);
      FUN_00ea9ef0(&local_68,local_20[0]);
      uVar3 = (**(code **)(*(longlong *)plVar1[0x94] + 0x78))((longlong *)plVar1[0x94],local_68);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
      if (*(longlong *)(param_1 + 0x860) == 0) {
        FUN_00ea9ca0(&local_70,local_20[0]);
        FUN_00414ad0(param_1 + 0x860,local_70);
      }
      plVar1 = *(longlong **)(param_1 + 0x6c0);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_78,uVar3);
      FUN_00ea9ca0(&local_28,local_78);
      FUN_0043e130(&local_88,local_28);
      (**(code **)(**(longlong **)(param_1 + 0x850) + 0x10))
                (*(longlong **)(param_1 + 0x850),&local_80,L"DigitalICs",local_88,0);
      FUN_0043ea00(&local_30,local_80);
      FUN_00416cd0(&local_30,4,local_30,&DAT_00ec4d94,local_20[0],L" ();");
      FUN_0043e130(&local_90,local_28);
      (**(code **)(**(longlong **)(param_1 + 0x850) + 0x18))
                (*(longlong **)(param_1 + 0x850),L"DigitalICs",local_90,local_30);
      FUN_00414ad0(param_1 + 0x868,local_30);
      FUN_00ec0aa0(param_1);
      FUN_00ec0380(param_1);
      plVar1 = *(longlong **)(param_1 + 0x818);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar3,1);
    }
    else {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_50,0x845);
      local_60 = local_20[0];
      local_58 = 0x11;
      FUN_00442f70(&local_48,local_50,&local_60,0);
      FUN_0072d440(local_48,1,4,0);
    }
  }
  FUN_00414560(&local_90,6);
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_30,3);
  return;
}

