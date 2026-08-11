/* Ghidra address: 0046d7f0 */
/* Ghidra symbol: FUN_0046d7f0 */


void FUN_0046d7f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  float *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  
  local_b0 = auStack_d8;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_30 = FUN_0046c970(param_2);
  if (local_30 == 0) {
    FUN_004607e0(0x80070057);
  }
  FUN_0046ca10(param_2);
  FUN_00419260(&local_40,&DAT_0046d7b0,1,(longlong)local_30);
  local_38 = 0;
  iVar9 = local_30;
  if (-1 < local_30 + -1) {
    do {
      iVar8 = local_38 + 1;
      iVar5 = FUN_0046c9e0(param_2,iVar8);
      iVar8 = FUN_0046c9b0(param_2,iVar8);
      *(longlong *)(local_40 + (longlong)local_38 * 8) = (longlong)((iVar5 - iVar8) + 1);
      local_38 = local_38 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_00418e30(param_1,param_3,(longlong)local_30,local_40);
  FUN_00419a40(param_3);
  local_34 = FUN_0046d040(param_3);
  FUN_00419b20(&local_48,*param_1,param_3);
  local_88 = local_48;
  if (local_48 != 0) {
    local_88 = *(longlong *)(local_48 + -8);
  }
  FUN_00419260(&local_50,&DAT_0046ceb0,1,local_88);
  local_90 = local_48;
  if (local_48 != 0) {
    local_90 = *(longlong *)(local_48 + -8);
  }
  iVar9 = (int)local_90;
  local_38 = 0;
  if (-1 < iVar9 + -1) {
    do {
      *(undefined4 *)(local_50 + (longlong)local_38 * 4) =
           *(undefined4 *)(local_48 + (longlong)local_38 * 8);
      local_38 = local_38 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_004192a0(&local_58,local_50,&DAT_0046ceb0);
  do {
    local_98 = local_58;
    if (local_58 != 0) {
      local_98 = *(longlong *)(local_58 + -8);
    }
    local_78 = (float *)FUN_004199a0(*param_1,local_58,local_98 + -1,param_3);
    if (local_78 != (float *)0x0) {
      local_a0 = local_58;
      if (local_58 != 0) {
        local_a0 = *(longlong *)(local_58 + -8);
      }
      FUN_0046cc90(&local_70,param_2,local_58,local_a0 + -1);
      if (local_34 < 0xd) {
        if (local_34 == 0xc) {
          FUN_00461840(local_78,&local_70);
        }
        else if (local_34 < 8) {
          if (local_34 == 7) {
            uVar7 = FUN_00464c60(&local_70);
            *(undefined8 *)local_78 = uVar7;
          }
          else if (local_34 < 5) {
            if (local_34 == 4) {
              dVar1 = (double)FUN_00464c60(&local_70);
              *local_78 = (float)dVar1;
            }
            else if (local_34 == 2) {
              uVar4 = FUN_00462650(&local_70);
              *(undefined2 *)local_78 = uVar4;
            }
            else if (local_34 == 3) {
              fVar6 = (float)FUN_00462650(&local_70);
              *local_78 = fVar6;
            }
          }
          else if (local_34 == 5) {
            uVar7 = FUN_00464c60(&local_70);
            *(undefined8 *)local_78 = uVar7;
          }
          else if (local_34 == 6) {
            uVar7 = FUN_00465930(&local_70);
            *(undefined8 *)local_78 = uVar7;
          }
        }
        else if (local_34 == 8) {
          FUN_00467310(local_78,&local_70);
        }
        else if (local_34 == 9) {
          FUN_00468450(local_78,&local_70);
        }
        else if (local_34 == 10) {
          fVar6 = (float)FUN_004634b0(&local_70);
          *local_78 = fVar6;
        }
        else if (local_34 == 0xb) {
          uVar4 = FUN_004644a0(&local_70);
          *(undefined2 *)local_78 = uVar4;
        }
      }
      else if (local_34 < 0x14) {
        if (local_34 == 0x13) {
          fVar6 = (float)FUN_004634b0(&local_70);
          *local_78 = fVar6;
        }
        else if (local_34 == 0xd) {
          FUN_00468340(local_78,&local_70);
        }
        else if (local_34 == 0x10) {
          uVar2 = FUN_00462650(&local_70);
          *(undefined1 *)local_78 = uVar2;
        }
        else if (local_34 == 0x11) {
          uVar2 = FUN_00462650(&local_70);
          *(undefined1 *)local_78 = uVar2;
        }
        else if (local_34 == 0x12) {
          uVar4 = FUN_00462650(&local_70);
          *(undefined2 *)local_78 = uVar4;
        }
      }
      else if (local_34 == 0x14) {
        uVar7 = FUN_004634b0(&local_70);
        *(undefined8 *)local_78 = uVar7;
      }
      else if (local_34 == 0x15) {
        uVar7 = FUN_00463a50(&local_70);
        *(undefined8 *)local_78 = uVar7;
      }
      else if (local_34 == 0x100) {
        FUN_00466730(local_78,&local_70,0);
      }
      else if (local_34 == 0x102) {
        FUN_00467e90(local_78,&local_70);
      }
    }
    cVar3 = FUN_0046cf00(&local_58,local_50);
  } while (cVar3 != '\0');
  FUN_0046ca40(param_2);
  FUN_00460ba0(&local_70);
  FUN_00417840(&local_58,&DAT_0046ceb0,2);
  FUN_00419430(&local_48,&DAT_00403908);
  FUN_00419430(&local_40,&DAT_0046d7b0);
  return;
}

