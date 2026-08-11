/* Ghidra address: 00ea8030 */
/* Ghidra symbol: FUN_00ea8030 */


undefined1 FUN_00ea8030(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined1 local_60 [48];
  undefined1 local_30 [40];
  
  FUN_00417580(local_30,&DAT_00ea5f80);
  FUN_00417580(local_60,&DAT_00ea5ae8);
  FUN_00ea7a10(local_30,param_2,param_3);
  FUN_00ea82d0(local_30,local_60,param_1);
  uVar1 = FUN_00ea74f0(local_60);
  FUN_00417740(local_60,&DAT_00ea5ae8);
  FUN_00417740(local_30,&DAT_00ea5f80);
  return uVar1;
}

