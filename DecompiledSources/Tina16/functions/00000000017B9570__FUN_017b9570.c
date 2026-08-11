/* Ghidra address: 017b9570 */
/* Ghidra symbol: FUN_017b9570 */


void FUN_017b9570(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_01cf0ef0(param_1);
  if (-1 < *(int *)(param_1 + 0x1c)) {
    plVar1 = (longlong *)FUN_017b9690(param_1);
    (**(code **)(*plVar1 + 0xa8))(plVar1,0);
    lVar2 = FUN_017b9690(param_1);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar2 + 0x18);
    lVar2 = FUN_017b9690(param_1);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 0x1c);
    FUN_017b9730(param_1);
  }
  return;
}

