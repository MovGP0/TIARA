/* Ghidra address: 015dd900 */
/* Ghidra symbol: FUN_015dd900 */


void FUN_015dd900(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_3,param_4);
  FUN_015dd390(param_1,param_2,plVar1,0,1,0,(longlong)param_4,param_5,param_6);
  return;
}

