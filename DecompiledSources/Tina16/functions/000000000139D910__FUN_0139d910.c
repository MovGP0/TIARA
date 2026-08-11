/* Ghidra address: 0139d910 */
/* Ghidra symbol: FUN_0139d910 */


char FUN_0139d910(undefined8 param_1,int *param_2,int *param_3,int *param_4,longlong *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_258 [32];
  int *local_238;
  int *local_230;
  char local_225;
  int local_224;
  longlong *local_220;
  int local_214;
  int *local_210;
  int local_1fc;
  int local_1f8;
  int local_1f4 [52];
  undefined8 local_124;
  undefined8 local_11c;
  int local_114 [52];
  int local_44;
  longlong *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_225 = '\x01';
  local_238 = param_3;
  local_230 = param_4;
  local_210 = param_2;
  if (param_5 == (longlong *)0x0) {
    local_220 = (longlong *)0x0;
    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
    iVar2 = *(int *)(lVar5 + 0x10);
    local_224 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_00b94e60(lVar5,local_224);
        cVar1 = FUN_0139d580(auStack_258,uVar3);
        if (cVar1 != '\0') {
          local_220 = (longlong *)FUN_00b94e60(lVar5,local_224);
          break;
        }
        local_224 = local_224 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_40 = local_220;
  }
  else {
    local_40 = param_5;
  }
  if (local_40 != (longlong *)0x0) {
    if (*(char *)((longlong)local_40 + 0xaa) == '\0') {
      uVar3 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(*local_40 + 0x50))(local_40,uVar3,&local_38);
      local_44 = (**(code **)(*local_40 + 0x1c8))(local_40);
      if (0x19 < local_44) {
        local_44 = 0x19;
      }
      iVar2 = 0;
      if (-1 < local_44 + -1) {
        piVar4 = local_114;
        iVar7 = local_44;
        do {
          cVar1 = (**(code **)(*local_40 + 0x1d8))(local_40,iVar2);
          if (cVar1 == '\0') {
            (**(code **)(*local_40 + 0x1f0))(local_40,iVar2,&local_1f8,&local_1fc);
            *piVar4 = local_1f8;
            piVar4[1] = local_1fc;
          }
          else {
            *piVar4 = -100;
            piVar4[1] = -100;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_00b95880(&local_38,0,0);
      local_220 = (longlong *)0x0;
      lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
      iVar2 = *(int *)(lVar5 + 0x10);
      local_224 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = FUN_00b94e60(lVar5,local_224);
          cVar1 = FUN_0139d5e0(auStack_258,uVar3);
          if (cVar1 != '\0') {
            local_220 = (longlong *)FUN_00b94e60(lVar5,local_224);
            break;
          }
          local_224 = local_224 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (local_220 == (longlong *)0x0) {
        *local_238 = 0;
        *local_230 = 0;
      }
      else {
        local_124 = CONCAT44(local_34,local_38);
        local_11c = CONCAT44(local_2c,local_30);
        piVar4 = local_114;
        piVar6 = local_1f4;
        for (lVar5 = 0x1a; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined8 *)piVar6 = *(undefined8 *)piVar4;
          piVar4 = piVar4 + 2;
          piVar6 = piVar6 + 2;
        }
        local_225 = '\0';
        *local_210 = (int)*(short *)((longlong)local_220 + 0x24);
        if (param_5 == (longlong *)0x0) {
          iVar2 = 0;
          do {
            if (local_225 == '\0') {
              iVar7 = *(int *)(&DAT_01f39b48 + (longlong)(iVar2 * 2 + 1) * 4);
              *local_238 = *(int *)(&DAT_01f39b48 + (longlong)(iVar2 * 2) * 4) * 8;
              *local_230 = iVar7 * 8;
              local_38 = (int)local_124 + *local_238;
              local_30 = (int)local_11c + *local_238;
              local_34 = local_124._4_4_ + *local_230;
              local_2c = local_11c._4_4_ + *local_230;
              if (local_44 - 1U < 0x80000000) {
                piVar4 = local_1f4;
                piVar6 = local_114;
                iVar7 = local_44;
                do {
                  *piVar6 = *piVar4 + *local_238;
                  piVar6[1] = piVar4[1] + *local_230;
                  piVar6 = piVar6 + 2;
                  piVar4 = piVar4 + 2;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              local_220 = (longlong *)0x0;
              lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
              iVar7 = *(int *)(lVar5 + 0x10);
              local_224 = 0;
              if (-1 < iVar7 + -1) {
                do {
                  uVar3 = FUN_00b94e60(lVar5,local_224);
                  cVar1 = FUN_0139d5e0(auStack_258,uVar3);
                  if (cVar1 != '\0') {
                    local_220 = (longlong *)FUN_00b94e60(lVar5,local_224);
                    break;
                  }
                  local_224 = local_224 + 1;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              if (local_220 == (longlong *)0x0) {
                local_225 = '\x01';
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != 0x31);
          if ((local_225 == '\0') && (local_44 == 1)) {
            local_214 = 4;
            do {
              iVar2 = 1 - local_214;
              if (iVar2 <= local_214) {
                iVar7 = (local_214 - iVar2) + 1;
                do {
                  if (local_225 == '\0') {
                    *local_238 = iVar2 << 3;
                    *local_230 = local_214 * -8;
                    local_38 = (int)local_124 + *local_238;
                    local_30 = (int)local_11c + *local_238;
                    local_34 = local_124._4_4_ + *local_230;
                    local_2c = local_11c._4_4_ + *local_230;
                    local_114[0] = local_1f4[0] + *local_238;
                    local_114[1] = local_1f4[1] + *local_230;
                    local_220 = (longlong *)0x0;
                    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
                    iVar8 = *(int *)(lVar5 + 0x10);
                    local_224 = 0;
                    if (-1 < iVar8 + -1) {
                      do {
                        uVar3 = FUN_00b94e60(lVar5,local_224);
                        cVar1 = FUN_0139d5e0(auStack_258,uVar3);
                        if (cVar1 != '\0') {
                          local_220 = (longlong *)FUN_00b94e60(lVar5,local_224);
                          break;
                        }
                        local_224 = local_224 + 1;
                        iVar8 = iVar8 + -1;
                      } while (iVar8 != 0);
                    }
                    if (local_220 == (longlong *)0x0) {
                      local_225 = '\x01';
                    }
                  }
                  if (local_225 == '\0') {
                    *local_238 = local_214 * 8;
                    *local_230 = iVar2 << 3;
                    local_38 = (int)local_124 + *local_238;
                    local_30 = (int)local_11c + *local_238;
                    local_34 = local_124._4_4_ + *local_230;
                    local_2c = local_11c._4_4_ + *local_230;
                    local_114[0] = local_1f4[0] + *local_238;
                    local_114[1] = local_1f4[1] + *local_230;
                    local_220 = (longlong *)0x0;
                    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
                    iVar8 = *(int *)(lVar5 + 0x10);
                    local_224 = 0;
                    if (-1 < iVar8 + -1) {
                      do {
                        uVar3 = FUN_00b94e60(lVar5,local_224);
                        cVar1 = FUN_0139d5e0(auStack_258,uVar3);
                        if (cVar1 != '\0') {
                          local_220 = (longlong *)FUN_00b94e60(lVar5,local_224);
                          break;
                        }
                        local_224 = local_224 + 1;
                        iVar8 = iVar8 + -1;
                      } while (iVar8 != 0);
                    }
                    if (local_220 == (longlong *)0x0) {
                      local_225 = '\x01';
                    }
                  }
                  if (local_225 == '\0') {
                    *local_238 = iVar2 * -8;
                    *local_230 = local_214 * 8;
                    local_38 = (int)local_124 + *local_238;
                    local_30 = (int)local_11c + *local_238;
                    local_34 = local_124._4_4_ + *local_230;
                    local_2c = local_11c._4_4_ + *local_230;
                    local_114[0] = local_1f4[0] + *local_238;
                    local_114[1] = local_1f4[1] + *local_230;
                    local_220 = (longlong *)0x0;
                    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
                    iVar8 = *(int *)(lVar5 + 0x10);
                    local_224 = 0;
                    if (-1 < iVar8 + -1) {
                      do {
                        uVar3 = FUN_00b94e60(lVar5,local_224);
                        cVar1 = FUN_0139d5e0(auStack_258,uVar3);
                        if (cVar1 != '\0') {
                          local_220 = (longlong *)FUN_00b94e60(lVar5,local_224);
                          break;
                        }
                        local_224 = local_224 + 1;
                        iVar8 = iVar8 + -1;
                      } while (iVar8 != 0);
                    }
                    if (local_220 == (longlong *)0x0) {
                      local_225 = '\x01';
                    }
                  }
                  if (local_225 == '\0') {
                    *local_238 = local_214 * -8;
                    *local_230 = iVar2 * -8;
                    local_38 = (int)local_124 + *local_238;
                    local_30 = (int)local_11c + *local_238;
                    local_34 = local_124._4_4_ + *local_230;
                    local_2c = local_11c._4_4_ + *local_230;
                    local_114[0] = local_1f4[0] + *local_238;
                    local_114[1] = local_1f4[1] + *local_230;
                    local_220 = (longlong *)0x0;
                    lVar5 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
                    iVar8 = *(int *)(lVar5 + 0x10);
                    local_224 = 0;
                    if (-1 < iVar8 + -1) {
                      do {
                        uVar3 = FUN_00b94e60(lVar5,local_224);
                        cVar1 = FUN_0139d5e0(auStack_258,uVar3);
                        if (cVar1 != '\0') {
                          local_220 = (longlong *)FUN_00b94e60(lVar5,local_224);
                          break;
                        }
                        local_224 = local_224 + 1;
                        iVar8 = iVar8 + -1;
                      } while (iVar8 != 0);
                    }
                    if (local_220 == (longlong *)0x0) {
                      local_225 = '\x01';
                    }
                  }
                  iVar2 = iVar2 + 1;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              local_214 = local_214 + 1;
            } while (local_225 == '\0');
          }
        }
      }
    }
    else {
      local_225 = '\x01';
    }
  }
  return local_225;
}

