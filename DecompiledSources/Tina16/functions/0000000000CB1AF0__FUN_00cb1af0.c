/* Ghidra address: 00cb1af0 */
/* Ghidra symbol: FUN_00cb1af0 */


void FUN_00cb1af0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)param_1[0x22];
  if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1), cVar2 != '\0'))
  {
    (**(code **)(*param_1 + 0xb8))(param_1,param_2,plVar1[0x1e],(short)plVar1[0x20],0);
    FUN_00cb1af0(plVar1,param_2,param_3,param_4,param_5);
    return;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_3,param_4,param_5);
  return;
}

