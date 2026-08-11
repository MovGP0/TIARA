/* Ghidra address: 008b8930 */
/* Ghidra symbol: FUN_008b8930 */


void FUN_008b8930(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
  lVar2 = (*pcVar1)(param_1);
  pcVar1 = (code *)FUN_00411550(param_2,0xffffffff);
  lVar3 = (*pcVar1)(param_2);
  if (lVar2 != lVar3) {
    pcVar1 = (code *)FUN_00411550(param_2,0xffffffff);
    plVar4 = (longlong *)(*pcVar1)(param_2);
    if (plVar4 != param_1) {
      (**(code **)(*param_1 + 200))(param_1,&PTR_FUN_008b4290);
    }
  }
  return;
}

