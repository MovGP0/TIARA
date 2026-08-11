/* Ghidra address: 019b1650 */
/* Ghidra symbol: FUN_019b1650 */


undefined8 FUN_019b1650(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_01984be0);
  FUN_00417c40(local_28,*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 0x20,&DAT_01984be0);
  FUN_00417c40(param_2,local_28,&DAT_01984be0);
  FUN_00417740(local_28,&DAT_01984be0);
  return param_2;
}

