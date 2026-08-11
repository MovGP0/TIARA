/* Ghidra address: 00adcd90 */
/* Ghidra symbol: FUN_00adcd90 */


void FUN_00adcd90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  uVar2 = FUN_004aeac0(lVar1,*(int *)(lVar1 + 0x10) + -1);
  plVar3 = (longlong *)
           FUN_00ab5680(*(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x60),0xc0,
                        *(undefined8 *)(lVar1 + 0x20),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x48),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x68),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + 0x7c),uVar2);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  uVar2 = FUN_004aeac0(lVar1,*(int *)(lVar1 + 0x10) + -1);
  (**(code **)(*plVar3 + 0x170))(plVar3,uVar2);
  return;
}

