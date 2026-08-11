/* Ghidra address: 011014e0 */
/* Ghidra symbol: FUN_011014e0 */


void FUN_011014e0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  FUN_00411a80(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + -0x20))(plVar1,1);
  }
  FUN_01ab2840(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

