/* Ghidra address: 00ec4db0 */
/* Ghidra symbol: FUN_00ec4db0 */


void FUN_00ec4db0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00ebd270(local_20,*(undefined8 *)(param_1 + 0x890));
  if (local_20[0] != 0) {
    FUN_0043e130(local_30,local_20[0]);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0xd0))
                      (*(longlong **)(param_1 + 0x850),L"DigitalICs",local_30[0]);
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x6c0);
      FUN_00ea9ef0(&local_38,local_20[0]);
      uVar3 = (**(code **)(*(longlong *)plVar1[0x94] + 0x78))((longlong *)plVar1[0x94],local_38);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
      FUN_0043e130(&local_40,local_20[0]);
      FUN_00414ad0(param_1 + 0x868,local_40);
      (**(code **)(**(longlong **)(param_1 + 0x850) + 0x18))
                (*(longlong **)(param_1 + 0x850),L"DigitalICs",*(undefined8 *)(param_1 + 0x868),0);
      FUN_00414480(param_1 + 0x860);
      FUN_00ec1150(param_1);
      FUN_00ec0380(param_1);
      plVar1 = *(longlong **)(param_1 + 0x818);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar3,1);
    }
    else {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_50,0x846);
      local_60 = local_20[0];
      local_58 = 0x11;
      FUN_00442f70(&local_48,local_50,&local_60,0);
      FUN_0072d440(local_48,1,4,0);
    }
  }
  FUN_00414560(&local_50,5);
  FUN_00414480(local_20);
  return;
}

