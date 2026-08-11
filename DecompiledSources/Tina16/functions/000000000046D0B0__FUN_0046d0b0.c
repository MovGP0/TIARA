/* Ghidra address: 0046d0b0 */
/* Ghidra symbol: FUN_0046d0b0 */


void FUN_0046d0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float *local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_a0 = auStack_d8;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_00419430(&local_20,&DAT_0046ceb0);
  FUN_00419430(&local_28,&DAT_0046ceb0);
  FUN_00460b80(param_1);
  local_40 = FUN_0046d040(param_3);
  if ((local_40 == 0x100) || (local_44 = local_40, local_40 == 0x102)) {
    local_44 = 8;
  }
  local_48 = FUN_00419a40(param_3);
  if ((local_48 < 2) || (cVar1 = FUN_00419a70(param_2,param_3), cVar1 != '\0')) {
    FUN_0046cfb0(&local_20,param_2,param_3);
    FUN_00419b20(&local_38,param_2,param_3);
    local_78 = local_38;
    if (local_38 != 0) {
      local_78 = *(longlong *)(local_38 + -8);
    }
    FUN_00419260(&local_28,&DAT_0046ceb0,1,local_78);
    local_80 = local_38;
    if (local_38 != 0) {
      local_80 = *(longlong *)(local_38 + -8);
    }
    iVar2 = (int)local_80;
    local_3c = 0;
    if (-1 < iVar2 + -1) {
      do {
        *(undefined4 *)(local_28 + (longlong)local_3c * 4) =
             *(undefined4 *)(local_38 + (longlong)local_3c * 8);
        local_3c = local_3c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004192a0(&local_30,local_28,&DAT_0046ceb0);
    local_88 = local_20;
    if (local_20 != 0) {
      local_88 = *(longlong *)(local_20 + -8);
    }
    FUN_0046c750(&local_b8,local_20,local_88 + -1,(undefined2)local_44);
    FUN_00461840(param_1,&local_b8);
    FUN_0046ca10(param_1);
    do {
      local_90 = local_30;
      if (local_30 != 0) {
        local_90 = *(longlong *)(local_30 + -8);
      }
      local_50 = (float *)FUN_004199a0(param_2,local_30,local_90 + -1,param_3);
      if (local_50 != (float *)0x0) {
        if (local_40 < 0xd) {
          if (local_40 == 0xc) {
            FUN_00461840(&local_68,local_50);
          }
          else if (local_40 < 8) {
            if (local_40 == 7) {
              FUN_00468860(&local_68,*(undefined8 *)local_50);
            }
            else if (local_40 < 5) {
              if (local_40 == 4) {
                FUN_00468860(&local_68,(double)*local_50);
              }
              else if (local_40 == 2) {
                FUN_00468530(&local_68,(longlong)*(short *)local_50,0xfffffffffffffffe);
              }
              else {
                if (local_40 != 3) goto LAB_0046d670;
                FUN_00468530(&local_68,*local_50,0xfffffffffffffffc);
              }
            }
            else if (local_40 == 5) {
              FUN_00468860(&local_68,*(undefined8 *)local_50);
            }
            else if (local_40 == 6) {
              FUN_004688e0(&local_68,*(undefined8 *)local_50);
            }
            else {
LAB_0046d670:
              FUN_00460b80(&local_68);
            }
          }
          else if (local_40 == 8) {
            FUN_004689d0(&local_68,*(undefined8 *)local_50);
          }
          else if (local_40 == 9) {
            FUN_00468a90(&local_68,*(undefined8 *)local_50);
          }
          else if (local_40 == 10) {
            FUN_00468530(&local_68,*local_50,0xfffffffffffffffc);
          }
          else {
            if (local_40 != 0xb) goto LAB_0046d670;
            FUN_00468820(&local_68,*(short *)local_50 != 0);
          }
        }
        else if (local_40 < 0x14) {
          if (local_40 == 0x13) {
            FUN_00468530(&local_68,*local_50,4);
          }
          else if (local_40 == 0xd) {
            FUN_00468a50(&local_68,*(undefined8 *)local_50);
          }
          else if (local_40 == 0x10) {
            FUN_00468530(&local_68,(longlong)*(char *)local_50,0xffffffffffffffff);
          }
          else if (local_40 == 0x11) {
            FUN_00468530(&local_68,*(undefined1 *)local_50,1);
          }
          else {
            if (local_40 != 0x12) goto LAB_0046d670;
            FUN_00468530(&local_68,*(undefined2 *)local_50,2);
          }
        }
        else if (local_40 == 0x14) {
          FUN_00468700(&local_68,*(undefined8 *)local_50);
        }
        else if (local_40 == 0x15) {
          FUN_00468670(&local_68,*(undefined8 *)local_50);
        }
        else if (local_40 == 0x100) {
          FUN_00468910(&local_68,*(undefined8 *)local_50);
        }
        else {
          if (local_40 != 0x102) goto LAB_0046d670;
          FUN_00468a10(&local_68,*(undefined8 *)local_50);
        }
        local_98 = local_30;
        if (local_30 != 0) {
          local_98 = *(longlong *)(local_30 + -8);
        }
        FUN_0046ce80(param_1,&local_68,local_30,local_98 + -1);
      }
      cVar1 = FUN_0046cf00(&local_30,local_28);
    } while (cVar1 != '\0');
    FUN_0046ca40(param_1);
  }
  FUN_00460ba0(&local_b8);
  FUN_00460ba0(&local_68);
  FUN_00419430(&local_38,&DAT_00403908);
  FUN_00417840(&local_30,&DAT_0046ceb0,3);
  return;
}

