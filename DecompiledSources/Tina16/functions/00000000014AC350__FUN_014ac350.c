/* Ghidra address: 014ac350 */
/* Ghidra symbol: FUN_014ac350 */


void FUN_014ac350(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    (**(code **)(**(longlong **)(DAT_0210eae0 + 0x200) + 8))
              (*(longlong **)(DAT_0210eae0 + 0x200),param_1,param_2,param_3,param_4);
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x200);
    (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3,param_4);
  }
  return;
}

