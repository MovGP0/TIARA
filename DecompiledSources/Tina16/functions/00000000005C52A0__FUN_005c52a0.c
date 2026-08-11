/* Ghidra address: 005c52a0 */
/* Ghidra symbol: FUN_005c52a0 */


undefined8 FUN_005c52a0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_40 [56];
  
  FUN_00417580(local_40,&DAT_005bc868);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_40,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x38,&DAT_005bc868);
  FUN_00417c40(param_2,local_40,&DAT_005bc868);
  FUN_00599740(param_1 + 8,param_3,3);
  FUN_00417740(local_40,&DAT_005bc868);
  return param_2;
}

