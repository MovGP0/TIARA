/* Ghidra address: 00651c30 */
/* Ghidra symbol: FUN_00651c30 */


void FUN_00651c30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (param_2 == lVar1) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar2)(param_1,param_2,0);
  }
  return;
}

