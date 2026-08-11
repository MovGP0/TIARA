/* Ghidra address: 010e8f00 */
/* Ghidra symbol: FUN_010e8f00 */


void FUN_010e8f00(longlong param_1,byte param_2,longlong param_3,longlong param_4,undefined8 param_5
                 ,int *param_6,undefined4 param_7,char param_8,char param_9,undefined1 *param_10,
                 longlong *param_11)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 local_48;
  longlong local_38;
  longlong local_30;
  
  local_48 = 0;
  *param_11 = 0;
  if (param_3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (iVar6 < 1) {
    return;
  }
  lVar10 = *(longlong *)(param_1 + 0x50);
  local_38 = 0;
  local_30 = (**(code **)(**(longlong **)(lVar10 + 0xd8) + 0x30))(*(longlong **)(lVar10 + 0xd8),0);
  iVar6 = (**(code **)(**(longlong **)(lVar10 + 0xd8) + 0x28))(*(longlong **)(lVar10 + 0xd8));
  if (iVar6 == 2) {
    local_38 = (**(code **)(**(longlong **)(lVar10 + 0xd8) + 0x30))(*(longlong **)(lVar10 + 0xd8),1)
    ;
  }
  if (param_4 == 0) {
    *param_11 = 0;
  }
  else {
    *(undefined1 *)(param_4 + 0x18) = 1;
    lVar8 = FUN_010e7720(param_1,param_4);
    *param_11 = lVar8;
  }
  if (*param_11 != 0) {
    FUN_010e7820(param_1,*param_11);
    if (param_8 != '\0') {
      (**(code **)(*(longlong *)*param_11 + 0xc0))
                ((longlong *)*param_11,*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x10));
    }
    if (param_9 == '\0') {
      return;
    }
    (**(code **)(*(longlong *)*param_11 + 0x70))
              ((longlong *)*param_11,*(undefined8 *)(param_1 + 0x68));
    return;
  }
  bVar3 = false;
  bVar4 = false;
  lVar8 = FUN_010e7720(param_1,param_5);
  if (lVar8 == 0) goto LAB_010e915e;
  cVar1 = *(char *)(local_30 + 0x58);
  bVar3 = false;
  bVar4 = false;
  if (cVar1 == '\0') {
LAB_010e9066:
    if (*(longlong *)(lVar10 + 0xf0) != 0) {
      iVar6 = FUN_004aeba0(*(undefined8 *)(lVar8 + 0x108),*(undefined8 *)(lVar10 + 0xf0));
      bVar3 = false;
      if (iVar6 != -1) {
        bVar3 = true;
        FUN_010e7ec0(param_1,1);
      }
    }
    if ((*(longlong *)(lVar10 + 0xf8) != 0) &&
       (iVar6 = FUN_004aeba0(*(undefined8 *)(lVar8 + 0x108),*(undefined8 *)(lVar10 + 0xf8)),
       bVar4 = false, iVar6 != -1)) {
      bVar4 = true;
      FUN_010e7ec0(param_1,0);
    }
    lVar8 = FUN_004113f0(lVar8,&PTR_FUN_01aae560);
    uVar7 = FUN_005fd4d0(*(undefined8 *)(lVar8 + 0x60));
    uVar5 = FUN_01a8db90(uVar7);
    *param_6 = uVar5 - 1;
  }
  else if (cVar1 == '\x01') {
    lVar8 = FUN_004113f0(lVar8,&PTR_FUN_01aaff18);
    uVar7 = FUN_005fd4d0(*(undefined8 *)(lVar8 + 0x78));
    uVar5 = FUN_01a8db90(uVar7);
    *param_6 = uVar5 - 1;
    bVar3 = false;
    bVar4 = false;
  }
  else if ((byte)(cVar1 - 5U) < 2) goto LAB_010e9066;
  *param_10 = 1;
  FUN_00f1d350(local_30,param_5);
  if (local_38 != 0) {
    FUN_00f1d350(local_38,param_5);
  }
