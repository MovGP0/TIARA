/* Ghidra address: 014ac1d0 */
/* Ghidra symbol: FUN_014ac1d0 */


void FUN_014ac1d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    (**(code **)(**(longlong **)(DAT_0210eae0 + 0x1f0) + 8))
              (*(longlong **)(DAT_0210eae0 + 0x1f0),param_1,param_2,param_3,param_4);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x1f0);
    (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3,param_4);
  }
  return;
}

