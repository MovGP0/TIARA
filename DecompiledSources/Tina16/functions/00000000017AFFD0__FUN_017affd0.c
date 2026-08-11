/* Ghidra address: 017affd0 */
/* Ghidra symbol: FUN_017affd0 */


void FUN_017affd0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 local_40 [2];
  
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  local_40[0] = FUN_00498310((int)param_1[2] + param_3,*(int *)((longlong)param_1 + 0x14) + param_4)
  ;
  (**(code **)*param_1)(param_1,local_40);
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  return;
}

