/* Ghidra address: 00b583a0 */
/* Ghidra symbol: FUN_00b583a0 */


void FUN_00b583a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),param_2);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_00b58320(param_1,param_2);
    (**(code **)(*plVar2 + -0x20))(plVar2,1);
  }
  FUN_004ae870(*(undefined8 *)(param_1 + 8),param_2);
  return;
}

