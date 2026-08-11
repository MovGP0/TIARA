/* Ghidra address: 009b11d0 */
/* Ghidra symbol: FUN_009b11d0 */


undefined8 FUN_009b11d0(longlong param_1,undefined8 param_2)

{
  undefined1 local_20 [24];
  
  FUN_00417580(local_20,&DAT_009428e8);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_20,*(undefined8 *)(param_1 + 8),&DAT_009428e8);
  FUN_00417c40(param_2,local_20,&DAT_009428e8);
  FUN_00417740(local_20,&DAT_009428e8);
  return param_2;
}

