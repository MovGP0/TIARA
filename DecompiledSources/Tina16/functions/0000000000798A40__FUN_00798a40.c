/* Ghidra address: 00798a40 */
/* Ghidra symbol: FUN_00798a40 */


undefined8 FUN_00798a40(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_0075cb10);
  if (*(uint *)(param_1 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_28,*(longlong *)(param_1 + 8) + (longlong)(int)param_3 * 0x20,&DAT_0075cb10);
  FUN_00417c40(param_2,local_28,&DAT_0075cb10);
  FUN_00599740(param_1 + 8,param_3,3);
  FUN_00417740(local_28,&DAT_0075cb10);
  return param_2;
}

