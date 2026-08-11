/* Ghidra address: 00b89e10 */
/* Ghidra symbol: FUN_00b89e10 */


void FUN_00b89e10(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_4f [4];
  byte local_4b;
  byte local_4a;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_a0 = auStack_108;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_00416ba0(&local_78,*(undefined8 *)PTR_DAT_020049a0,L"\\tina.xls");
  cVar1 = FUN_00440a20(local_78,1);
  if (cVar1 != '\0') {
    local_40 = FUN_00b68e40(&DAT_00b68668,1);
    *(undefined1 *)(local_40 + 0x20) = 0;
    *(undefined1 *)(local_40 + 0x21) = 0;
    *(undefined1 *)(local_40 + 0x22) = 0;
    *(undefined1 *)(local_40 + 0x23) = 0;
    *(undefined1 *)(local_40 + 0x25) = 0;
    local_38 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_30 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b9f40(local_30,local_78);
    FUN_00b88af0(local_30,local_38,"blowfish","N=g4W9%x2?-(A+\\q#K1}");
    FUN_00b69290(local_40,local_38);
    local_88 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(local_40 + 8) + 8),0);
    FUN_00b59060(local_88,local_4f);
    local_7c = local_4b + 2;
    if (local_7c <= local_4a) {
      iVar5 = (local_4a - local_7c) + 1;
      do {
        local_48 = FUN_00b4fb40(*(undefined8 *)(local_88 + 0x10),0,(undefined2)local_7c);
        FUN_00b4f780(local_48,&local_a8);
        FUN_004168b0(&local_70,local_a8);
        iVar2 = FUN_004170c0(&DAT_00b8a3dc,local_70,1);
        iVar3 = FUN_004170c0(&DAT_00b8a3ec,local_70,1);
        iVar4 = FUN_004170c0(&DAT_00b8a3dc,local_70,1);
        FUN_00416dc0(&local_b0,local_70,iVar2 + 1,(iVar3 - iVar4) + -1);
        FUN_0043ea00(&local_60,local_b0);
        iVar2 = FUN_004170c0(&DAT_00b8a3dc,local_70,1);
        FUN_00416dc0(&local_b8,local_70,1,iVar2 + -1);
        FUN_0043ea00(&local_58,local_b8);
        local_e8 = local_58;
        FUN_00416cd0(&local_c0,3,local_60,&DAT_00b8a3fc);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10));
        local_7c = local_7c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = FUN_00b4e330();
    local_7c = 0;
    if (-1 < iVar5 + -1) {
      do {
        local_48 = FUN_00b4fc70(*(undefined8 *)(local_88 + 0x10),local_7c);
        if (*(short *)(local_48 + 0x48) != 0) {
          if (*(short *)(local_48 + 0x4a) == 0) {
            FUN_00b4f780(local_48,&local_c8);
            FUN_004168b0(&local_68,local_c8);
          }
          else if (*(short *)(local_48 + 0x4a) == 1) {
            FUN_00b4f780(local_48,&local_d0);
            FUN_004168b0(&local_70,local_d0);
            local_e8 = local_70;
            FUN_00416cd0(&local_d8,3,local_68,&DAT_00b8a3fc);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
                      (*(longlong **)(param_1 + 0x20),local_d8);
          }
        }
        local_7c = local_7c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00410f20(local_30);
    FUN_00410f20(local_38);
    FUN_00410f20(local_40);
  }
  FUN_00414480(&local_d8);
  FUN_004145c0(&local_d0,2);
  FUN_00414560(&local_c0,3);
  FUN_00414520(&local_a8);
  FUN_00414560(&local_78,5);
  return;
}

