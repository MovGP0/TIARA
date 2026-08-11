/* Ghidra address: 009958d0 */
/* Ghidra symbol: FUN_009958d0 */


longlong * FUN_009958d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar2 + 0xf0))(plVar2,*(undefined1 *)(param_1 + 0x30));
  if (param_2 == (longlong *)0x0) {
    return plVar2;
  }
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x2d0))(param_2);
      goto joined_r0x0099596b;
    }
    if (4 < (byte)(cVar1 - 3U)) {
      if (cVar1 == '\v') {
        plVar3 = (longlong *)(**(code **)(*param_2 + 0x2b8))(param_2);
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      goto joined_r0x0099596b;
    }
  }
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x170))(param_2);
joined_r0x0099596b:
  for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)(**(code **)(*plVar3 + 0x170))(plVar3)) {
    (**(code **)(*plVar2 + 0x140))(plVar2,plVar3);
  }
  return plVar2;
}

