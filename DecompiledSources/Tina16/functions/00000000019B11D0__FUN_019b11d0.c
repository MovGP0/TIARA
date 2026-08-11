/* Ghidra address: 019b11d0 */
/* Ghidra symbol: FUN_019b11d0 */


undefined8 FUN_019b11d0(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_01984be0);
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00594f90();
  }
  FUN_00417c40(local_28,*(undefined8 *)(param_1 + 8),&DAT_01984be0);
  FUN_00417c40(param_2,local_28,&DAT_01984be0);
  FUN_00417740(local_28,&DAT_01984be0);
  return param_2;
}

