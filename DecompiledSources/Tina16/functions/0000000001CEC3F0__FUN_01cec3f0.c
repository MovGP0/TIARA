/* Ghidra address: 01cec3f0 */
/* Ghidra symbol: FUN_01cec3f0 */


void FUN_01cec3f0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(longlong **)(param_1 + 0x10),param_2);
  FUN_01ae5ef0(uVar1,local_res18[0]);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
            (*(longlong **)(param_1 + 0x10),param_2,local_res18[0]);
  plVar2 = (longlong *)FUN_006d6380(param_4);
  (**(code **)(*plVar2 + 0x40))(plVar2,param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

