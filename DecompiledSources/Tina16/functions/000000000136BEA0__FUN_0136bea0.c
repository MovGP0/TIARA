/* Ghidra address: 0136bea0 */
/* Ghidra symbol: FUN_0136bea0 */


void FUN_0136bea0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  FUN_00411a80(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(undefined1 *)((longlong)plVar1 + 0x8d2) = 0;
  (**(code **)(*plVar1 + 0x420))(plVar1,0);
  *(undefined1 *)((longlong)plVar1 + 0x8d2) = 1;
  FUN_01364f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

