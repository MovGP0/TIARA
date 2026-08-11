/* Ghidra address: 010a4790 */
/* Ghidra symbol: FUN_010a4790 */


void FUN_010a4790(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x98));
  FUN_0043f750(&local_18,*(undefined4 *)(param_1 + 0x9c));
  uVar1 = FUN_007fd7d0(param_1);
  FUN_0043f750(&local_20,uVar1);
  uVar1 = FUN_007fd800(param_1);
  FUN_0043f750(&local_28,uVar1);
  FUN_00416cd0(PTR_DAT_020030c0 + 0x40,7,local_10,&LAB_010a48e8,local_18,&LAB_010a48e8,local_20,
               &LAB_010a48e8,local_28);
  FUN_010a5e60(param_1,param_2);
  FUN_010a5c90(param_1,param_2);
  FUN_010a4e70(param_1,param_2);
  FUN_010a6220(param_1,param_2);
  FUN_010a6030(param_1,param_2);
  FUN_00414560(&local_28,4);
  return;
}

