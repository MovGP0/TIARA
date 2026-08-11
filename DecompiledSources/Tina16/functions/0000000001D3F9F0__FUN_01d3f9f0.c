/* Ghidra address: 01d3f9f0 */
/* Ghidra symbol: FUN_01d3f9f0 */


undefined1 FUN_01d3f9f0(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 local_81;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = *param_1;
  local_50 = param_1[1];
  uStack_48 = param_1[2];
  uStack_40 = param_1[3];
  local_81 = 0;
  cVar2 = FUN_01d3f8f0(&local_58);
  if (cVar2 != '\0') {
    iVar9 = (int)local_50;
    cVar2 = FUN_01d3f9d0(local_50 & 0xffffffff);
    iVar10 = iVar9;
    if (cVar2 != '\0') {
      sVar3 = thunk_FUN_040bd713(0x10);
      iVar10 = iVar9 + 0x20;
      if (((longlong)sVar3 & 0x8000U) != 0) {
        iVar10 = iVar9;
      }
    }
    iVar9 = -1;
    bVar1 = false;
    do {
      iVar9 = iVar9 + 1;
      if (iVar9 < *(int *)(param_2 + 0x10)) {
        FUN_00b94e60(param_2,iVar9);
        uVar5 = FUN_00b94e60(param_2,iVar9);
        cVar2 = FUN_0198a580(uVar5);
        if (cVar2 == '\x04') {
          plVar6 = (longlong *)FUN_00b94e60(param_2,iVar9);
          (**(code **)(*plVar6 + 0x288))(plVar6,&local_60);
          lVar7 = FUN_00b94e60(param_2,iVar9);
          if (*(char *)(lVar7 + 10) != '\0') {
            plVar6 = (longlong *)FUN_00b94e60(param_2,iVar9);
            cVar2 = (**(code **)(*plVar6 + 0x2d8))(plVar6);
            if (cVar2 != '\0') {
              lVar7 = FUN_00b94e60(param_2,iVar9);
              cVar2 = FUN_004113d0(*(undefined8 *)(lVar7 + 0x198),&PTR_FUN_01735c50);
              if (cVar2 != '\0') {
                uVar5 = FUN_00b94e60(param_2,iVar9);
                uVar8 = FUN_0198d430(param_2);
                FUN_01d04a60(uVar5,iVar10,uVar8);
                local_81 = 1;
                break;
              }
            }
          }
          lVar7 = FUN_00b94e60(param_2,iVar9);
          if (*(char *)(lVar7 + 10) != '\0') {
            plVar6 = (longlong *)FUN_00b94e60(param_2,iVar9);
            cVar2 = (**(code **)(*plVar6 + 0x2d8))(plVar6);
            if (cVar2 != '\0') {
              lVar7 = FUN_00b94e60(param_2,iVar9);
              cVar2 = FUN_004113d0(*(undefined8 *)(lVar7 + 0x198),&PTR_FUN_01735760);
              if (cVar2 != '\0') {
                cVar2 = FUN_01d3f990(iVar10);
                if (cVar2 != '\0') {
                  FUN_00416780(&local_78,iVar10);
                  uVar4 = FUN_01aa1170(local_78);
                  uVar5 = FUN_00b94e60(param_2,iVar9);
                  uVar8 = FUN_0198d430(param_2);
                  FUN_01d04a60(uVar5,uVar4,uVar8);
                  local_81 = 1;
                  break;
                }
              }
            }
          }
        }
      }
      else {
        bVar1 = true;
      }
    } while (!bVar1);
  }
  FUN_00414560(&local_78,4);
  return local_81;
}

