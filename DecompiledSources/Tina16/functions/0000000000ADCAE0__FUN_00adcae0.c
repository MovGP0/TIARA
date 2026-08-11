/* Ghidra address: 00adcae0 */
/* Ghidra symbol: FUN_00adcae0 */


void FUN_00adcae0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  uVar2 = FUN_004aeac0(lVar1,*(int *)(lVar1 + 0x10) + -1);
  uVar2 = FUN_00ab53d0(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x48),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c),uVar2);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  uVar3 = FUN_004aeac0(lVar1,*(int *)(lVar1 + 0x10) + -1);
  FUN_00ac28e0(uVar2,uVar3);
  return;
}

