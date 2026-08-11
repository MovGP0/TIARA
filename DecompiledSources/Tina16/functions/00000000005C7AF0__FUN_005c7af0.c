/* Ghidra address: 005c7af0 */
/* Ghidra symbol: FUN_005c7af0 */


undefined8 FUN_005c7af0(longlong param_1,undefined8 param_2)

{
  undefined1 local_38 [48];
  
  FUN_00417580(local_38,&DAT_005bc4e0);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_38,*(undefined8 *)(param_1 + 8),&DAT_005bc4e0);
  FUN_00417c40(param_2,local_38,&DAT_005bc4e0);
  FUN_00417740(local_38,&DAT_005bc4e0);
  return param_2;
}

