/* Ghidra address: 01997220 */
/* Ghidra symbol: FUN_01997220 */


void FUN_01997220(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int local_74;
  int local_70;
  int local_54;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_30;
  uint local_2c;
  
  local_48 = 0;
  local_40[0] = 0;
  local_74 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  while (local_74 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
    uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
    cVar2 = FUN_0198a580(uVar5);
    if (cVar2 != '\x01') break;
    local_74 = local_74 + 1;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  while (local_74 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
    uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
    cVar2 = FUN_0198a580(uVar5);
    if (cVar2 != '\x02') break;
    local_74 = local_74 + 1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0;
  while (local_74 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
    uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
    cVar2 = FUN_0198a580(uVar5);
    if (cVar2 != '\x03') break;
    local_74 = local_74 + 1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58);
  *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 900) = 0;
  while (local_74 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
    uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
    cVar2 = FUN_0198a580(uVar5);
    if (cVar2 != '\x04') break;
    lVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
    if (*(char *)(lVar8 + 0x540) != '\0') {
      uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3f0),uVar5);
    }
    local_74 = local_74 + 1;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 900);
    *piVar1 = *piVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  while (local_74 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
    uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
    cVar2 = FUN_0198a580(uVar5);
    if (cVar2 != '\x05') break;
    local_74 = local_74 + 1;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x398) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x54) = 0;
  while (local_74 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
    uVar5 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
    cVar2 = FUN_0198a580(uVar5);
    if (cVar2 != '\x06') break;
    local_74 = local_74 + 1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  if (*(int *)(*(longlong *)(param_1 + 0xd0) + 900) == 0) {
    FUN_01996fb0(param_1,1,0xffffffff);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x54);
    local_74 = 0;
    if (-1 < iVar10 + -1) {
      do {
        plVar6 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_74);
        iVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6);
        local_70 = 0;
        iVar11 = iVar3;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*plVar6 + 0x208))
                      (plVar6,local_70,0xffffffff,*(undefined8 *)(param_1 + 0x100));
            (**(code **)(*plVar6 + 0x1f0))(plVar6,local_70,&local_2c,&local_30);
            uVar5 = FUN_0198d420(*(undefined8 *)(param_1 + 0xd0),local_74);
            cVar2 = FUN_0198a580(uVar5);
            if (cVar2 != '\x06') {
              cVar2 = FUN_019921c0(*(undefined8 *)(param_1 + 0xd0),local_2c);
              if (cVar2 != '\0') {
                cVar2 = (**(code **)(*plVar6 + 0x1e0))(plVar6,local_70);
                if (cVar2 == '\0') {
                  local_2c = local_2c + 1;
                }
              }
            }
            if (*(int *)(param_1 + 0x5c) <= local_74) {
              FUN_01996b80(param_1 + 0x78,local_74,local_70,local_2c,local_30);
            }
            local_70 = local_70 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        iVar11 = (**(code **)(*plVar6 + 0x1d0))();
        local_70 = 0;
        if (-1 < iVar11 + -1) {
          do {
            plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
            lVar8 = FUN_01997160(param_1,local_74,iVar3 + local_70);
            if ((lVar8 != 0) && (*(char *)(lVar8 + 0x2d8) != '\0')) {
              FUN_004169a0(local_40,lVar8 + 0x2d8);
              FUN_017c3f60(local_40[0],plVar7);
            }
            uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
            iVar4 = (**(code **)(*plVar7 + 0x28))();
            local_54 = 0;
            if (-1 < iVar4 + -1) {
              do {
                (**(code **)(*plVar7 + 0x18))(plVar7,&local_48,local_54);
                uVar9 = FUN_01997080(param_1,local_48);
                FUN_004ae7e0(uVar5,uVar9);
                local_54 = local_54 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            (**(code **)(*plVar6 + 0x248))(plVar6,local_70);
            FUN_00410f20(uVar5);
            FUN_00410f20(plVar7);
            local_70 = local_70 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        local_74 = local_74 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

