/* Ghidra address: 01bfd0b0 */
/* Ghidra symbol: FUN_01bfd0b0 */


void FUN_01bfd0b0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  FUN_01c07c30(param_1);
  lVar1 = FUN_01bfc680(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_01bfc680(param_1);
    (**(code **)(*plVar2 + 0x260))(plVar2);
    uVar3 = FUN_01bfc680(param_1);
    lVar1 = FUN_01c07120(uVar3);
    if (lVar1 != 0) {
      uVar3 = FUN_01bfc680(param_1);
      uVar3 = FUN_01c07120(uVar3);
      pcVar4 = (code *)FUN_00411550(uVar3,0xffce);
      (*pcVar4)(uVar3);
    }
  }
  return;
}

