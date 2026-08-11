/* Ghidra address: 01abdc90 */
/* Ghidra symbol: FUN_01abdc90 */


void FUN_01abdc90(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong local_40 [2];
  
  if (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) == 0) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
    local_40[0] = 0;
    cVar1 = FUN_01acff30(lVar5,local_40);
    if (cVar1 == '\x02') {
      for (iVar6 = 0; iVar6 < *(int *)(local_40[0] + 0x10); iVar6 = iVar6 + 1) {
        uVar3 = FUN_004aeac0(local_40[0],iVar6);
        cVar1 = FUN_004113d0(uVar3,param_1);
        if (cVar1 != '\0') break;
      }
      if (iVar6 < *(int *)(local_40[0] + 0x10)) {
        uVar3 = FUN_004aeac0(local_40[0],iVar6);
        *param_2 = uVar3;
      }
      else {
        *param_2 = 0;
      }
    }
    else {
      *param_2 = 0;
    }
    FUN_00410f20(local_40[0]);
    iVar6 = -1;
    do {
      iVar6 = iVar6 + 1;
      iVar7 = 0;
      while( true ) {
        lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                          (*(longlong **)(lVar5 + 0xd8),iVar6);
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
        if (iVar2 <= iVar7) break;
        lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                          (*(longlong **)(lVar5 + 0xd8),iVar6);
        uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x30))
                          (*(longlong **)(lVar4 + 0x80),iVar7);
        cVar1 = FUN_004113d0(uVar3,param_1);
        if (cVar1 != '\0') break;
        iVar7 = iVar7 + 1;
      }
      iVar2 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x28))(*(longlong **)(lVar5 + 0xd8));
      if (iVar2 + -1 <= iVar6) break;
      lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                        (*(longlong **)(lVar5 + 0xd8),iVar6);
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
    } while (iVar2 <= iVar7);
    lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))(*(longlong **)(lVar5 + 0xd8),iVar6);
    iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
    if (iVar7 < iVar2) {
      lVar5 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                        (*(longlong **)(lVar5 + 0xd8),iVar6);
      uVar3 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                        (*(longlong **)(lVar5 + 0x80),iVar7);
      *param_3 = uVar3;
    }
    else {
      *param_3 = 0;
    }
  }
  return;
}

