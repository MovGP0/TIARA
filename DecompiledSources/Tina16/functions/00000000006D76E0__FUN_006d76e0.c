/* Ghidra address: 006d76e0 */
/* Ghidra symbol: FUN_006d76e0 */


void FUN_006d76e0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_20;
  
  local_20 = 0;
  plVar2 = (longlong *)FUN_006d6380(param_1);
  uVar1 = FUN_006d6630(param_2);
  FUN_0064dd90(param_2,&local_20);
  (**(code **)(*plVar2 + 0xd0))(plVar2,uVar1,local_20,param_2);
  (**(code **)(*param_1 + 0x280))(param_1);
  FUN_00414480(&local_20);
  return;
}

