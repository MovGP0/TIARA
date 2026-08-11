/* Ghidra address: 00b088a0 */
/* Ghidra symbol: FUN_00b088a0 */


undefined4 FUN_00b088a0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 unaff_ESI;
  
  (**(code **)(*param_1 + 8))(param_1,(int)param_1[3]);
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    unaff_ESI = (**(code **)(*plVar1 + 0x2d0))(plVar1);
    FUN_00410f20(param_1[6]);
  }
  return unaff_ESI;
}

