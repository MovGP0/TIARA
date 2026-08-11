/* Ghidra address: 01ca8970 */
/* Ghidra symbol: FUN_01ca8970 */


undefined8 FUN_01ca8970(longlong param_1,undefined8 param_2)

{
  undefined1 local_18 [16];
  
  FUN_00417580(local_18,&DAT_01c9d548);
  FUN_00417c40(local_18,*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 0x10,&DAT_01c9d548);
  FUN_00417c40(param_2,local_18,&DAT_01c9d548);
  FUN_00417740(local_18,&DAT_01c9d548);
  return param_2;
}

