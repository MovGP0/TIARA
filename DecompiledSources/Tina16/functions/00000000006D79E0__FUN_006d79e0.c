/* Ghidra address: 006d79e0 */
/* Ghidra symbol: FUN_006d79e0 */


void FUN_006d79e0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = (longlong *)FUN_006d6380(param_1);
  uVar2 = FUN_006d6630(param_2);
  FUN_0064dd90(param_2,&local_20);
  (**(code **)(*plVar1 + 0x40))(plVar1,uVar2,local_20);
  FUN_00414480(&local_20);
  return;
}

