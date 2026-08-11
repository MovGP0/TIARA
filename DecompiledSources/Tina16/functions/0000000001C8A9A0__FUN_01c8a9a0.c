/* Ghidra address: 01c8a9a0 */
/* Ghidra symbol: FUN_01c8a9a0 */


undefined8 FUN_01c8a9a0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if ((*(longlong *)(param_1 + 0x2780) != 0) && (*(longlong *)(param_1 + 0x2790) != 0)) {
    iVar1 = FUN_004aeba0(*(longlong *)(param_1 + 0x2780),*(undefined8 *)(param_1 + 0x2790));
    if (iVar1 != -1) {
      uVar5 = 1;
      uVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x2780),*(undefined8 *)(param_1 + 0x2790));
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),uVar2);
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),uVar2);
      FUN_01c8ab30(param_1,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar4 + 0x10));
    }
  }
  return uVar5;
}

