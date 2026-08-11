/* Ghidra address: 00996740 */
/* Ghidra symbol: FUN_00996740 */


void FUN_00996740(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = (**(code **)(*param_3 + 0x168))(param_3);
  if ((cVar2 == '\x01') || ((byte)(cVar2 - 3U) < 5)) {
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x178))(param_3);
    while (plVar1 = plVar3, plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar1 + 0x178))(plVar1);
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*param_2 + 0x148))(param_2,plVar1);
        return;
      }
      cVar2 = (**(code **)(*plVar1 + 0x168))(plVar1);
      if ((((cVar2 != '\x03') && (cVar2 = (**(code **)(*plVar1 + 0x168))(plVar1), cVar2 != '\x04'))
          && (cVar2 = (**(code **)(*plVar1 + 0x168))(plVar1), cVar2 != '\x05')) ||
         (((cVar2 = (**(code **)(*plVar3 + 0x168))(plVar3), cVar2 != '\x03' &&
           (cVar2 = (**(code **)(*plVar3 + 0x168))(plVar3), cVar2 != '\x04')) &&
          (cVar2 = (**(code **)(*plVar3 + 0x168))(plVar3), cVar2 != '\x05')))) {
        (**(code **)(*param_2 + 0x148))(param_2,plVar1);
      }
    }
  }
  return;
}

