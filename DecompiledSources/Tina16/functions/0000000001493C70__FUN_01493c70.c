/* Ghidra address: 01493c70 */
/* Ghidra symbol: FUN_01493c70 */


void FUN_01493c70(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [264];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_140 = 0;
  local_148 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_00bfaa40(*(undefined8 *)(param_1 + 0x8b8));
  uVar2 = FUN_00bfaa50(*(undefined8 *)(param_1 + 0x8b8));
  FUN_0040e840(local_138,uVar2);
  FUN_004169a0(&local_28,local_138);
  FUN_0040e840(local_138,uVar1);
  FUN_004169a0(&local_30,local_138);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_140,0x3e5);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_148,0x3e6);
  FUN_00416cd0(local_20,8,&DAT_01493e20,local_140,&LAB_01493e30,local_28,&DAT_01493e20,local_148,
               &LAB_01493e30,local_30);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x860),local_20[0]);
  FUN_00414560(&local_148,2);
  FUN_00414560(&local_30,3);
  return;
}

