/* Ghidra address: 01ac8a00 */
/* Ghidra symbol: FUN_01ac8a00 */


void FUN_01ac8a00(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x700);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  uVar2 = FUN_01a8dbc0(uVar2);
  FUN_005fd4e0(uVar1,uVar2);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  uVar2 = FUN_01a8df40(uVar2);
  FUN_005fd670(uVar1,uVar2);
  uVar2 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x6e0));
  FUN_005fd6d0(uVar1,uVar2);
  return;
}

