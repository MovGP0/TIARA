/* Ghidra address: 012d0890 */
/* Ghidra symbol: FUN_012d0890 */


char FUN_012d0890(longlong param_1,longlong param_2,wchar_t *param_3,char param_4,undefined1 param_5
                 )

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  wchar_t *local_70;
  char local_61;
  longlong local_60;
  longlong local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  
  local_50[0] = 0;
  local_40[0] = 0;
  local_61 = '\0';
  local_70 = param_3;
  if (*(char *)(*(longlong *)(param_2 + 8) + 0x434) == *(char *)(*(longlong *)(param_3 + 4) + 0x434)
     ) {
    local_58 = *(longlong *)(param_2 + 8);
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar2 = FUN_012d0200(auStack_b8);
      lVar3 = FUN_01d347d0(local_58,uVar2);
      FUN_01cc0ae0(lVar3,local_50);
      lVar4 = FUN_01cc5ec0(local_70,local_50[0],1);
    }
    else {
      if (param_4 == '\x06') {
        FUN_004169a0(local_40,*(longlong *)(param_1 + 0x20) + 0x10c);
      }
      else if (param_4 == '\b') {
        FUN_004169a0(local_40,*(longlong *)(param_1 + 0x20) + 0x30c);
      }
      else {
        FUN_004169a0(local_40,*(longlong *)(param_1 + 0x20) + 0x50c);
      }
      lVar3 = FUN_01cc5ec0(param_2,local_40[0],1);
      if (param_4 == '\x06') {
        FUN_004169a0(local_40,*(longlong *)(param_1 + 0x20) + 0xc);
      }
      else if (param_4 == '\b') {
        FUN_004169a0(local_40,*(longlong *)(param_1 + 0x20) + 0x20c);
      }
      else {
        FUN_004169a0(local_40,*(longlong *)(param_1 + 0x20) + 0x40c);
      }
      lVar4 = FUN_01cc5ec0(local_70,local_40[0],1);
    }
    if ((((lVar4 == 0) || (lVar3 == 0)) || (*(char *)(lVar3 + 0x18) != *(char *)(lVar4 + 0x18))) ||
       (*(char *)(lVar3 + 0x2b) != *(char *)(lVar4 + 0x2b))) {
      local_61 = '\0';
    }
    else {
      local_61 = '\x01';
    }
    if (local_61 == '\0') {
      if (lVar4 == 0) {
        local_98 = L"Reference curve not found";
        local_90 = 0;
        FUN_012d2550(param_1,8,param_4,param_5);
      }
      else if (lVar3 == 0) {
        local_98 = L"Test curve not found";
        local_90 = 0;
        FUN_012d2550(param_1,8,param_4,param_5);
      }
      else {
        local_98 = L"No matching output in the reference file";
        local_90 = 0;
        FUN_012d2550(param_1,8,param_4,param_5);
      }
    }
    else {
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01cb38a0);
      if (cVar1 != '\0') {
        if (param_4 == '\x06') {
          uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x610);
        }
        else if (param_4 == '\b') {
          uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x618);
        }
        else {
          uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x620);
        }
        local_98 = local_70;
        local_90 = *(undefined1 *)(local_58 + 0x434);
        local_80 = param_5;
        local_88 = uVar9;
        local_61 = FUN_012d0f30(param_1,lVar3,lVar4,param_2);
        if (*(char *)(param_1 + 0x10) == '\0') {
          local_60 = FUN_012d0750(auStack_b8,param_2,lVar3);
          if (0 < *(int *)(local_60 + 0x10)) {
            lVar3 = FUN_012d0750(auStack_b8,local_70,lVar4);
            iVar8 = *(int *)(local_60 + 0x10);
            if ((iVar8 == *(int *)(lVar3 + 0x10)) && (iVar7 = 0, -1 < iVar8 + -1)) {
              do {
                if (local_61 == '\0') {
LAB_012d0bff:
                  local_61 = '\0';
                }
                else {
                  uVar5 = FUN_004aeac0(local_60,iVar7);
                  uVar6 = FUN_004aeac0(lVar3,iVar7);
                  local_98 = local_70;
                  local_90 = *(undefined1 *)(local_58 + 0x434);
                  local_80 = param_5;
                  local_88 = uVar9;
                  cVar1 = FUN_012d0f30(param_1,uVar5,uVar6,param_2);
                  if (cVar1 == '\0') goto LAB_012d0bff;
                  local_61 = '\x01';
                }
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            FUN_00410f20(lVar3);
          }
          FUN_00410f20(local_60);
        }
      }
    }
  }
  else {
    local_98 = L"Result types are different";
    local_90 = 0;
    FUN_012d2550(param_1,8,param_4,param_5);
  }
  FUN_00414480(local_50);
  FUN_00414480(local_40);
  return local_61;
}

