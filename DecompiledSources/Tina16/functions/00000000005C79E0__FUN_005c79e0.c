/* Ghidra address: 005c79e0 */
/* Ghidra symbol: FUN_005c79e0 */


undefined8 FUN_005c79e0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_38 [48];
  
  FUN_00417580(local_38,&DAT_005bc4e0);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_38,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x30,&DAT_005bc4e0);
  FUN_00417c40(param_2,local_38,&DAT_005bc4e0);
  FUN_00599740(param_1 + 8,param_3,3);
  FUN_00417740(local_38,&DAT_005bc4e0);
  return param_2;
}

