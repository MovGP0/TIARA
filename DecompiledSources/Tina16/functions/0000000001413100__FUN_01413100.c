/* Ghidra address: 01413100 */
/* Ghidra symbol: FUN_01413100 */


void FUN_01413100(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6f0));
  FUN_010a7790(uVar1,param_1 + 0x710,param_1 + 0x714,param_1 + 0x718);
  FUN_010a7020(param_1 + 0x720,param_1 + 0x728,param_1 + 0x730);
  FUN_010a73e0(param_1 + 0x730);
  FUN_00f5fe20();
  *(undefined1 *)(param_1 + 0x760) = 0;
  *(undefined4 *)(param_1 + 0x748) = 0xffffffff;
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6f0));
  uVar1 = thunk_FUN_03c9d277(uVar1,0xfffffffc,FUN_01412d60);
  *(undefined8 *)(param_1 + 0x768) = uVar1;
  return;
}

