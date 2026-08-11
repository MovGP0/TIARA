/* Ghidra address: 01bb4cc0 */
/* Ghidra symbol: FUN_01bb4cc0 */


void FUN_01bb4cc0(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong local_res8 [4];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong *local_40 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = (longlong *)0x0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_60 = param_2;
  if (local_res8[0] != 0) {
    local_60 = (longlong *)FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_res8[0]);
  }
  (**(code **)(*local_60 + 0x10))(local_60,local_40,L"Circuit",L"Name",0);
  if (param_3 != '\0') {
    FUN_00416ba0(local_40,&DAT_01bb505c,local_40[0]);
  }
  *PTR_DAT_02002ce0 = 0;
  plVar5 = (longlong *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
  plVar5 = (longlong *)*plVar5;
  if (plVar5 == local_40[0]) {
    bVar9 = true;
  }
  else if ((plVar5 == (longlong *)0x0) || (local_40[0] == (longlong *)0x0)) {
    bVar9 = false;
  }
  else {
    iVar1 = FUN_0043e420(plVar5,local_40[0]);
    bVar9 = iVar1 == 0;
  }
  if (!bVar9) {
    FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_40[0],0,0,0,0,1);
  }
  uVar6 = FUN_01c98770(*(undefined8 *)PTR_DAT_02004e40,local_40[0]);
  if (*PTR_DAT_02002ce0 == '\0') {
    (**(code **)(*local_60 + 0xb0))(local_60,L"Components",plVar3);
    iVar1 = (**(code **)(*plVar3 + 0x28))();
    iVar7 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*plVar4 + 0x90))(plVar4);
        FUN_004b5390(plVar3,local_50,iVar7);
        (**(code **)(*local_60 + 0xb0))(local_60,local_50[0],plVar4);
        iVar2 = (**(code **)(*plVar4 + 0x28))();
        iVar8 = 0;
        if (-1 < iVar2 + -1) {
          do {
            FUN_004b5390(plVar3,&local_58,iVar7);
            FUN_01bb4930(uVar6,local_58,plVar4,iVar8);
            iVar8 = iVar8 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar7 = iVar7 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  *PTR_DAT_02002ce0 = 0;
  if (local_60[1] != 0) {
    FUN_00410f20(local_60);
  }
  FUN_00410f20(plVar3);
  FUN_00410f20(plVar4);
  FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  FUN_00414480(local_res8);
  return;
}

