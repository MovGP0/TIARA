/* Ghidra address: 010a38b0 */
/* Ghidra symbol: FUN_010a38b0 */


void FUN_010a38b0(longlong param_1)

{
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [264];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_130 = 0;
  local_138 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_010a3870(param_1,param_1 + 0x98c,param_1 + 0x990);
  FUN_0040e840(local_128,*(undefined4 *)(param_1 + 0x98c));
  FUN_004169a0(&local_18,local_128);
  FUN_0040e840(local_128,*(undefined4 *)(param_1 + 0x990));
  FUN_004169a0(&local_20,local_128);
  FUN_004401f0(&local_130,0x3e5);
  FUN_004401f0(&local_138,0x3e6);
  FUN_00416cd0(&local_10,8,&DAT_010a3a60,local_130,&LAB_010a3a70,local_18,&DAT_010a3a60,local_138,
               &LAB_010a3a70,local_20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_10);
  FUN_00414560(&local_138,2);
  FUN_00414560(&local_20,3);
  return;
}

