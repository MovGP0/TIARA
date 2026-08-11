/* Ghidra address: 004fad00 */
/* Ghidra symbol: FUN_004fad00 */


undefined8 FUN_004fad00(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_18 [16];
  
  FUN_00417580(local_18,&DAT_004990d8);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_18,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x10,&DAT_004990d8);
  FUN_00417c40(param_2,local_18,&DAT_004990d8);
  FUN_00599740(param_1 + 8,param_3,3);
  FUN_00417740(local_18,&DAT_004990d8);
  return param_2;
}

