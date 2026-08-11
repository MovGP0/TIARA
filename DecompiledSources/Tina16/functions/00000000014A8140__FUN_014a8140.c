/* Ghidra address: 014a8140 */
/* Ghidra symbol: FUN_014a8140 */


void FUN_014a8140(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_01cf0560(0,&PTR_FUN_00c54448,param_1,param_2,param_3,param_4);
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(*param_1 + 0x48);
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*DAT_0210eae0 + 0x20))(DAT_0210eae0,lVar2);
    }
    else {
      (**(code **)(*plVar1 + 0x20))(plVar1,lVar2);
    }
  }
  return;
}

