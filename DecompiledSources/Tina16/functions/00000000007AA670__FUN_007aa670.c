/* Ghidra address: 007aa670 */
/* Ghidra symbol: FUN_007aa670 */


undefined8 FUN_007aa670(longlong param_1,undefined8 param_2)

{
  undefined1 local_20 [24];
  
  FUN_00417580(local_20,&DAT_0076f818);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_20,*(undefined8 *)(param_1 + 8),&DAT_0076f818);
  FUN_00417c40(param_2,local_20,&DAT_0076f818);
  FUN_00417740(local_20,&DAT_0076f818);
  return param_2;
}

