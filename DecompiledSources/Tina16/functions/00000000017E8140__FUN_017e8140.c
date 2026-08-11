/* Ghidra address: 017e8140 */
/* Ghidra symbol: FUN_017e8140 */


void FUN_017e8140(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [256];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_130 = 0;
  local_138 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (*(char *)(param_1 + 0x350) != '\0') {
    FUN_017e80a0(param_1,&local_24,&local_28);
    FUN_0040e840(local_128,local_24);
    FUN_004169a0(&local_18,local_128);
    FUN_0040e840(local_128,local_28);
    FUN_004169a0(&local_20,local_128);
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_130,0x3e5);
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_138,0x3e6);
    FUN_00416cd0(&local_10,8,&DAT_017e8300,local_130,&LAB_017e8310,local_18,&DAT_017e8300,local_138,
                 &LAB_017e8310,local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x348),local_10);
  }
  FUN_00414560(&local_138,2);
  FUN_00414560(&local_20,3);
  return;
}

