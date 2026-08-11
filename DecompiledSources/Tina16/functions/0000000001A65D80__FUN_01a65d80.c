/* Ghidra address: 01a65d80 */
/* Ghidra symbol: FUN_01a65d80 */


void FUN_01a65d80(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar2 = *(longlong **)(lVar1 + 0x10);
      lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,iVar5);
      uVar6 = FUN_01ae5d90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
      FUN_01ae5df0(lVar4,uVar6);
      uVar6 = FUN_01ae5da0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
      FUN_01ae5e00(lVar4,uVar6);
      uVar6 = FUN_01ae5dc0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
      FUN_01ae5e30(lVar4,uVar6);
      uVar6 = FUN_01ae5dd0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
      FUN_01ae5e40(lVar4,uVar6);
      *(undefined4 *)(lVar4 + 0x100) = 0;
      *(undefined4 *)(lVar4 + 0x104) = 0;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
  plVar2 = *(longlong **)(lVar1 + 0xb8);
  if ((char)plVar2[2] != '\0') {
    (**(code **)(*plVar2 + 0x50))(plVar2,0);
  }
  plVar2 = *(longlong **)(lVar1 + 0xc0);
  if ((char)plVar2[2] != '\0') {
    (**(code **)(*plVar2 + 0x50))(plVar2,0);
  }
  plVar2 = *(longlong **)(lVar1 + 200);
  if ((char)plVar2[2] != '\0') {
    (**(code **)(*plVar2 + 0x50))(plVar2,0);
  }
  plVar2 = *(longlong **)(lVar1 + 0xd0);
  if ((char)plVar2[2] != '\0') {
    (**(code **)(*plVar2 + 0x50))(plVar2,0);
  }
  if (*(char *)(lVar1 + 0x108) == '\0') {
    FUN_01acfc60(lVar1);
  }
  else {
    FUN_01acfa60(lVar1);
  }
  FUN_01aceb90(lVar1,1);
  return;
}