LAB_010e915e:
  if ((param_4 != 0) &&
     (((*(char *)(local_30 + 0x58) == '\x01' && (0 < *(int *)(param_4 + 0x2c))) ||
      (((cVar1 = *(char *)(local_30 + 0x58), cVar1 == '\0' ||
        ((cVar1 == '\x06' || (cVar1 == '\x05')))) && (1 < *(int *)(param_4 + 0x2c))))))) {
    if (*(char *)(*(longlong *)(param_3 + 8) + 0x434) == '\b') {
      if (param_2 < 6) {
        if (param_2 == 5) {
          uVar9 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_3);
          local_48 = FUN_01cc6f70(&PTR_FUN_01cbc850,1,param_3);
        }
        else if (param_2 < 2) {
          uVar9 = FUN_01cc6f70(&PTR_FUN_01cbc030,1,param_3);
        }
        else if (param_2 == 2) {
          uVar9 = FUN_01cc6f70(&PTR_FUN_010e4d20,1,param_3);
          lVar8 = FUN_004113f0(uVar9,&PTR_FUN_010e4d20);
          *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(param_1 + 0x118);
          *(undefined1 *)(lVar8 + 0x88) = *(undefined1 *)(param_1 + 0x120);
        }
        else {
          if (param_2 != 4) {
            return;
          }
          uVar9 = FUN_01cc6f70(&PTR_FUN_01cbc850,1,param_3);
        }
      }
      else if (param_2 == 6) {
        uVar9 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_3);
      }
      else if (param_2 == 7) {
        uVar9 = FUN_01cc6f70(&PTR_FUN_01cbab10,1,param_3);
      }
      else {
        if (param_2 != 8) {
          return;
        }
        uVar9 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_3);
      }
    }
    else if (param_2 < 7) {
      if (param_2 == 6) {
        uVar9 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_3);
      }
      else if (param_2 < 4) {
        if (param_2 == 3) {
          uVar9 = FUN_01cc6f70(&PTR_FUN_01cb9268,1,param_3);
        }
        else if (param_2 < 2) {
          uVar9 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_3);
        }
        else {
          if (param_2 != 2) {
            return;
          }
          uVar9 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_3);
        }
      }
      else if (param_2 == 4) {
        uVar9 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_3);
      }
      else {
        if (param_2 != 5) {
          return;
        }
        uVar9 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_3);
        local_48 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_3);
      }
    }
    else if (param_2 == 7) {
      uVar9 = FUN_01cc6f70(&PTR_FUN_01cbab10,1,param_3);
    }
    else if (param_2 == 8) {
      uVar9 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_3);
    }
    else if (param_2 == 9) {
      uVar9 = FUN_01cc6f70(&PTR_FUN_01cba688,1,param_3);
    }
    else {
      if (param_2 != 10) {
        return;
      }
      uVar9 = FUN_01cc9f30(&PTR_FUN_01cbae98,1,param_3);
    }
    FUN_00f1c5c0(uVar9,param_3,param_4,param_6,1,0,param_7,&local_30,*(undefined8 *)(param_1 + 0x68)
                 ,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x50),1);
    if (local_38 != 0) {
      FUN_00f1c5c0(local_48,param_3,param_4,param_6,1,0,0,&local_38,*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x50),1);
    }
    if ((*(longlong *)(lVar10 + 0xf0) == 0 || bVar3) && (*(char *)(param_1 + 0xc0) != '\0')) {
      FUN_010e7c50(param_1,1,param_4);
    }
    if ((*(longlong *)(lVar10 + 0xf8) == 0 || bVar4) && (*(char *)(param_1 + 0xc1) != '\0')) {
      FUN_010e7c50(param_1,0,param_4);
    }
    lVar10 = FUN_010e7720(param_1,param_4);
    *param_11 = lVar10;
    if (*param_11 != 0) {
      if (*(char *)(local_30 + 0x58) == '\x01') {
        *param_10 = 1;
      }
      else {
        if ((param_8 != '\0') &&
           ((**(code **)(*(longlong *)*param_11 + 0xc0))
                      ((longlong *)*param_11,*(undefined8 *)(param_1 + 0x68),
                       *(undefined8 *)(param_1 + 0x10)), *(char *)(local_30 + 0x58) == '\x01')) {
          lVar10 = FUN_004113f0(*param_11,&PTR_FUN_01aaff18);
          (**(code **)(**(longlong **)(lVar10 + 0xf0) + 0xc0))
                    (*(longlong **)(lVar10 + 0xf0),*(undefined8 *)(param_1 + 0x68),
                     *(undefined8 *)(param_1 + 0x10));
        }
        if (param_9 != '\0') {
          if (*(char *)(local_30 + 0x58) == '\x01') {
            lVar10 = FUN_004113f0(*param_11,&PTR_FUN_01aaff18);
            (**(code **)(**(longlong **)(lVar10 + 0xf0) + 0x70))
                      (*(longlong **)(lVar10 + 0xf0),*(undefined8 *)(param_1 + 0x68));
          }
          (**(code **)(*(longlong *)*param_11 + 0x70))
                    ((longlong *)*param_11,*(undefined8 *)(param_1 + 0x68));
        }
      }
    }
  }
  return;
}

