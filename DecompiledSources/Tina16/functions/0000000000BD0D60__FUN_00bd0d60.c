/* Ghidra address: 00bd0d60 */
/* Ghidra symbol: FUN_00bd0d60 */


void FUN_00bd0d60(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bce548);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00bd0fa0(param_1);
    iVar5 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        plVar2 = (longlong *)FUN_00410e60(&PTR_FUN_00bce150,1);
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x18),iVar4);
        (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),plVar2);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  }
  return;
}

