/* Ghidra address: 007002b0 */
/* Ghidra symbol: FUN_007002b0 */


void FUN_007002b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  
  FUN_0040d200(&local_78,0x60,0);
  local_78 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa0));
  local_70 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa0));
  local_68 = 0xfffffd3a;
  local_60 = FUN_006fa830(param_2);
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa0));
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa0));
  FUN_004701a0(uVar1,0x4e,uVar2,&local_78);
  return;
}

