/* Ghidra address: 01b8dc20 */
/* Ghidra symbol: FUN_01b8dc20 */


undefined8 FUN_01b8dc20(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_20 [24];
  
  FUN_00417580(local_20,&DAT_01b7d278);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_20,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x18,&DAT_01b7d278);
  FUN_00417c40(param_2,local_20,&DAT_01b7d278);
  FUN_00599740(param_1 + 8,param_3,3);
  FUN_00417740(local_20,&DAT_01b7d278);
  return param_2;
}

