/* Ghidra address: 015f5c70 */
/* Ghidra symbol: FUN_015f5c70 */


undefined1
FUN_015f5c70(undefined8 param_1,longlong param_2,uint param_3,undefined4 *param_4,
            undefined1 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res8 [4];
  undefined1 local_19;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_19 = 0;
  *param_4 = 0;
  *param_5 = 0;
  cVar2 = FUN_01d3f210(param_2);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_2 + 0x1a8);
    cVar2 = FUN_01773f40(lVar1,0x400);
    if (cVar2 == '\0') {
      cVar2 = FUN_01d3f250(param_2);
      if (cVar2 == '\0') {
        lVar4 = FUN_015f3320(local_res8[0],param_2);
        *(undefined1 *)(lVar1 + 0x180) = 1;
        if (lVar4 != 0) {
          FUN_00414ad0(lVar1 + 0x188,*(undefined8 *)(lVar4 + 0x18));
        }
      }
      iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),*(undefined8 *)PTR_PTR_020038b0);
      if ((iVar3 == 0) && ((param_3 & 1) != 0)) {
        local_19 = 1;
        *param_4 = 1;
        cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
        *param_5 = cVar2 == '\0';
      }
      else {
        iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),*(undefined8 *)PTR_PTR_02003ba8);
        if ((iVar3 == 0) && ((param_3 & 2) != 0)) {
          local_19 = 1;
          *param_4 = 2;
          cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
          *param_5 = cVar2 == '\0';
        }
        else {
          iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),*(undefined8 *)PTR_PTR_020021c8);
          if ((iVar3 == 0) && ((param_3 & 4) != 0)) {
            local_19 = 1;
            *param_4 = 4;
            cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
            *param_5 = cVar2 == '\0';
          }
          else {
            iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),*(undefined8 *)PTR_PTR_02003248);
            if ((iVar3 == 0) && ((param_3 & 8) != 0)) {
              local_19 = 1;
              *param_4 = 8;
              cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
              *param_5 = cVar2 == '\0';
            }
            else {
              iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),*(undefined8 *)PTR_PTR_02003b58);
              if ((iVar3 == 0) && ((param_3 & 0x200) != 0)) {
                local_19 = 1;
                *param_4 = 0x200;
                cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
                *param_5 = cVar2 == '\0';
              }
              else {
                iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),*(undefined8 *)PTR_PTR_02004d88)
                ;
                if ((iVar3 == 0) && ((param_3 & 0x400) != 0)) {
                  local_19 = 1;
                  *param_4 = 0x400;
                  cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
                  *param_5 = cVar2 == '\0';
                }
                else {
                  iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),
                                       *(undefined8 *)PTR_PTR_02001da8);
                  if ((iVar3 == 0) && ((param_3 & 0x100) != 0)) {
                    local_19 = 1;
                    *param_4 = 0x100;
                    cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
                    *param_5 = cVar2 == '\0';
                  }
                  else {
                    iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),
                                         *(undefined8 *)PTR_PTR_02003c10);
                    if ((iVar3 == 0) && ((param_3 & 0x800) != 0)) {
                      local_19 = 1;
                      *param_4 = 0x800;
                      cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
                      *param_5 = cVar2 == '\0';
                    }
                    else {
                      iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),
                                           *(undefined8 *)PTR_PTR_020030f8);
                      if ((iVar3 == 0) && ((param_3 & 0x10) != 0)) {
                        local_19 = 1;
                        *param_4 = 0x10;
                      }
                      else {
                        iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),
                                             *(undefined8 *)PTR_PTR_02001550);
                        if ((iVar3 == 0) && ((param_3 & 0x20) != 0)) {
                          local_19 = 1;
                          *param_4 = 0x20;
                        }
                        else {
                          iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),
                                               *(undefined8 *)PTR_PTR_02003ee0);
                          if ((iVar3 == 0) && ((param_3 & 0x40) != 0)) {
                            local_19 = 1;
                            *param_4 = 0x40;
                          }
                          else {
                            iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),
                                                 *(undefined8 *)PTR_PTR_020039a0);
                            if ((iVar3 == 0) && ((param_3 & 0x2000) != 0)) {
                              local_19 = 1;
                              *param_4 = 0x2000;
                              cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
                              *param_5 = cVar2 == '\0';
                            }
                            else {
                              iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),
                                                   *(undefined8 *)PTR_PTR_02005740);
                              if ((iVar3 == 0) && ((param_3 & 0x4000) != 0)) {
                                local_19 = 1;
                                *param_4 = 0x4000;
                                cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
                                *param_5 = cVar2 == '\0';
                              }
                              else {
                                iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x188),
                                                     *(undefined8 *)PTR_PTR_02001638);
                                if ((iVar3 == 0) && ((param_3 & 0x80) != 0)) {
                                  local_19 = 1;
                                  *param_4 = 0x80;
                                }
                                else {
                                  cVar2 = FUN_01773f40(lVar1,0x800);
                                  if ((cVar2 != '\0') && ((param_3 & 0x10000) != 0)) {
                                    local_19 = 1;
                                    *param_4 = 0x10000;
                                    cVar2 = FUN_010b2eb0(*(undefined8 *)(lVar1 + 0x110));
                                    *param_5 = cVar2 == '\0';
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      local_19 = 0;
    }
  }
  FUN_00414480(local_res8);
  return local_19;
}

