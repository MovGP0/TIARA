/* Ghidra address: 01adb5c0 */
/* Ghidra symbol: FUN_01adb5c0 */


void FUN_01adb5c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_01ada080(param_1);
  if (cVar1 != '\0') {
    uVar4 = FUN_01ae9510(param_1,0,0);
    plVar6 = (longlong *)FUN_01ae9310(param_1,local_res10[0],0);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    if (0 < iVar5) {
      FUN_01ae94a0(param_1,local_30);
      FUN_0043f750(&local_40,uVar4);
      FUN_00416ba0(&local_38,L"AxesPos",local_40);
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),0);
      uVar2 = FUN_01ce33d0(uVar7);
      cVar1 = (**(code **)(*plVar6 + 0x20))(plVar6,local_30[0],local_38,uVar2);
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),0);
      cVar3 = FUN_01ce33d0(uVar7);
      if (cVar1 != cVar3) {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),0);
        cVar1 = FUN_01ce33d0(uVar7);
        if (cVar1 == '\0') {
          FUN_01ae6250(param_1,0,local_res10[0]);
        }
        else {
          FUN_01ae6350(param_1,local_res10[0]);
        }
      }
    }
    FUN_00410f20(plVar6);
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

