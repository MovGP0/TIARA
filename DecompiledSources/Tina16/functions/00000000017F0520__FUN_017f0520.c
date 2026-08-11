/* Ghidra address: 017f0520 */
/* Ghidra symbol: FUN_017f0520 */


void FUN_017f0520(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [264];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_140 = 0;
  local_130 = 0;
  local_138 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_0040e840(local_128,1);
  FUN_004169a0(&local_18,local_128);
  FUN_0040e840(local_128,1);
  FUN_004169a0(&local_20,local_128);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_130,0x3e5);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_138,0x3e6);
  FUN_00416cd0(&local_10,8,&DAT_017f0710,local_130,&LAB_017f0720,local_18,&DAT_017f0710,local_138,
               &LAB_017f0720,local_20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7c8),local_10);
  FUN_017f0df0(param_1);
  FUN_00f08d50(&local_140,10);
  FUN_017f0d10(param_1,local_140);
  uVar1 = FUN_00b89270();
  FUN_00b8d260(uVar1,param_1,0xffffffff);
  FUN_00bbae50(*(undefined8 *)(*(longlong *)(param_1 + 0x868) + 0x610),1);
  FUN_00414560(&local_140,3);
  FUN_00414560(&local_20,3);
  return;
}

