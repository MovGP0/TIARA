/* Ghidra address: 014a80c0 */
/* Ghidra symbol: FUN_014a80c0 */


void FUN_014a80c0(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar1 = FUN_0198b770(0,&PTR_FUN_01984d18,DAT_0210eae8,param_1,param_2 & 0xffff,(short)param_3,
                         param_4);
    if (lVar1 != 0) {
      DAT_0210eae0 = lVar1;
      FUN_01d31aa0(*param_1,lVar1);
    }
  }
  else {
    FUN_0198b850(*(longlong *)(*param_1 + 0x48),param_1,param_2,param_3,param_4);
  }
  return;
}

