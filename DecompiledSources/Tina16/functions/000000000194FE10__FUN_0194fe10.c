/* Ghidra address: 0194fe10 */
/* Ghidra symbol: FUN_0194fe10 */


void FUN_0194fe10(longlong *param_1,int param_2,int param_3,undefined8 param_4,longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  plVar1 = (longlong *)param_1[0x1e];
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0xc2) != '\0')) {
    cVar2 = (**(code **)(*plVar1 + 0x200))(plVar1,(double)param_2,(double)param_3);
    if (cVar2 == '\0') {
      FUN_0194fe10(param_1[0x1e],param_2,param_3,param_4,param_5);
    }
  }
  if ((*(char *)(param_5 + 0xb) != '\x01') ||
     (((*(byte *)((longlong)param_1 + 0xc4) & 1) != 0 && (*(char *)(param_5 + 0x1e) == '\0')))) {
    FUN_01952520(param_1,param_5);
    (**(code **)(*param_1 + 0x148))(param_1,param_4,param_5);
    if (param_1[0x28] != 0) {
      FUN_0197e080(param_1[0x28],param_5);
    }
  }
  return;
}

