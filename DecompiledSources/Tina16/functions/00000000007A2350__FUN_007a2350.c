/* Ghidra address: 007a2350 */
/* Ghidra symbol: FUN_007a2350 */


undefined8 FUN_007a2350(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_18 [16];
  
  FUN_00417580(local_18,&DAT_00767418);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_18,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x10,&DAT_00767418);
  FUN_00417c40(param_2,local_18,&DAT_00767418);
  FUN_00599740(param_1 + 8,param_3,3);
  FUN_00417740(local_18,&DAT_00767418);
  return param_2;
}

