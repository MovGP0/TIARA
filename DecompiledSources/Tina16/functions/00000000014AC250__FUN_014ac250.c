/* Ghidra address: 014ac250 */
/* Ghidra symbol: FUN_014ac250 */


void FUN_014ac250(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    (**(code **)(**(longlong **)(DAT_0210eae0 + 0x208) + 8))
              (*(longlong **)(DAT_0210eae0 + 0x208),param_1,param_2,param_3,param_4);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x208);
    (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3,param_4);
  }
  return;
}

