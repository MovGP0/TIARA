/* Ghidra address: 00798b50 */
/* Ghidra symbol: FUN_00798b50 */


undefined8 FUN_00798b50(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_0075cb10);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_28,*(undefined8 *)(param_1 + 8),&DAT_0075cb10);
  FUN_00417c40(param_2,local_28,&DAT_0075cb10);
  FUN_00417740(local_28,&DAT_0075cb10);
  return param_2;
}

