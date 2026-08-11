/* Ghidra address: 00ec5310 */
/* Ghidra symbol: FUN_00ec5310 */


void FUN_00ec5310(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_30,uVar2);
  FUN_00ea9ca0(&local_20,local_30[0]);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x98))((longlong *)plVar1[0x94],uVar2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x4a0);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 < iVar4) {
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),iVar3);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
              (*(longlong **)(param_1 + 0x6c0),iVar3 + -1);
  }
  FUN_0043e130(&local_38,local_20);
  (**(code **)(**(longlong **)(param_1 + 0x850) + 0xc0))
            (*(longlong **)(param_1 + 0x850),L"DigitalICs",local_38);
  FUN_00ec1150(param_1);
  FUN_00ec0380(param_1);
  plVar1 = *(longlong **)(param_1 + 0x818);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar2,1);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}

