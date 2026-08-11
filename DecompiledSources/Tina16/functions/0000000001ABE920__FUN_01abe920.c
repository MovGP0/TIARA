/* Ghidra address: 01abe920 */
/* Ghidra symbol: FUN_01abe920 */


bool FUN_01abe920(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  *param_3 = 0;
  plVar2 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_1);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2,0);
  cVar1 = FUN_01abe710(param_2,plVar2,0,param_3);
  FUN_00410f20(plVar2);
  return cVar1 != '\0';
}

