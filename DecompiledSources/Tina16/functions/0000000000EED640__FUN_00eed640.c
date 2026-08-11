/* Ghidra address: 00eed640 */
/* Ghidra symbol: FUN_00eed640 */


undefined8 FUN_00eed640(longlong param_1,undefined8 param_2)

{
  undefined1 local_18 [16];
  
  FUN_00417580(local_18,&DAT_01765eb0);
  FUN_00417c40(local_18,*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 0x10,&DAT_01765eb0);
  FUN_00417c40(param_2,local_18,&DAT_01765eb0);
  FUN_00417740(local_18,&DAT_01765eb0);
  return param_2;
}

