/* Ghidra address: 01466720 */
/* Ghidra symbol: FUN_01466720 */


void FUN_01466720(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = FUN_01d11b00(&DAT_01d10980,1);
  *(undefined8 *)(param_1 + 0x798) = uVar3;
  FUN_01d11f10(uVar3,param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xa0);
  (**(code **)(*plVar1 + 0x78))(plVar1,&DAT_01466864);
  dVar4 = (double)FUN_01d122c0(param_2);
  uVar2 = FUN_0040c840(dVar4 * 100.0);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x6d8),uVar2);
  dVar4 = (double)FUN_01d12280(param_2);
  uVar2 = FUN_0040c840(dVar4 * 100.0);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x6e0),uVar2);
  dVar4 = (double)FUN_01d122e0(param_2);
  uVar2 = FUN_0040c840(dVar4 * 100.0);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x6e8),uVar2);
  dVar4 = (double)FUN_01d122a0(param_2);
  uVar2 = FUN_0040c840(dVar4 * 100.0);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x6f0),uVar2);
  dVar4 = (double)FUN_01d12300(param_2);
  uVar2 = FUN_0040c840(dVar4 * 100.0);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x720),uVar2);
  dVar4 = (double)FUN_01d12320(param_2);
  uVar2 = FUN_0040c840(dVar4 * 100.0);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x728),uVar2);
  FUN_01466580(param_1);
  return;
}

