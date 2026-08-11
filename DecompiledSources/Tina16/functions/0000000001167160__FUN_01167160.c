/* Ghidra address: 01167160 */
/* Ghidra symbol: FUN_01167160 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01167160(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  uVar1 = FUN_0040c770((double)param_2 / _DAT_0203d988);
  uVar2 = FUN_0040c770((double)param_3 / _DAT_0203d988);
  (**(code **)(*param_1 + 0x120))(param_1,uVar1,uVar2,local_res20);
  FUN_00414480(&local_res20);
  return;
}

