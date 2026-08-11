/* Ghidra address: 01998ad0 */
/* Ghidra symbol: FUN_01998ad0 */


void FUN_01998ad0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  int local_17c;
  int local_178;
  int local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [264];
  char *local_30;
  
  local_168 = 0;
  local_170 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_140 = 0;
  local_148 = 0;
  local_174 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) + -1;
  do {
    local_174 = local_174 + 1;
    if (local_174 < *(int *)(param_1 + 0x6c)) {
      local_188 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
    }
    plVar2 = local_188;
    sVar5 = (**(code **)(*local_188 + 0xf8))(local_188);
    if (sVar5 == 0x39) {
      if (((char)plVar2[0x34] == '\x02') &&
         (lVar1 = plVar2[0x35], *(longlong *)(lVar1 + 0x108) != 0)) {
        FUN_00416910(local_138,*(undefined8 *)(lVar1 + 0x108),0xff);
        FUN_016cc920(local_138,*(undefined8 *)(lVar1 + 0xd8));
        iVar6 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))();
        local_17c = 0;
        if (-1 < iVar6 + -1) {
          do {
            FUN_004b5390(*(undefined8 *)(lVar1 + 0xd8),&local_140,local_17c);
            FUN_017ff570(plVar2,&local_148);
            local_178 = FUN_01998920(auStack_1a8,local_140,local_148);
            (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x48))
                      (*(longlong **)(lVar1 + 0xd8),local_17c,(longlong)local_178);
            if (local_178 == -2) {
              FUN_01996f80(param_1,0xff,local_174);
              FUN_004b5390(*(undefined8 *)(lVar1 + 0xd8),&local_150,local_17c);
              FUN_00416910(*(longlong *)(param_1 + 0xd0) + 0xf0,local_150,0xff);
              if ((*(char *)(param_1 + 0xe0) == '\x0f') && (*(longlong *)(param_1 + 0xe8) == 0)) {
                uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
                iVar7 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3e0),uVar8);
                if (iVar7 == -1) {
                  uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
                  FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3e0),uVar8);
                }
              }
            }
            local_17c = local_17c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      if ((char)plVar2[0x34] == '\x03') {
        lVar1 = plVar2[0x35];
        if (*(longlong *)(lVar1 + 0x148) != 0) {
          FUN_017ff570(plVar2,&local_158);
          iVar6 = FUN_01998920(auStack_1a8,*(undefined8 *)(lVar1 + 0x148),local_158);
          if (iVar6 == -2) {
            FUN_01996f80(param_1,0xff,local_174);
            FUN_00416910(*(longlong *)(param_1 + 0xd0) + 0xf0,*(undefined8 *)(lVar1 + 0x148),0xff);
            if ((*(char *)(param_1 + 0xe0) == '\x0f') && (*(longlong *)(param_1 + 0xe8) == 0)) {
              uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
              iVar6 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3e0),uVar8);
              if (iVar6 == -1) {
                uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
                FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3e0),uVar8);
              }
            }
          }
        }
        if (*(longlong *)(lVar1 + 0x150) != 0) {
          FUN_017ff570(plVar2,&local_160);
          iVar6 = FUN_01998920(auStack_1a8,*(undefined8 *)(lVar1 + 0x150),local_160);
          if (iVar6 == -2) {
            FUN_01996f80(param_1,0xff,local_174);
            FUN_00416910(*(longlong *)(param_1 + 0xd0) + 0xf0,*(undefined8 *)(lVar1 + 0x150),0xff);
            if ((*(char *)(param_1 + 0xe0) == '\x0f') && (*(longlong *)(param_1 + 0xe8) == 0)) {
              uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
              iVar6 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3e0),uVar8);
              if (iVar6 == -1) {
                uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
                FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3e0),uVar8);
              }
            }
          }
        }
      }
    }
    else {
      iVar6 = FUN_01cfd2d0();
      local_17c = 0;
      if (-1 < iVar6 + -1) {
        do {
          cVar4 = (**(code **)(*plVar2 + 0x2d0))(plVar2,local_17c,&local_30);
          pcVar3 = local_30;
          if (cVar4 == '\t') {
            if (*local_30 == '\0') {
              local_30[0x1f] = -1;
              local_30[0x20] = -1;
            }
            else {
              FUN_004169a0(&local_168,local_30);
              FUN_017ff570(plVar2,&local_170);
              sVar5 = FUN_01998920(auStack_1a8,local_168,local_170);
              *(short *)(pcVar3 + 0x1f) = sVar5;
              if (sVar5 == -2) {
                FUN_01996f80(param_1,0xff,local_174);
                FUN_00414ff0(*(longlong *)(param_1 + 0xd0) + 0xf0,pcVar3);
                if ((*(char *)(param_1 + 0xe0) == '\x0f') && (*(longlong *)(param_1 + 0xe8) == 0)) {
                  uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
                  iVar7 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3e0),uVar8)
                  ;
                  if (iVar7 == -1) {
                    uVar8 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),local_174);
                    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x3e0),uVar8);
                  }
                }
              }
            }
          }
          local_17c = local_17c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  } while (local_174 != *(int *)(param_1 + 0x6c));
  FUN_00414560(&local_170,7);
  return;
}

