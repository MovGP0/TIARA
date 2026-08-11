/* Ghidra address: 014ac2d0 */
/* Ghidra symbol: FUN_014ac2d0 */


void FUN_014ac2d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    (**(code **)(**(longlong **)(DAT_0210eae0 + 0x1f8) + 8))
              (*(longlong **)(DAT_0210eae0 + 0x1f8),param_1,param_2,param_3,param_4);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x1f8);
    (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3,param_4);
  }
  return;
}

