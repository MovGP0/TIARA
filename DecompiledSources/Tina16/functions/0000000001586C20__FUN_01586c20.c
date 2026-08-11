/* Ghidra address: 01586c20 */
/* Ghidra symbol: FUN_01586c20 */


undefined8 FUN_01586c20(longlong param_1,undefined8 param_2)

{
  undefined1 local_4a [66];
  
  FUN_00417580(local_4a,&DAT_015764a8);
  FUN_00417c40(local_4a,*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 0x42,&DAT_015764a8);
  FUN_00417c40(param_2,local_4a,&DAT_015764a8);
  FUN_00417740(local_4a,&DAT_015764a8);
  return param_2;
}

