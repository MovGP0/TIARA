/* Ghidra address: 00ea3ca0 */
/* Ghidra symbol: FUN_00ea3ca0 */


undefined8 FUN_00ea3ca0(longlong param_1,undefined8 param_2)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30 [2];
  ushort local_1a;
  int local_18;
  int local_14;
  longlong local_10;
  
  local_30[0] = 0;
  local_10 = 0;
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  local_38 = param_2;
  if (iVar4 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0x18));
    local_14 = 0;
LAB_00ea3fd3:
    iVar4 = 0;
    if (local_10 != 0) {
      iVar4 = *(int *)(local_10 + -4);
    }
    if (local_14 < iVar4 + -1) {
      sVar1 = *(short *)(local_10 + (longlong)local_14 * 2);
      if (sVar1 != 0x24) {
        if (sVar1 != 0x5c) {
          local_14 = local_14 + 1;
          goto LAB_00ea3fd3;
        }
        local_18 = local_14 + 1;
        iVar4 = 0;
        if (local_10 != 0) {
          iVar4 = *(int *)(local_10 + -4);
        }
        if (iVar4 <= local_18) {
          FUN_00ea32c0(local_18);
        }
        uVar2 = *(ushort *)(local_10 + (longlong)local_18 * 2);
        if (uVar2 < 0x5d) {
          if (uVar2 == 0x5c) {
LAB_00ea3dff:
            FUN_00416e20(&local_10,local_14 + 1,1);
            local_14 = local_14 + 1;
            goto LAB_00ea3fd3;
          }
          if (uVar2 < 0x4a) {
            if (uVar2 != 0x49) {
              if (uVar2 == 0x24) goto LAB_00ea3dff;
              if (uVar2 != 0x46) goto LAB_00ea3f5b;
            }
          }
          else if ((uVar2 != 0x4c) && (uVar2 != 0x55)) goto LAB_00ea3f5b;
        }
        else if (uVar2 < 0x6a) {
          if ((uVar2 != 0x69) && (uVar2 != 0x66)) {
            if (uVar2 == 0x67) {
              iVar4 = 0;
              if (local_10 != 0) {
                iVar4 = *(int *)(local_10 + -4);
              }
              if (((local_18 < iVar4 + -2) &&
                  (*(short *)(local_10 + (longlong)(local_18 + 1) * 2) == 0x3c)) &&
                 (cVar3 = FUN_00ea3260(*(undefined2 *)(local_10 + (longlong)(local_18 + 2) * 2)),
                 cVar3 != '\0')) {
                local_18 = local_18 + 3;
                while( true ) {
                  iVar4 = 0;
                  if (local_10 != 0) {
                    iVar4 = *(int *)(local_10 + -4);
                  }
                  if ((iVar4 + -1 < local_18) ||
                     (cVar3 = FUN_00ea3260(*(undefined2 *)(local_10 + (longlong)local_18 * 2)),
                     cVar3 == '\0')) break;
                  local_18 = local_18 + 1;
                }
                iVar4 = 0;
                if (local_10 != 0) {
                  iVar4 = *(int *)(local_10 + -4);
                }
                if ((iVar4 + -1 < local_18) ||
                   (*(short *)(local_10 + (longlong)local_18 * 2) != 0x3e)) {
                  local_14 = local_18;
                }
                else {
                  FUN_00416dc0(local_30,local_10,local_14 + 4,(local_18 - local_14) + -3);
                  iVar4 = FUN_00ea43e0(param_1,local_30[0]);
                  local_18 = local_18 + 1;
                  local_1a = 0;
                  if (iVar4 < 1) {
                    FUN_00416e20(&local_10,local_14 + 1,local_18 - local_14);
                  }
                  else {
                    FUN_00ea34e0(auStack_58,iVar4);
                  }
                }
              }
              else {
                local_14 = local_14 + 2;
              }
            }
            else {
LAB_00ea3f5b:
              local_1a = 0;
              FUN_00ea36f0(auStack_58,0,0);
            }
            goto LAB_00ea3fd3;
          }
        }
        else if ((uVar2 != 0x6c) && (uVar2 != 0x75)) goto LAB_00ea3f5b;
        local_18 = local_18 + 1;
        local_1a = uVar2;
        FUN_00ea36f0(auStack_58,1,0);
        goto LAB_00ea3fd3;
      }
      local_18 = local_14 + 1;
      iVar4 = 0;
      if (local_10 != 0) {
        iVar4 = *(int *)(local_10 + -4);
      }
      if (iVar4 <= local_18) {
        FUN_00ea32c0(local_18);
      }
      if (*(short *)(local_10 + (longlong)local_18 * 2) == 0x24) {
        FUN_00416e20(&local_10,local_18 + 1,1);
        local_14 = local_14 + 1;
      }
      else {
        local_1a = 0;
        FUN_00ea36f0(auStack_58,0,1);
      }
      goto LAB_00ea3fd3;
    }
    FUN_00414ad0(local_38,local_10);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_10);
  return local_38;
}

