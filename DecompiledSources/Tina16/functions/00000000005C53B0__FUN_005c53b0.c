/* Ghidra address: 005c53b0 */
/* Ghidra symbol: FUN_005c53b0 */


undefined8 FUN_005c53b0(longlong param_1,undefined8 param_2)

{
  undefined1 local_40 [56];
  
  FUN_00417580(local_40,&DAT_005bc868);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_40,*(undefined8 *)(param_1 + 8),&DAT_005bc868);
  FUN_00417c40(param_2,local_40,&DAT_005bc868);
  FUN_00417740(local_40,&DAT_005bc868);
  return param_2;
}

