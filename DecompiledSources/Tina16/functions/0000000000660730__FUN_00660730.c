/* Ghidra address: 00660730 */
/* Ghidra symbol: FUN_00660730 */


ulonglong FUN_00660730(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint local_38;
  uint local_34;
  
  lVar1 = param_1;
  while (lVar4 = lVar1, lVar4 != *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x90)) {
    lVar1 = *(longlong *)(lVar4 + 0x28);
    if ((*(char *)(lVar1 + 0x20) == param_2) && (*(longlong *)(lVar4 + 0x30) != 0)) {
      uVar3 = FUN_00660cd0(*(undefined8 *)(lVar4 + 0x30));
      return uVar3;
    }
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x28);
  (**(code **)(*plVar2 + 0xe0))(plVar2,&local_38);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x28);
  (**(code **)(*plVar2 + 0x1a8))(plVar2,&local_38);
  if (param_2 == '\x01') {
    return (ulonglong)local_34;
  }
  if (param_2 == '\x02') {
    return (ulonglong)local_38;
  }
  return 0;
}

