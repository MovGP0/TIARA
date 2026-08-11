/* Ghidra address: 0109e840 */
/* Ghidra symbol: FUN_0109e840 */


void FUN_0109e840(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
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
  uVar1 = FUN_00bfaa40(*(undefined8 *)(param_1 + 0x980));
  *(undefined4 *)(param_1 + 0x1644) = uVar1;
  uVar1 = FUN_00bfaa50(*(undefined8 *)(param_1 + 0x980));
  *(undefined4 *)(param_1 + 0x1640) = uVar1;
  FUN_0040e840(local_128,uVar1);
  FUN_004169a0(&local_18,local_128);
  FUN_0040e840(local_128,*(undefined4 *)(param_1 + 0x1644));
  FUN_004169a0(&local_20,local_128);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_130,0x3e5);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_138,0x3e6);
  FUN_00416cd0(&local_10,8,&DAT_0109ea00,local_130,&LAB_0109ea10,local_18,&DAT_0109ea00,local_138,
               &LAB_0109ea10,local_20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_10);
  FUN_00414560(&local_138,2);
  FUN_00414560(&local_20,3);
  return;
}

