/* Ghidra address: 01586680 */
/* Ghidra symbol: FUN_01586680 */


undefined8 FUN_01586680(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_4a [66];
  
  FUN_00417580(local_4a,&DAT_015764a8);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_4a,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x42,&DAT_015764a8);
  FUN_00417c40(param_2,local_4a,&DAT_015764a8);
  FUN_00599740(param_1 + 8,param_3,3);
  FUN_00417740(local_4a,&DAT_015764a8);
  return param_2;
}

