/* Ghidra address: 015fb4b0 */
/* Ghidra symbol: FUN_015fb4b0 */


undefined1 FUN_015fb4b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong *local_68;
  undefined2 local_5e;
  undefined2 local_5c;
  short local_5a;
  undefined8 local_58 [2];
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined1 local_39;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_80 = auStack_d8;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_28 = 0;
  local_58[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_39 = 1;
  local_68 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_68 + 0xd8))(local_68,local_res8);
  iVar2 = (**(code **)(*local_68 + 0x28))();
  local_40 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_68 + 0x18))(local_68,&local_28,local_40);
      local_1c = 0;
      local_5a = FUN_015faf50(auStack_d8);
      if (local_5a == 0x53) {
        local_5a = FUN_015faf50(auStack_d8);
        if (local_5a != 0x30) {
          if (((local_5a == 0x31) || (local_5a == 0x32)) || (local_5a == 0x33)) {
            local_5c = FUN_015faf50(auStack_d8);
            local_5e = FUN_015faf50(auStack_d8);
            FUN_00416780(&local_88,local_5c);
            FUN_00416780(&local_90,local_5e);
            FUN_00416ba0(local_58,local_88,local_90);
            cVar1 = FUN_015fae60(local_58[0]);
            if (cVar1 == '\0') {
              FUN_00416ba0(&local_98,L"Syntax error in the S19 file (invalid hex number): ",
                           local_res8);
              uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_98);
              FUN_004134c0(uVar3);
            }
            local_44 = FUN_01aa1170(local_58[0]);
            if (local_5a == 0x31) {
              local_44 = local_44 + -3;
              local_48 = FUN_015fb1f0(auStack_d8,2);
            }
            else if (local_5a == 0x32) {
              local_44 = local_44 + -4;
              local_48 = FUN_015fb1f0(auStack_d8,3);
            }
            else {
              local_44 = local_44 + -5;
              local_48 = FUN_015fb1f0(auStack_d8,4);
            }
            FUN_015fb370(auStack_d8,local_44,local_48);
          }
          else if (((local_5a == 0x37) || (local_5a == 0x38)) || (local_5a == 0x39)) {
            local_5c = FUN_015faf50(auStack_d8);
            local_5e = FUN_015faf50(auStack_d8);
            FUN_00416780(&local_a0,local_5c);
            FUN_00416780(&local_a8,local_5e);
            FUN_00416ba0(local_58,local_a0,local_a8);
            cVar1 = FUN_015fae60(local_58[0]);
            if (cVar1 == '\0') {
              FUN_00416ba0(&local_b0,L"Syntax error in the S19 file (invalid hex number): ",
                           local_res8);
              uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_b0);
              FUN_004134c0(uVar3);
            }
            FUN_01aa1170(local_58[0]);
            if (local_5a == 0x37) {
              FUN_015fb1f0(auStack_d8,4);
            }
            else if (local_5a == 0x38) {
              FUN_015fb1f0(auStack_d8,3);
            }
            else {
              FUN_015fb1f0(auStack_d8,2);
            }
          }
        }
      }
      else {
        FUN_00416ba0(&local_b8,L"Syntax error in the S19 file (S char expected): ",local_res8);
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_b8);
        FUN_004134c0(uVar3);
      }
      local_40 = local_40 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*local_30 + 0x100))(local_30,local_res10);
  FUN_00410f20(local_68);
  FUN_00410f20(local_30);
  FUN_00414560(&local_b8,7);
  FUN_00414480(local_58);
  FUN_00414480(&local_28);
  FUN_00414560(&local_res8,2);
  return local_39;
}

