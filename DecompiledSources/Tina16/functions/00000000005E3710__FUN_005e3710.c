/* Ghidra address: 005e3710 */
/* Ghidra symbol: FUN_005e3710 */


undefined8 FUN_005e3710(longlong param_1,undefined8 param_2)

{
  undefined1 local_18 [16];
  
  FUN_00417580(local_18,&DAT_005d7c00);
  FUN_00417c40(local_18,*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 0x10,&DAT_005d7c00);
  FUN_00417c40(param_2,local_18,&DAT_005d7c00);
  FUN_00417740(local_18,&DAT_005d7c00);
  return param_2;
}

