/* Ghidra address: 00c025b0 */
/* Ghidra symbol: FUN_00c025b0 */


void FUN_00c025b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  if ((char)param_4 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x610);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
    }
    plVar1 = *(longlong **)(param_1 + 0x5b8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
    }
    plVar1 = *(longlong **)(param_1 + 0x600);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
    }
  }
  FUN_0065aec0(param_1,param_2,param_3,param_4);
  return;
}

