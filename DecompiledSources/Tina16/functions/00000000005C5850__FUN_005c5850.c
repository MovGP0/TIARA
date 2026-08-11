/* Ghidra address: 005c5850 */
/* Ghidra symbol: FUN_005c5850 */


undefined8 FUN_005c5850(longlong param_1,undefined8 param_2)

{
  undefined1 local_40 [56];
  
  FUN_00417580(local_40,&DAT_005bc868);
  FUN_00417c40(local_40,*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 0x38,&DAT_005bc868);
  FUN_00417c40(param_2,local_40,&DAT_005bc868);
  FUN_00417740(local_40,&DAT_005bc868);
  return param_2;
}

