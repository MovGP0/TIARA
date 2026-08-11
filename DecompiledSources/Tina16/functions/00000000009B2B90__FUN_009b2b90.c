/* Ghidra address: 009b2b90 */
/* Ghidra symbol: FUN_009b2b90 */


undefined8 FUN_009b2b90(longlong param_1,undefined8 param_2)

{
  undefined1 local_18 [16];
  
  FUN_00417580(local_18,&DAT_009427f8);
  FUN_00417c40(local_18,*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 0x10,&DAT_009427f8);
  FUN_00417c40(param_2,local_18,&DAT_009427f8);
  FUN_00417740(local_18,&DAT_009427f8);
  return param_2;
}

