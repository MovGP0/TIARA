/* Ghidra address: 01412f00 */
/* Ghidra symbol: FUN_01412f00 */


void FUN_01412f00(longlong param_1)

{
  undefined8 uVar1;
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
  FUN_010a6ea0(*(undefined8 *)(param_1 + 0x6f0),param_1 + 0x74c,param_1 + 0x750);
  FUN_0040e840(local_128,*(undefined4 *)(param_1 + 0x74c));
  FUN_004169a0(&local_18,local_128);
  FUN_0040e840(local_128,*(undefined4 *)(param_1 + 0x750));
  FUN_004169a0(&local_20,local_128);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_130,0x3e5);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_138,0x3e6);
  FUN_00416cd0(&local_10,9,&DAT_014130e0,local_130,&LAB_014130f0,local_18,&DAT_014130e0,local_138,
               &LAB_014130f0,local_20,&DAT_014130e0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_10);
  FUN_00414560(&local_138,2);
  FUN_00414560(&local_20,3);
  return;
}

