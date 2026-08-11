/* Ghidra address: 00651da0 */
/* Ghidra symbol: FUN_00651da0 */


void FUN_00651da0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  FUN_004d3040(param_1);
  lVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    pcVar3 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar3)(param_1,uVar2,1);
  }
  FUN_0064c920(param_1);
  return;
}

