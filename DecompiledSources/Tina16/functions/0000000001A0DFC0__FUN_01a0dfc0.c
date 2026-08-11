/* Ghidra address: 01a0dfc0 */
/* Ghidra symbol: FUN_01a0dfc0 */


undefined1 FUN_01a0dfc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int local_78;
  int local_74;
  bool local_6d;
  int local_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1a8) + 8);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x1a8) + 8);
  local_78 = 0;
  while( true ) {
    uVar9 = FUN_00b94e60(lVar1,local_78);
    cVar5 = FUN_0198a580(uVar9);
    if (cVar5 == '\x04') break;
    local_78 = local_78 + 1;
  }
  local_6c = *(int *)(lVar1 + 0x10);
  do {
    local_6c = local_6c + -1;
    uVar9 = FUN_00b94e60(lVar1,local_6c);
    cVar5 = FUN_0198a580(uVar9);
  } while (cVar5 != '\x04');
  local_74 = 0;
  while( true ) {
    uVar9 = FUN_00b94e60(lVar2,local_74);
    cVar5 = FUN_0198a580(uVar9);
    if (cVar5 == '\x04') break;
    local_74 = local_74 + 1;
  }
  iVar12 = *(int *)(lVar2 + 0x10);
  do {
    iVar12 = iVar12 + -1;
    uVar9 = FUN_00b94e60(lVar2,iVar12);
    cVar5 = FUN_0198a580(uVar9);
  } while (cVar5 != '\x04');
  local_6d = (local_6c - local_78) + 1 == (iVar12 - local_74) + 1;
  if (local_6d) {
    for (; (local_6d & local_78 <= local_6c) != 0; local_78 = local_78 + 1) {
      plVar10 = (longlong *)FUN_00b94e60(lVar1,local_78);
      plVar11 = (longlong *)FUN_00b94e60(lVar2,local_74);
      if ((plVar10 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
        sVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        sVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (sVar6 == sVar7) {
          (**(code **)(*plVar10 + 0x288))(plVar10,local_40);
          (**(code **)(*plVar11 + 0x288))(plVar11,&local_48);
          iVar12 = FUN_00416db0(local_40[0],local_48);
          if (iVar12 != 0) goto LAB_01a0e180;
          bVar3 = true;
        }
        else {
LAB_01a0e180:
          bVar3 = false;
        }
        cVar5 = FUN_01d01970(plVar10);
        if (cVar5 == '\0') {
          cVar5 = FUN_01d04d40(plVar10);
          if (cVar5 == '\0') {
            if ((bVar3) && (cVar5 = FUN_01a0d6d0(param_1,plVar10,plVar11), cVar5 != '\0')) {
              local_6d = true;
            }
            else {
              local_6d = false;
            }
          }
          else if ((char)plVar10[0x34] == '\x02') {
            if ((bVar3) &&
               (iVar12 = FUN_00416db0(*(undefined8 *)(plVar10[0x35] + 0x38),
                                      *(undefined8 *)(plVar11[0x35] + 0x38)), iVar12 == 0)) {
              iVar12 = (**(code **)(*plVar10 + 0x1c8))(plVar10);
              iVar8 = (**(code **)(*plVar11 + 0x1c8))(plVar11);
              if (iVar12 == iVar8) {
                (**(code **)(**(longlong **)(plVar10[0x35] + 0xb0) + 0x38))
                          (*(longlong **)(plVar10[0x35] + 0xb0),&local_60);
                lVar4 = local_60;
                (**(code **)(**(longlong **)(plVar11[0x35] + 0xb0) + 0x38))
                          (*(longlong **)(plVar11[0x35] + 0xb0),&local_68);
                if (lVar4 == local_68) {
                  local_6d = true;
                }
                else if ((lVar4 == 0) || (local_68 == 0)) {
                  local_6d = false;
                }
                else {
                  iVar12 = FUN_0043e420(lVar4,local_68);
                  local_6d = iVar12 == 0;
                }
                goto LAB_01a0e34e;
              }
            }
            local_6d = false;
          }
          else if ((char)plVar10[0x34] == '\x01') {
            if ((bVar3) &&
               (iVar12 = FUN_00416db0(*(undefined8 *)(plVar10[0x35] + 0x38),
                                      *(undefined8 *)(plVar11[0x35] + 0x38)), iVar12 == 0)) {
              iVar12 = (**(code **)(*plVar10 + 0x1c8))(plVar10);
              iVar8 = (**(code **)(*plVar11 + 0x1c8))(plVar11);
              if (iVar12 == iVar8) {
                local_6d = true;
                goto LAB_01a0e34e;
              }
            }
            local_6d = false;
          }
          else {
            local_6d = false;
          }
        }
        else {
          if (bVar3) {
            FUN_01d03640(plVar10,&local_50,*(undefined8 *)PTR_DAT_02001f18);
            FUN_01d03640(plVar11,&local_58,*(undefined8 *)PTR_DAT_02001f18);
            iVar12 = FUN_00416db0(local_50,local_58);
            if (iVar12 == 0) {
              local_6d = true;
              goto LAB_01a0e34e;
            }
          }
          local_6d = false;
        }
      }
LAB_01a0e34e:
      local_74 = local_74 + 1;
    }
    if (local_6d != false) {
      local_6d = (bool)FUN_01a0d430(param_1,param_2,param_3);
    }
  }
  FUN_00414560(&local_68,6);
  return local_6d;
}

