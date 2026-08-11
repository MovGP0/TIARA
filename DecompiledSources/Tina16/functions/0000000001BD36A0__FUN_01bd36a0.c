/* Ghidra address: 01bd36a0 */
/* Ghidra symbol: FUN_01bd36a0 */


void FUN_01bd36a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  FUN_00651da0(param_1);
  lVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    pcVar3 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar3)(param_1,uVar2,1);
  }
  return;
}

