/* Ghidra address: 01ac9450 */
/* Ghidra symbol: FUN_01ac9450 */


void FUN_01ac9450(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x750);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  uVar2 = FUN_01a8dbc0(uVar2);
  FUN_005fd4e0(uVar1,uVar2);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  uVar2 = FUN_01a8df40(uVar2);
  FUN_005fd670(uVar1,uVar2);
  uVar2 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x720));
  FUN_005fd6d0(uVar1,uVar2);
  return;
}

