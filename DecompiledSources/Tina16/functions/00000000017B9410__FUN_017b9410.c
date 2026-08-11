/* Ghidra address: 017b9410 */
/* Ghidra symbol: FUN_017b9410 */


bool FUN_017b9410(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_017b96e0(param_1);
  plVar1 = (longlong *)FUN_017b9690(param_1);
  uVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,param_3);
  *(undefined8 *)param_4 = uVar2;
  return *param_4 != -0x2b67;
}

