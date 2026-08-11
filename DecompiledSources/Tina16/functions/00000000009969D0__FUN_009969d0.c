/* Ghidra address: 009969d0 */
/* Ghidra symbol: FUN_009969d0 */


longlong * FUN_009969d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar3 + 0xf0))(plVar3,*(undefined1 *)(param_1 + 0x30));
  if ((param_2 != (longlong *)0x0) &&
     ((cVar2 = (**(code **)(*param_2 + 0x168))(param_2), cVar2 == '\x01' || ((byte)(cVar2 - 3U) < 5)
      ))) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x178))(param_2);
    while (plVar1 = plVar4, plVar1 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar1 + 0x178))(plVar1);
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x140))(plVar3,plVar1);
        return plVar3;
      }
      cVar2 = (**(code **)(*plVar1 + 0x168))(plVar1);
      if ((((cVar2 != '\x03') && (cVar2 = (**(code **)(*plVar1 + 0x168))(plVar1), cVar2 != '\x04'))
          && (cVar2 = (**(code **)(*plVar1 + 0x168))(plVar1), cVar2 != '\x05')) ||
         (((cVar2 = (**(code **)(*plVar4 + 0x168))(plVar4), cVar2 != '\x03' &&
           (cVar2 = (**(code **)(*plVar4 + 0x168))(plVar4), cVar2 != '\x04')) &&
          (cVar2 = (**(code **)(*plVar4 + 0x168))(plVar4), cVar2 != '\x05')))) {
        (**(code **)(*plVar3 + 0x140))(plVar3,plVar1);
      }
    }
  }
  return plVar3;
}

