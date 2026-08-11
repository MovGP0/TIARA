/* Ghidra address: 004fae00 */
/* Ghidra symbol: FUN_004fae00 */


undefined8 FUN_004fae00(longlong param_1,undefined8 param_2)

{
  undefined1 local_18 [16];
  
  FUN_00417580(local_18,&DAT_004990d8);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_18,*(undefined8 *)(param_1 + 8),&DAT_004990d8);
  FUN_00417c40(param_2,local_18,&DAT_004990d8);
  FUN_00417740(local_18,&DAT_004990d8);
  return param_2;
}

