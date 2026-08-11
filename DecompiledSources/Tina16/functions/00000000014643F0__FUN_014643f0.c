/* Ghidra address: 014643f0 */
/* Ghidra symbol: FUN_014643f0 */


void FUN_014643f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x848),
               *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x98));
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x848),
               *(undefined4 *)(*(longlong *)(param_1 + 0x760) + 0x9c));
  uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x318));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x848) + 0x310);
  (**(code **)(*plVar1 + 0x88))(plVar1,0,0,uVar2);
  return;
}

