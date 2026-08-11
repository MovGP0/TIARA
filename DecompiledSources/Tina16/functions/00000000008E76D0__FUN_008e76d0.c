/* Ghidra address: 008e76d0 */
/* Ghidra symbol: FUN_008e76d0 */


void FUN_008e76d0(undefined8 param_1,longlong param_2,int param_3,undefined2 *param_4,int param_5,
                 int *param_6,int *param_7)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  byte local_3d;
  int local_3c;
  int local_38;
  undefined2 local_32;
  undefined2 *local_30;
  int local_24;
  longlong local_20;
  int local_14;
  
  local_50 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_3c = param_5 / 2;
  local_30 = param_4;
  local_20 = param_2;
  local_14 = param_3;
  if ((((param_2 == 0) || (param_3 < 1)) || (param_4 == (undefined2 *)0x0)) || (local_3c < 1)) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    local_38 = 0;
    local_50 = auStack_b8;
    do {
      if (local_3c <= local_38) break;
      FUN_00415430(&local_58,local_20,0);
      local_98 = &local_32;
      local_3d = FUN_008e7690(auStack_b8,local_58,local_14,&local_24);
      if (local_3d == 0) {
        *local_30 = local_32;
        local_30 = local_30 + 1;
        local_38 = local_38 + 1;
        local_20 = local_20 + local_24;
        local_14 = local_14 - local_24;
      }
      else if (local_3d == 1) {
        FUN_0041ddd0(&local_60,PTR_PTR_02001740);
        local_70 = L"UTF-8";
        local_68 = 0x11;
        local_98 = (undefined2 *)((ulonglong)local_98 & 0xffffffff00000000);
        uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_60,&local_70);
        FUN_004134c0(uVar1);
      }
      else {
        if (local_3d == 2) {
          *param_6 = param_3 - local_14;
          *param_7 = local_38;
          goto LAB_008e7ad3;
        }
        if (local_3d == 4) {
          FUN_0041ddd0(&local_78,PTR_PTR_02004d48);
          local_70 = L"UTF-8";
          local_68 = 0x11;
          local_98 = (undefined2 *)((ulonglong)local_98 & 0xffffffff00000000);
          uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_78,&local_70);
          FUN_004134c0(uVar1);
        }
        else {
          FUN_0041ddd0(&local_80,PTR_PTR_02005bc0);
          local_70 = (wchar_t *)CONCAT44(local_70._4_4_,(uint)local_3d);
          local_68 = 0;
          local_98 = (undefined2 *)((ulonglong)local_98 & 0xffffffff00000000);
          uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_80,&local_70);
          FUN_004134c0(uVar1);
        }
      }
    } while (0 < local_14);
    *param_6 = param_3 - local_14;
    *param_7 = local_38;
  }
LAB_008e7ad3:
  FUN_00414560(&local_80,2);
  FUN_00414480(&local_60);
  FUN_004144d0(&local_58);
  return;
}

