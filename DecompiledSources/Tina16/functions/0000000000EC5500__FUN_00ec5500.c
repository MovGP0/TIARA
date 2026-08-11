/* Ghidra address: 00ec5500 */
/* Ghidra symbol: FUN_00ec5500 */


void FUN_00ec5500(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_30,uVar3);
  FUN_00ebd270(&local_28,local_30);
  if (local_28 != 0) {
    FUN_0043e130(&local_38,local_28);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0xd0))
                      (*(longlong **)(param_1 + 0x850),L"DigitalICs",local_38);
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x6c0);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_40,uVar3);
      FUN_00ea9ca0(&local_20,local_40);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                        (*(longlong **)(param_1 + 0x6c0));
      FUN_0043e130(&local_58,local_20);
      (**(code **)(**(longlong **)(param_1 + 0x850) + 0x10))
                (*(longlong **)(param_1 + 0x850),&local_50,L"DigitalICs",local_58,0);
      FUN_0043ea00(&local_48,local_50);
      FUN_00414ad0(param_1 + 0x868,local_48);
      FUN_00ea9ef0(&local_60,local_28);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x4a0);
      (**(code **)(*plVar1 + 0x40))(plVar1,uVar3,local_60);
      FUN_0043e130(&local_68,local_28);
      (**(code **)(**(longlong **)(param_1 + 0x850) + 0x18))
                (*(longlong **)(param_1 + 0x850),L"DigitalICs",local_68,
                 *(undefined8 *)(param_1 + 0x868));
      FUN_00ec1150(param_1);
      FUN_00ec0380(param_1);
      plVar1 = *(longlong **)(param_1 + 0x818);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar3,1);
    }
    else {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_78,0x846);
      local_88 = local_28;
      local_80 = 0x11;
      FUN_00442f70(&local_70,local_78,&local_88,0);
      FUN_0072d440(local_70,1,4,0);
    }
  }
  FUN_00414560(&local_78,0xc);
  return;
}

