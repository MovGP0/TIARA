/* Ghidra address: 00696470 */
/* Ghidra symbol: FUN_00696470 */


void FUN_00696470(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_2c [19];
  char local_19;
  
  local_19 = '\0';
  FUN_00693a30(param_1,local_2c);
  iVar2 = FUN_004230c0(local_2c);
  if (iVar2 == 0) {
    if (*param_2 == 0x83) {
      FUN_00694760(auStack_68,param_2);
    }
    else if (*param_2 == 0x85) {
      FUN_00694510(param_1);
      local_19 = '\x01';
    }
  }
  else {
    iVar2 = *param_2;
    if (iVar2 < 0x114) {
      if (iVar2 == 0x113) {
        FUN_00695f00(auStack_68,param_2);
      }
      else {
        if (iVar2 < 0xa1) {
          if (iVar2 != 0xa0) {
            if (iVar2 - 0x7cU < 2) {
              if (*(char *)(param_1 + 99) != '\0') {
                param_2[6] = 0;
                param_2[7] = 0;
                local_19 = '\x01';
              }
            }
            else if (iVar2 == 0x83) {
              FUN_00694760(auStack_68,param_2);
            }
            else if (iVar2 == 0x84) {
              cVar1 = FUN_006927d0(param_1);
              if (cVar1 == '\x01') {
                param_2[6] = 1;
                param_2[7] = 0;
                local_19 = '\x01';
              }
            }
            else if (iVar2 == 0x85) {
              FUN_00694510(param_1);
              FUN_00693fa0(param_1,0);
              local_19 = '\x01';
            }
            goto LAB_00696797;
          }
        }
        else {
          if (iVar2 == 0xa1) {
            FUN_00695cb0(auStack_68,param_2);
            goto LAB_00696797;
          }
          if (iVar2 != 0xa2) {
            if (iVar2 == 0xa3) {
              FUN_00694a90(auStack_68,param_2);
            }
            else if (iVar2 - 0x100U < 2) {
              local_48 = *(undefined8 *)(param_2 + 4);
              uVar3 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x80),
                                         *(undefined8 *)(param_1 + 0x68),iVar2,
                                         *(undefined8 *)(param_2 + 2));
              *(undefined8 *)(param_2 + 6) = uVar3;
              FUN_00693fa0(param_1,0);
              local_19 = '\x01';
            }
            goto LAB_00696797;
          }
        }
        local_19 = '\x01';
      }
    }
    else if (iVar2 < 0x203) {
      if (iVar2 == 0x202) {
        FUN_00695b30(auStack_68,param_2);
      }
      else if (iVar2 == 0x128) {
        local_19 = '\x01';
      }
      else if (iVar2 == 0x197) {
        cVar1 = FUN_006926e0(param_1);
        if (cVar1 != '\0') {
          local_48 = *(undefined8 *)(param_2 + 4);
          uVar3 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x68)
                                     ,*param_2,*(undefined8 *)(param_2 + 2));
          *(undefined8 *)(param_2 + 6) = uVar3;
          FUN_00693fa0(param_1,0);
          local_19 = '\x01';
        }
      }
      else if (iVar2 == 0x200) {
        FUN_006953d0(auStack_68,param_2);
      }
      else if (iVar2 == 0x201) {
        FUN_00694d40(auStack_68,param_2);
      }
    }
    else if (iVar2 == 0x20a) {
      FUN_00694990(auStack_68,param_2);
    }
    else if (iVar2 - 0x2a2U < 2) {
      cVar1 = FUN_006927d0(param_1);
      if (cVar1 == '\x01') {
        *(undefined1 *)(param_1 + 0x60) = 0x1a;
        *(undefined1 *)(param_1 + 0x61) = 2;
        *(undefined1 *)(param_1 + 0x62) = 6;
        FUN_00693fa0(param_1,0);
      }
    }
    else if (iVar2 == 0x317) {
      FUN_00695d30(auStack_68,param_2);
    }
  }
LAB_00696797:
  if (local_19 == '\0') {
    local_48 = *(undefined8 *)(param_2 + 4);
    uVar3 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x68),
                               *param_2,*(undefined8 *)(param_2 + 2));
    *(undefined8 *)(param_2 + 6) = uVar3;
  }
  return;
}

