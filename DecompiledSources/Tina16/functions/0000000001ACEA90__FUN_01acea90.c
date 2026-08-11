/* Ghidra address: 01acea90 */
/* Ghidra symbol: FUN_01acea90 */


void FUN_01acea90(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  bVar2 = false;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar6 = 1;
  if (0 < iVar4) {
    do {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar6 + -1);
      uVar5 = FUN_004113f0(uVar5,&DAT_01cdd500);
      if ((bVar2) || (cVar3 = FUN_01cdff10(uVar5), cVar3 != '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) + 0x10);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (bVar2) {
    FUN_01ad6320(param_1,0,0,1);
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) + 0x10);
  iVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if ((bool)(bVar2 & iVar4 == iVar6)) {
    FUN_01ad9580(param_1,0,0,0);
  }
  return;
}

