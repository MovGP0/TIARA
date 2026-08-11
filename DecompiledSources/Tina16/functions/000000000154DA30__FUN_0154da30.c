/* Ghidra address: 0154da30 */
/* Ghidra symbol: FUN_0154da30 */


void FUN_0154da30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar7 = -1;
  bVar2 = false;
  lVar1 = *(longlong *)(param_1 + 0x748);
  do {
    iVar7 = iVar7 + 1;
    if (iVar7 < *(int *)(lVar1 + 0x10)) {
      uVar5 = FUN_00b94e60(lVar1,iVar7);
      cVar3 = FUN_0198a580(uVar5);
      if (cVar3 == '\x04') {
        plVar6 = (longlong *)FUN_00b94e60(lVar1,iVar7);
        uVar4 = (**(code **)(*plVar6 + 0x210))(plVar6,0);
        uVar5 = FUN_00b94e60(lVar1,iVar7);
        cVar3 = FUN_0154cff0(param_1,uVar5);
        if (cVar3 != '\0') {
          uVar5 = FUN_01571b80(&DAT_0156ee68,1,uVar4);
          (**(code **)(**(longlong **)(param_1 + 0x978) + 0x50))
                    (*(longlong **)(param_1 + 0x978),uVar5);
        }
      }
    }
    else {
      bVar2 = true;
    }
  } while (!bVar2);
  FUN_00414560(&local_40,3);
  return;
}

