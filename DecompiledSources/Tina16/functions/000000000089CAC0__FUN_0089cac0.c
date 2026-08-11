/* Ghidra address: 0089cac0 */
/* Ghidra symbol: FUN_0089cac0 */


void FUN_0089cac0(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (param_2 == 0x2736) {
    (**(code **)(*param_1 + 0x90))(param_1,local_20,0x2736);
    uVar1 = FUN_0089b950(&PTR_FUN_008982f8,1,0x2736,local_20[0]);
    FUN_004134c0(uVar1);
  }
  (**(code **)(*param_1 + 0x90))(param_1,&local_28,param_2);
  uVar1 = FUN_0089b950(&PTR_FUN_00897e68,1,param_2,local_28);
  FUN_004134c0(uVar1);
  FUN_00414560(&local_28,2);
  return;
}

