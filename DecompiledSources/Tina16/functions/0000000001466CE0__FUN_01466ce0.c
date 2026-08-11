/* Ghidra address: 01466ce0 */
/* Ghidra symbol: FUN_01466ce0 */


void FUN_01466ce0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0064cf60(param_1,0x20e);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_10,0x857);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x788),0,0,local_10);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_18,0x858);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x788),1,0,local_18);
  FUN_00414560(&local_18,2);
  return;
}

