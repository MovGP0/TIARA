/* Ghidra address: 01b1f9a0 */
/* Ghidra symbol: FUN_01b1f9a0 */


int FUN_01b1f9a0(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined2 *local_res8;
  undefined2 *local_res10;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_3c;
  int local_30;
  int local_2c [3];
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  if ((local_res8 == (undefined2 *)0x0) && (local_res10 == (undefined2 *)0x0)) {
    local_3c = 0;
  }
  else if (local_res8 == (undefined2 *)0x0) {
    local_3c = -1;
  }
  else if (local_res10 == (undefined2 *)0x0) {
    local_3c = 1;
  }
  else {
    cVar4 = FUN_01b1f690(auStack_78,*local_res8);
    bVar5 = FUN_01b1f690(auStack_78,*local_res10);
    if ((cVar4 == '\0') || (bVar5 != 0)) {
      if ((bVar5 & cVar4 == '\0') == 0) {
        local_2c[0] = 1;
        local_30 = 1;
        do {
          uVar1 = local_res8[(longlong)local_2c[0] + -1];
          uVar2 = local_res10[(longlong)local_30 + -1];
          bVar5 = FUN_01b1f620(auStack_78,uVar1);
          bVar6 = FUN_01b1f620(auStack_78,uVar2);
          if ((bVar5 == 0) && (bVar6 == 0)) {
            bVar5 = FUN_01b1f650(auStack_78,uVar1);
            bVar6 = FUN_01b1f650(auStack_78,uVar2);
            if ((bVar6 & bVar5) == 0) {
              if ((bVar5 != 0) || (bVar6 != 0)) {
                if ((bVar6 & bVar5 == 0) == 0) {
                  if ((bVar5 == 0) || (bVar6 != 0)) goto LAB_01b1fbaa;
                  local_3c = 1;
                }
                else {
                  local_3c = -1;
                }
                goto LAB_01b1fc2f;
              }
              local_3c = FUN_01b1f6c0(auStack_78,uVar1,uVar2);
            }
            else {
              local_3c = FUN_01b1f6c0(auStack_78,uVar1,uVar2);
            }
joined_r0x01b1fb20:
            if (local_3c != 0) goto LAB_01b1fc2f;
          }
          else {
            if ((bVar6 & bVar5) != 0) {
              local_58 = &local_30;
              local_3c = FUN_01b1f7e0(auStack_78,local_res8,local_res10,local_2c);
              goto joined_r0x01b1fb20;
            }
            if (bVar5 != 0) {
              local_3c = -1;
              goto LAB_01b1fc2f;
            }
            if (bVar6 != 0) {
              local_3c = 1;
              goto LAB_01b1fc2f;
            }
          }
LAB_01b1fbaa:
          local_2c[0] = local_2c[0] + 1;
          local_30 = local_30 + 1;
          iVar7 = 0;
          if (local_res8 != (undefined2 *)0x0) {
            iVar7 = *(int *)(local_res8 + -2);
          }
          if (iVar7 < local_2c[0]) {
            iVar7 = 0;
            if (local_res10 != (undefined2 *)0x0) {
              iVar7 = *(int *)(local_res10 + -2);
            }
            bVar3 = iVar7 < local_30;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            local_3c = 0;
            goto LAB_01b1fc2f;
          }
          iVar7 = 0;
          if (local_res8 != (undefined2 *)0x0) {
            iVar7 = *(int *)(local_res8 + -2);
          }
          if (iVar7 < local_2c[0]) {
            local_3c = -1;
            goto LAB_01b1fc2f;
          }
          iVar7 = 0;
          if (local_res10 != (undefined2 *)0x0) {
            iVar7 = *(int *)(local_res10 + -2);
          }
        } while (local_30 <= iVar7);
        local_3c = 1;
      }
      else {
        local_3c = -1;
      }
    }
    else {
      local_3c = 1;
    }
  }
LAB_01b1fc2f:
  FUN_00414560(&local_res8,2);
  return local_3c;
}

