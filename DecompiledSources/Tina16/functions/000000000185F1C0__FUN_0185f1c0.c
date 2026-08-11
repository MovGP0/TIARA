/* Ghidra address: 0185f1c0 */
/* Ghidra symbol: FUN_0185f1c0 */


uint FUN_0185f1c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (*(char *)((longlong)plVar1 + 0x9054) == '\0') {
    *(int *)((longlong)plVar1 + 0x904c) = *(int *)((longlong)plVar1 + 0x904c) + 1;
    iVar2 = *(int *)((longlong)plVar1 + 0x903c) * *(int *)(*plVar1 + 0xc) + (int)plVar1[0x1207];
    if ((iVar2 < 0) || (*(int *)(*plVar1 + 0x38) <= iVar2)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)(*(longlong *)(*plVar1 + 0x30) + (longlong)iVar2);
    }
    FUN_0185efc0();
  }
  else {
    uVar3 = *(uint *)(plVar1 + 0x120a);
    *(undefined1 *)((longlong)plVar1 + 0x9054) = 0;
  }
  *(uint *)(plVar1 + 0x120a) = uVar3;
  return uVar3;
}

