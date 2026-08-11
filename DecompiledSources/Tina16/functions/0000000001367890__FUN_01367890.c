/* Ghidra address: 01367890 */
/* Ghidra symbol: FUN_01367890 */


undefined8 FUN_01367890(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  uVar1 = FUN_0198d430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
  FUN_01a982d0(uVar1,param_3,param_4,local_2c,&local_30);
  FUN_01367550(param_1);
  *(undefined4 *)(param_1 + 0x20) = local_2c[0];
  *(undefined4 *)(param_1 + 0x24) = local_30;
  FUN_01367550(param_1);
  return 0;
}

