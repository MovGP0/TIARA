/* Ghidra address: 00995f40 */
/* Ghidra symbol: FUN_00995f40 */


longlong * FUN_00995f40(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar2 + 0xf0))(plVar2,*(undefined1 *)(param_1 + 0x30));
  if ((param_2 != (longlong *)0x0) &&
     ((cVar1 = (**(code **)(*param_2 + 0x168))(param_2), cVar1 == '\x01' || ((byte)(cVar1 - 3U) < 5)
      ))) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x158))(param_2);
    while (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
      if ((((cVar1 != '\x03') && (cVar1 = (**(code **)(*param_2 + 0x168))(param_2), cVar1 != '\x04')
           ) && (cVar1 = (**(code **)(*param_2 + 0x168))(param_2), cVar1 != '\x05')) ||
         (((cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3), cVar1 != '\x03' &&
           (cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3), cVar1 != '\x04')) &&
          (cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3), cVar1 != '\x05')))) {
        (**(code **)(*plVar2 + 0x148))(plVar2,plVar3);
      }
      (**(code **)(*plVar3 + 0x158))(plVar3);
      param_2 = plVar3;
    }
  }
  return plVar2;
}

