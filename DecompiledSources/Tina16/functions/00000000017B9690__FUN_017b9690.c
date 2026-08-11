/* Ghidra address: 017b9690 */
/* Ghidra symbol: FUN_017b9690 */


longlong FUN_017b9690(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((lVar2 == 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x10))) {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),0);
    lVar2 = FUN_017ad290(*(undefined2 *)(param_1 + 0x38),uVar1);
    *(longlong *)(param_1 + 0x48) = lVar2;
    FUN_017b96e0(param_1);
  }
  return lVar2;
}

