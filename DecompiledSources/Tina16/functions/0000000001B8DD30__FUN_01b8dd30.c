/* Ghidra address: 01b8dd30 */
/* Ghidra symbol: FUN_01b8dd30 */


undefined8 FUN_01b8dd30(longlong param_1,undefined8 param_2)

{
  undefined1 local_20 [24];
  
  FUN_00417580(local_20,&DAT_01b7d278);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_20,*(undefined8 *)(param_1 + 8),&DAT_01b7d278);
  FUN_00417c40(param_2,local_20,&DAT_01b7d278);
  FUN_00417740(local_20,&DAT_01b7d278);
  return param_2;
}

