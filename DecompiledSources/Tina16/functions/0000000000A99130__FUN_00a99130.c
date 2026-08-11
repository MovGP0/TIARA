/* Ghidra address: 00a99130 */
/* Ghidra symbol: FUN_00a99130 */


longlong FUN_00a99130(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong local_res8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  int local_70 [2];
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_a8;
  local_50 = 0;
  local_48 = 0;
  local_res8 = param_1;
  puVar2 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  local_88 = param_5;
  local_80 = param_6;
  FUN_00ac4c80(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0x68) = param_4;
  if (*(longlong *)(*(longlong *)(local_res8 + 0x18) + 0x310) == 0) {
    uVar5 = FUN_00a98480(&DAT_00a876a0,1,*(longlong *)(local_res8 + 0x18),0);
    *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x310) = uVar5;
  }
  local_38 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x230);
  FUN_004ae7e0(local_38,local_res8);
  *(undefined8 *)(local_res8 + 0xf8) = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0x310);
  iVar6 = *(int *)(param_5 + 0x10);
  local_1c = 0;
  if (-1 < iVar6 + -1) {
    do {
      local_28 = FUN_004aeac0(param_5,local_1c);
      bVar1 = *(byte *)(local_28 + 8);
      if (bVar1 < 0x3c) {
        if (bVar1 == 0x3b) {
          FUN_00414ad0(local_res8 + 0x130,*(undefined8 *)(local_28 + 0x28));
        }
        else if (bVar1 < 0x34) {
          if (bVar1 == 0x33) {
            FUN_00414ad0(local_res8 + 200,*(undefined8 *)(local_28 + 0x28));
          }
          else if (bVar1 == 0x18) {
            FUN_0043e1a0(&local_48,*(undefined8 *)(local_28 + 0x28));
            iVar4 = FUN_00416db0(local_48,&DAT_00a9964c);
            if ((iVar4 == 0) ||
               (iVar4 = FUN_00416db0(*(undefined8 *)(local_28 + 0x28),&DAT_00a99660), iVar4 == 0)) {
              uVar3 = 0;
            }
            else {
              uVar3 = 1;
            }
            *(undefined1 *)(local_res8 + 0x110) = uVar3;
          }
          else if (bVar1 == 0x23) {
            FUN_00414ad0(local_res8 + 0xd0,*(undefined8 *)(local_28 + 0x28));
          }
        }
        else if (bVar1 == 0x39) {
          FUN_00414ad0(local_res8 + 0x120,*(undefined8 *)(local_28 + 0x28));
        }
        else if (bVar1 == 0x3a) {
          FUN_00414ad0(local_res8 + 0x128,*(undefined8 *)(local_28 + 0x28));
        }
      }
      else if (bVar1 < 0x52) {
        if (bVar1 == 0x51) {
          if (0 < *(int *)(local_28 + 0x18)) {
            local_30 = *(longlong **)(*(longlong *)(local_res8 + 0x18) + 0x2c0);
            local_68 = 0;
            local_70[0] = *(int *)(local_28 + 0x18);
            local_60 = (**(code **)(*local_30 + 0x28))(local_30);
            local_58 = 0;
            FUN_00442f70(&local_50,L"%.5d%.3d",local_70,1);
            (**(code **)(*local_30 + 0x80))(local_30,local_50,local_res8);
          }
        }
        else if (bVar1 == 0x3c) {
          FUN_00414ad0(local_res8 + 0x138,*(undefined8 *)(local_28 + 0x28));
        }
        else if (bVar1 == 0x42) {
          *(undefined1 *)(local_res8 + 0x111) = 1;
        }
      }
      else if (bVar1 == 0x54) {
        FUN_00414ad0(local_res8 + 0xd8,*(undefined8 *)(local_28 + 0x28));
      }
      else if (bVar1 == 0x5a) {
        FUN_00ac1910(local_res8,*(undefined8 *)(local_28 + 0x28));
      }
      local_1c = local_1c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined1 *)(local_res8 + 0xa8) = 4;
  FUN_00a986d0(*(undefined8 *)(local_res8 + 0xf8),local_res8);
  FUN_00414560(&local_50,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

