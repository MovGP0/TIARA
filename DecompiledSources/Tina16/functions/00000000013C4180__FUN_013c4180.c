/* Ghidra address: 013c4180 */
/* Ghidra symbol: FUN_013c4180 */


undefined1 FUN_013c4180(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_a;
  undefined1 local_9;
  
  iVar2 = FUN_006d5120(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  if (iVar2 < 0) {
    lVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) + 0x10);
    lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar2);
  }
  if ((lVar3 != 0) &&
     (iVar2 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x28))(*(longlong **)(lVar3 + 0xd8)),
     0 < iVar2)) {
    lVar3 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x30))(*(longlong **)(lVar3 + 0xd8),0);
    iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x28))(*(longlong **)(lVar3 + 0x80));
    if (0 < iVar2) {
      lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x30))(*(longlong **)(lVar3 + 0x80),0);
      FUN_013c1250(*(undefined8 *)(lVar3 + 0xe0),&local_a,&local_9);
      return local_9;
    }
    return 0;
  }
  return 0;
}

