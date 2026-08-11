/* Ghidra address: 01b8e1b0 */
/* Ghidra symbol: FUN_01b8e1b0 */


undefined8 FUN_01b8e1b0(longlong param_1,undefined8 param_2)

{
  undefined1 local_20 [24];
  
  FUN_00417580(local_20,&DAT_01b7d278);
  FUN_00417c40(local_20,*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 0x18,&DAT_01b7d278);
  FUN_00417c40(param_2,local_20,&DAT_01b7d278);
  FUN_00417740(local_20,&DAT_01b7d278);
  return param_2;
}

