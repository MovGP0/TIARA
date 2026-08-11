/* Ghidra address: 01586790 */
/* Ghidra symbol: FUN_01586790 */


undefined8 FUN_01586790(longlong param_1,undefined8 param_2)

{
  undefined1 local_4a [66];
  
  FUN_00417580(local_4a,&DAT_015764a8);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_4a,*(undefined8 *)(param_1 + 8),&DAT_015764a8);
  FUN_00417c40(param_2,local_4a,&DAT_015764a8);
  FUN_00417740(local_4a,&DAT_015764a8);
  return param_2;
}

