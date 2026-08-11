/* Ghidra address: 019eb430 */
/* Ghidra symbol: FUN_019eb430 */


undefined8 * FUN_019eb430(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong local_res10 [3];
  undefined1 auStack_1f8 [32];
  undefined *local_1d8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  undefined4 local_18c;
  int local_188;
  undefined4 local_184;
  int local_180;
  bool local_179;
  undefined4 local_178;
  int local_174;
  undefined1 local_170 [48];
  undefined1 local_140 [48];
  undefined1 local_110 [48];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0 [2];
  uint local_c0;
  int local_bc;
  undefined1 local_b8 [8];
  undefined1 local_b0 [48];
  undefined1 local_80 [40];
  undefined8 local_58;
  wchar_t *local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_1a0 = auStack_1f8;
  local_1c0 = 0;
  local_1b8 = (undefined8 *)0x0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = (wchar_t *)0x0;
  local_58 = 0;
  local_d0[0] = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_20[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_80,&DAT_00ea5f80);
  FUN_00417580(local_b0,&DAT_00ea5ae8);
  FUN_00417580(local_b8,&DAT_00ea5be0);
  FUN_00417580(local_110,&DAT_00ea5ae8);
  FUN_00417580(local_140,&DAT_00ea5ae8);
  FUN_00417580(local_170,&DAT_00ea5ae8);
  FUN_00414480(param_1);
  local_bc = 0;
  while( true ) {
    local_174 = 0;
    if (local_res10[0] != 0) {
      local_174 = *(int *)(local_res10[0] + -4);
    }
    if (local_174 <= local_bc) break;
    FUN_019eaba0(&local_40,local_res10[0],&local_bc);
    local_c0 = 0xffffffff;
    cVar1 = FUN_005b8460(&DAT_019ebd64,local_40);
    if (cVar1 == '\0') {
      cVar1 = FUN_005b8460(&DAT_019ebdd0,local_40);
      if (cVar1 == '\0') {
        cVar1 = FUN_005b8460(&DAT_019ebe54,local_40);
        if ((cVar1 != '\0') || (cVar1 = FUN_005b8460(&DAT_019ebe64,local_40), cVar1 != '\0')) {
          FUN_019eae60(&local_48,local_40,L"\\b[BCDEFGHIJLMQRSVWX][A-Z_0-9\\/%\\*\\$\\+-]*\\b",
                       &local_c0);
          FUN_019eafe0(local_b0,local_40,&local_c0);
          local_c0 = FUN_019eb120(local_b0);
          FUN_019eae60(&local_50,local_40,L"\\b[A-Z0-9][A-Z_0-9\\/%\\*\\$\\+-]*\\b",&local_c0);
          if (local_50 == L"POLY") {
            local_179 = true;
          }
          else if (local_50 == (wchar_t *)0x0) {
            local_179 = false;
          }
          else {
            iVar2 = FUN_0043e420(local_50,L"POLY");
            local_179 = iVar2 == 0;
          }
          if (local_179 != false) {
            FUN_00ea7a10(local_80,
                         L"\\( *[A-Z0-9][A-Z_0-9\\/%\\*\\$\\+-]* *, *[A-Z0-9][A-Z_0-9\\/%\\*\\$\\+-]* *\\)"
                         ,2);
            FUN_00ea8270(local_80,&local_1b0,local_40,local_c0);
            FUN_00417c40(local_b8,&local_1b0,&DAT_00ea5be0);
            iVar2 = FUN_00ea7830(local_b8);
            if (0 < iVar2) {
              FUN_00414480(&local_58);
              local_28 = (longlong *)FUN_00ea7840(local_b8);
              while (cVar1 = FUN_00ea79e0(local_28), cVar1 != '\0') {
                FUN_00ea79b0(local_28,local_b0);
                FUN_00ea7500(local_b0,local_d0);
                FUN_00456970(local_d0,&local_d8,0x28,0x20);
                FUN_00456970(&local_d8,&local_e0,0x29,0x20);
                FUN_00456970(&local_e0,&local_1b8,0x2c,0x20);
                FUN_00416ad0(&local_58,local_1b8);
              }
              if (local_28 != (longlong *)0x0) {
                (**(code **)(*local_28 + -0x20))(local_28,1);
              }
              FUN_00414480(&local_38);
              FUN_00ea7860(local_b8,local_110,0);
              local_180 = FUN_00ea74d0(local_110);
              local_180 = local_180 + -1;
              FUN_00414b50(&local_38,local_40);
              local_184 = 0;
              if (local_38 != 0) {
                local_184 = *(undefined4 *)(local_38 + -4);
              }
              FUN_00416e20(&local_38,local_180 + 1,local_184);
              FUN_00414480(&local_30);
              iVar2 = FUN_00ea7830(local_b8);
              FUN_00ea7860(local_b8,local_140,iVar2 + -1);
              iVar2 = FUN_00ea74d0(local_140);
              iVar3 = FUN_00ea7830(local_b8);
              FUN_00ea7860(local_b8,local_170,iVar3 + -1);
              local_188 = FUN_00ea74e0(local_170);
              local_188 = iVar2 + local_188;
              local_18c = 0;
              if (local_40 != 0) {
                local_18c = *(undefined4 *)(local_40 + -4);
              }
              FUN_00416dc0(&local_30,local_40,local_188 + 1,local_18c);
              local_1d8 = (undefined *)local_30;
              FUN_00416cd0(&local_40,3,local_38,local_58);
              FUN_00414480(&local_30);
              FUN_00414480(&local_38);
            }
          }
        }
      }
      else {
        FUN_019eae60(&local_48,local_40,L"\\b[BCDEFGHIJLMQRSVWX][A-Z_0-9\\/%\\*\\$\\+-]*\\b",
                     &local_c0);
        puVar4 = (undefined2 *)FUN_00414de0(&local_48);
        *puVar4 = 0x5a;
        FUN_00414480(local_20);
        local_178 = 0;
        if (local_40 != 0) {
          local_178 = *(undefined4 *)(local_40 + -4);
        }
        FUN_00416dc0(local_20,local_40,local_c0 + 1,local_178);
        local_1d8 = (undefined *)local_20[0];
        FUN_00416cd0(&local_40,3,local_48,&DAT_019ebe44);
        FUN_00414480(local_20);
      }
    }
    else {
      cVar1 = FUN_005b8460(L".MODEL",local_40);
      if (cVar1 != '\0') {
        local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,2);
        FUN_00ea9000(&local_1a8,local_40,L"gasfet\\ *\\(",L"NMF (");
        FUN_00414b50(&local_40,local_1a8);
      }
    }
    local_1d8 = &DAT_019ebf74;
    FUN_00416cd0(param_1,3,*param_1,local_40);
  }
  local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,1);
  FUN_00450070(&local_1c0,*param_1,&DAT_019ebf88,&DAT_019ebf98);
  FUN_00414ad0(param_1,local_1c0);
  FUN_00414560(&local_1c0,2);
  FUN_00417740(&local_1b0,&DAT_00ea5be0);
  FUN_00414480(&local_1a8);
  FUN_00417840(local_170,&DAT_00ea5ae8,3);
  FUN_00414560(&local_e0,3);
  FUN_00417740(local_b8,&DAT_00ea5be0);
  FUN_00417740(local_b0,&DAT_00ea5ae8);
  FUN_00417740(local_80,&DAT_00ea5f80);
  FUN_00414560(&local_58,6);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return param_1;
}

