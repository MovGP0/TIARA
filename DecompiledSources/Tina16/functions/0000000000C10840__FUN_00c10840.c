/* Ghidra address: 00c10840 */
/* Ghidra symbol: FUN_00c10840 */


void FUN_00c10840(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_006ab1f0(param_2);
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(lVar1 + 0xe0);
  *(undefined8 *)(param_1 + 0x8d0) = *(undefined8 *)(lVar1 + 0xe8);
  lVar1 = FUN_006ab1f0(param_2);
  *(undefined8 *)(param_1 + 0x8d8) = *(undefined8 *)(lVar1 + 0xf0);
  *(undefined8 *)(param_1 + 0x8e0) = *(undefined8 *)(lVar1 + 0xf8);
  lVar1 = FUN_006ab1f0(param_2);
  *(undefined8 *)(param_1 + 0x8e8) = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(param_1 + 0x8f0) = *(undefined8 *)(lVar1 + 0xa0);
  lVar1 = FUN_006ab1f0(param_2);
  *(longlong *)(lVar1 + 0xe8) = param_1;
  *(code **)(lVar1 + 0xe0) = FUN_00c10a00;
  lVar1 = FUN_006ab1f0(param_2);
  *(longlong *)(lVar1 + 0xf8) = param_1;
  *(code **)(lVar1 + 0xf0) = FUN_00c10a00;
  lVar1 = FUN_006ab1f0(param_2);
  *(longlong *)(lVar1 + 0xa0) = param_1;
  *(code **)(lVar1 + 0x98) = FUN_00c10e00;
  plVar2 = (longlong *)FUN_006ab1f0(param_2);
  (**(code **)(*plVar2 + 0xa8))(plVar2);
  return;
}

