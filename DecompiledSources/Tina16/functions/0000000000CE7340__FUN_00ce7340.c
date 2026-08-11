/* Ghidra address: 00ce7340 */
/* Ghidra symbol: FUN_00ce7340 */


void FUN_00ce7340(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_5c;
  double local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = auStack_128;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_5c = FUN_004170c0(&DAT_00ce7d50,*(undefined8 *)(param_1 + 0xb8),1);
  if (local_5c < 1) {
    FUN_00414b50(&local_28,*(undefined8 *)(param_1 + 0xb8));
    FUN_00414480(&local_30);
  }
  else {
    FUN_00416dc0(&local_28,*(undefined8 *)(param_1 + 0xb8),1,local_5c + -1);
    FUN_00416dc0(&local_30,*(undefined8 *)(param_1 + 0xb8),local_5c,0x7fffffff);
  }
  local_5c = FUN_004170c0(&DAT_00ce7d60,local_28,1);
  if (local_5c != 0) {
    FUN_00416dc0(&local_78,local_28,1,local_5c + -1);
    FUN_0043ea00(&local_40,local_78);
    if (local_40 != 0) {
      FUN_00416dc0(&local_80,local_28,local_5c + 1,0x7fffffff);
      FUN_0043ea00(&local_48,local_80);
      cVar1 = FUN_00879090(local_48,&DAT_00ce7d70);
      if (cVar1 != '\0') {
        FUN_00879060(&local_48,1,1);
        FUN_00414b50(&local_28,local_48);
        local_108 = CONCAT71(local_108._1_7_,1);
        FUN_00874ee0(&local_48,&local_28,&DAT_00ce7d70,1);
      }
      local_108 = local_48;
      FUN_00416cd0(&local_88,3,local_40,&DAT_00ce7d60);
      (**(code **)(*param_2 + 0x78))(param_2,local_88);
      while (local_30 != 0) {
        FUN_00879060(&local_30,1,1);
        local_5c = FUN_004170c0(&DAT_00ce7d50,local_30,1);
        if (local_5c < 1) {
          FUN_00414b50(&local_38,local_30);
          FUN_00414480(&local_30);
        }
        else {
          FUN_00416dc0(&local_38,local_30,1,local_5c + -1);
          FUN_00416dc0(&local_30,local_30,local_5c,0x7fffffff);
        }
        local_5c = FUN_004170c0(&DAT_00ce7d60,local_38,1);
        if (local_5c < 1) {
          FUN_0043ea00(&local_40,local_38);
          FUN_00414480(&local_48);
        }
        else {
          FUN_00416dc0(&local_90,local_38,1,local_5c + -1);
          FUN_0043ea00(&local_40,local_90);
          FUN_00416dc0(&local_98,local_38,local_5c + 1,0x7fffffff);
          FUN_0043ea00(&local_48,local_98);
          cVar1 = FUN_00879090(local_48,&DAT_00ce7d70);
          if (cVar1 != '\0') {
            FUN_00879060(&local_48,1,1);
            FUN_00414b50(&local_28,local_48);
            local_108 = CONCAT71(local_108._1_7_,1);
            FUN_00874ee0(&local_48,&local_28,&DAT_00ce7d70,1);
          }
        }
        local_c8 = L"Expires";
        local_c0 = L"Max-Age";
        local_b8 = L"Domain";
        local_b0 = L"Path";
        local_a8 = L"Secure";
        local_a0 = L"HttpOnly";
        iVar2 = FUN_00874bb0(local_40,&local_c8,5,0);
        if (iVar2 < 4) {
          if (iVar2 == 3) {
            if ((local_48 == 0) || (cVar1 = FUN_00879090(local_48,&DAT_00ce7ea4), cVar1 == '\0')) {
              FUN_00ce6ba0(&local_48,*(undefined8 *)(param_1 + 0xc0));
            }
            FUN_00416ba0(&local_f8,L"PATH=",local_48);
            (**(code **)(*param_2 + 0x78))(param_2,local_f8);
          }
          else if (iVar2 == 0) {
            cVar1 = FUN_0043fd30(local_48,&local_50);
            if (cVar1 == '\0') {
              local_58 = (double)FUN_008a28d0(local_48);
              if (local_58 != 0.0) {
                FUN_00414480(&local_18);
                FUN_00448450(&local_18,local_58,PTR_DAT_02004830);
                FUN_00416ba0(&local_d8,L"EXPIRES=",local_18);
                (**(code **)(*param_2 + 0x78))(param_2,local_d8);
                FUN_00414480(&local_18);
              }
            }
            else {
              if (local_50 < 0) {
                local_58 = (double)FUN_00448c80(1,1,1);
              }
              else {
                local_58 = (double)FUN_00448ed0();
                local_58 = local_58 + (double)(local_50 * 1000) / 86400000.0;
              }
              FUN_00414480(&local_10);
              FUN_00448450(&local_10,local_58,PTR_DAT_02004830);
              FUN_00416ba0(&local_d0,L"EXPIRES=",local_10);
              (**(code **)(*param_2 + 0x78))(param_2,local_d0);
              FUN_00414480(&local_10);
            }
          }
          else if (iVar2 == 1) {
            cVar1 = FUN_0043fd30(local_48,&local_50);
            if (cVar1 != '\0') {
              if (local_50 < 0) {
                local_58 = (double)FUN_00448c80(1,1,1);
              }
              else {
                local_58 = (double)FUN_00448ed0();
                local_58 = local_58 + (double)(local_50 * 1000) / 86400000.0;
              }
              FUN_00414480(&local_20);
              FUN_00448450(&local_20,local_58,PTR_DAT_02004830);
              FUN_00416ba0(&local_e0,L"MAX-AGE=",local_20);
              (**(code **)(*param_2 + 0x78))(param_2,local_e0);
              FUN_00414480(&local_20);
            }
          }
          else if ((iVar2 == 2) && (local_48 != 0)) {
            cVar1 = FUN_00879090(local_48,&DAT_00ce7e68);
            if (cVar1 != '\0') {
              FUN_00416dc0(&local_48,local_48,2);
            }
            local_5c = FUN_004170c0(&DAT_00ce7e78,local_48,1);
            if (0 < local_5c) {
              FUN_00416dc0(&local_48,param_3,1);
            }
            FUN_0043e1a0(&local_f0,local_48);
            FUN_00416ba0(&local_e8,L"DOMAIN=",local_f0);
            (**(code **)(*param_2 + 0x78))(param_2,local_e8);
          }
        }
        else if (iVar2 == 4) {
          (**(code **)(*param_2 + 0x78))(param_2,L"SECURE=");
        }
        else if (iVar2 == 5) {
          (**(code **)(*param_2 + 0x78))(param_2,L"HTTPONLY=");
        }
      }
    }
  }
  FUN_00414560(&local_f8,6);
  FUN_00414560(&local_98,5);
  FUN_00414560(&local_48,8);
  return;
}

