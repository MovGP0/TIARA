/* Ghidra address: 00f63520 */
/* Ghidra symbol: FUN_00f63520 */


void FUN_00f63520(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined1 local_68 [48];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_00f62b60(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_00f652e0(param_1,param_3);
  FUN_00f65300(param_1,param_4);
  FUN_00f65320(param_1,param_5);
  FUN_00f652c0(param_1,4);
  FUN_00f6eb60(param_2,&local_2c,&local_30,&local_34,&local_38);
  FUN_00f605f0(local_68,local_2c,local_30,local_34,local_38);
  FUN_00f63480(param_1,local_68);
  return;
}

