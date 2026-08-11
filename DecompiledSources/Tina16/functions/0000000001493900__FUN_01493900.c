/* Ghidra address: 01493900 */
/* Ghidra symbol: FUN_01493900 */


void FUN_01493900(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_017e3010(*(undefined8 *)(param_1 + 0x930),param_2);
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x870) + 0xb8),0xff);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_18,0x3e2);
  FUN_00416cd0(&local_10,3,local_18,&LAB_014939e8,*param_2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x870),local_10);
  thunk_FUN_03f3ed6d(0x30);
  FUN_00414560(&local_18,2);
  return;
}

