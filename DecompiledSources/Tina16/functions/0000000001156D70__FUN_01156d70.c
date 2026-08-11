/* Ghidra address: 01156d70 */
/* Ghidra symbol: FUN_01156d70 */


void FUN_01156d70(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_res18 [2];
  undefined1 local_38 [24];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar3 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
  uVar4 = FUN_00609e10(param_4);
  uVar1 = (**(code **)(*param_4 + 0x60))(param_4);
  uVar2 = (**(code **)(*param_4 + 0x48))(param_4);
  FUN_01156bd0(param_1,param_2,plVar3,uVar4,uVar1,uVar2,param_5);
  if (local_res18[0] == 0) {
    plVar5 = (longlong *)FUN_00609e10(param_4);
    uVar1 = (**(code **)(*param_4 + 0x60))(param_4);
    uVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    FUN_00498350(local_38,0,0,uVar1,uVar2);
    (**(code **)(*plVar5 + 0x110))(plVar5,local_38,plVar3);
  }
  else {
    (**(code **)(*plVar3 + 0xb0))(plVar3,local_res18[0]);
  }
  FUN_00410f20(plVar3);
  FUN_00414480(local_res18);
  return;
}

