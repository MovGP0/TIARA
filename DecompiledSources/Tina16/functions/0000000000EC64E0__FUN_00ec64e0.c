/* Ghidra address: 00ec64e0 */
/* Ghidra symbol: FUN_00ec64e0 */


void FUN_00ec64e0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_30,uVar2);
  FUN_00ea9ca0(local_20,local_30);
  plVar1 = *(longlong **)(param_1 + 0x6c8);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_38,uVar2);
  FUN_00ea9ca0(&local_28,local_38);
  FUN_00ec6ea0(param_1,local_20[0],local_28,1);
  FUN_00ec1150(param_1);
  FUN_00ec0380(param_1);
  plVar1 = *(longlong **)(param_1 + 0x818);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar2,1);
  FUN_00414560(&local_38,4);
  return;
}

