/* Ghidra address: 006fe050 */
/* Ghidra symbol: FUN_006fe050 */


void FUN_006fe050(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_007f9b70(param_1,1);
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else {
    (**(code **)(*plVar1 + -0x40))(plVar1,param_2);
  }
  return;
}

