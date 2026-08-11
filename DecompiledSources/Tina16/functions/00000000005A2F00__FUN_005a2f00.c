/* Ghidra address: 005a2f00 */
/* Ghidra symbol: FUN_005a2f00 */


undefined8 FUN_005a2f00(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_0059bd38);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_28,*(undefined8 *)(param_1 + 8),&DAT_0059bd38);
  FUN_00417c40(param_2,local_28,&DAT_0059bd38);
  FUN_00417740(local_28,&DAT_0059bd38);
  return param_2;
}

