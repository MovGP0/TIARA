/* Ghidra address: 009965e0 */
/* Ghidra symbol: FUN_009965e0 */


longlong * FUN_009965e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar2 + 0xf0))(plVar2,*(undefined1 *)(param_1 + 0x30));
  if (param_2 == (longlong *)0x0) {
    return plVar2;
  }
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      lVar3 = (**(code **)(*param_2 + 0x2d0))(param_2);
      goto LAB_0099666b;
    }
    if (4 < (byte)(cVar1 - 3U)) {
      if (cVar1 == '\v') {
        lVar3 = (**(code **)(*param_2 + 0x2b8))(param_2);
      }
      else {
        lVar3 = 0;
      }
      goto LAB_0099666b;
    }
  }
  lVar3 = (**(code **)(*param_2 + 0x170))(param_2);
LAB_0099666b:
  if (lVar3 != 0) {
    (**(code **)(*plVar2 + 0x140))(plVar2,lVar3);
  }
  return plVar2;
}

