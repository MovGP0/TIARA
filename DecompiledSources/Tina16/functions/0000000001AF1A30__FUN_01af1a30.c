/* Ghidra address: 01af1a30 */
/* Ghidra symbol: FUN_01af1a30 */


void FUN_01af1a30(longlong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined *local_a0;
  code *local_90;
  longlong local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_80 = auStack_c8;
  local_40 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  puVar2 = auStack_c8;
  if (*(char *)(*(longlong *)(param_1 + 0x6b8) + 0xa9) != '\0') {
    cVar1 = *(char *)(param_1 + 0x818);
    puVar2 = auStack_c8;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x7e8));
        FUN_0043f780(&local_40,uVar3);
      }
      else if (cVar1 == '\x02') {
        local_80 = auStack_c8;
        FUN_00414480(&local_10);
        local_48 = *(undefined8 *)(param_1 + 0x7e8);
        local_a8 = 0;
        local_a0 = PTR_DAT_02004830;
        FUN_00448510(&local_10,local_48,1,5);
        FUN_00414b50(&local_40,local_10);
        FUN_00414480(&local_10);
      }
      else if (cVar1 == '\x03') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        local_80 = auStack_c8;
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x7e8),*PTR_DAT_02005310,0);
      }
      else {
        local_80 = auStack_c8;
        if (cVar1 == '\x04') {
          local_a8 = CONCAT31(local_a8._1_3_,1);
          local_80 = auStack_c8;
          FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x7e8),*PTR_DAT_02005310,1);
        }
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_40);
      puVar2 = local_80;
    }
    local_80 = puVar2;
    cVar1 = *(char *)(param_1 + 0x819);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x7f0));
        FUN_0043f780(&local_40,uVar3);
      }
      else if (cVar1 == '\x02') {
        FUN_00414480(&local_18);
        local_50 = *(undefined8 *)(param_1 + 0x7f0);
        local_a8 = 0;
        local_a0 = PTR_DAT_02004830;
        FUN_00448510(&local_18,local_50,1,5);
        FUN_00414b50(&local_40,local_18);
        FUN_00414480(&local_18);
      }
      else if (cVar1 == '\x03') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x7f0),*PTR_DAT_02005310,0);
      }
      else if (cVar1 == '\x04') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x7f0),*PTR_DAT_02005310,1);
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_40);
    }
    cVar1 = *(char *)(param_1 + 0x81a);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x7f8));
        FUN_0043f780(&local_40,uVar3);
      }
      else if (cVar1 == '\x02') {
        FUN_00414480(&local_20);
        local_58 = *(undefined8 *)(param_1 + 0x7f8);
        local_a8 = 0;
        local_a0 = PTR_DAT_02004830;
        FUN_00448510(&local_20,local_58,1,5);
        FUN_00414b50(&local_40,local_20);
        FUN_00414480(&local_20);
      }
      else if (cVar1 == '\x03') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x7f8),*PTR_DAT_02005310,0);
      }
      else if (cVar1 == '\x04') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x7f8),*PTR_DAT_02005310,1);
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_40);
    }
    cVar1 = *(char *)(param_1 + 0x81b);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x800));
        FUN_0043f780(&local_40,uVar3);
      }
      else if (cVar1 == '\x02') {
        FUN_00414480(&local_28);
        local_60 = *(undefined8 *)(param_1 + 0x800);
        local_a8 = 0;
        local_a0 = PTR_DAT_02004830;
        FUN_00448510(&local_28,local_60,1,5);
        FUN_00414b50(&local_40,local_28);
        FUN_00414480(&local_28);
      }
      else if (cVar1 == '\x03') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x800),*PTR_DAT_02005310,0);
      }
      else if (cVar1 == '\x04') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x800),*PTR_DAT_02005310,1);
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x720),local_40);
    }
    cVar1 = *(char *)(param_1 + 0x81c);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x808));
        FUN_0043f780(&local_40,uVar3);
      }
      else if (cVar1 == '\x02') {
        FUN_00414480(&local_30);
        local_68 = *(undefined8 *)(param_1 + 0x808);
        local_a8 = 0;
        local_a0 = PTR_DAT_02004830;
        FUN_00448510(&local_30,local_68,1,5);
        FUN_00414b50(&local_40,local_30);
        FUN_00414480(&local_30);
      }
      else if (cVar1 == '\x03') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x808),*PTR_DAT_02005310,0);
      }
      else if (cVar1 == '\x04') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x808),*PTR_DAT_02005310,1);
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_40);
    }
    cVar1 = *(char *)(param_1 + 0x81d);
    puVar2 = local_80;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar3 = FUN_0040c770(*(undefined8 *)(param_1 + 0x810));
        FUN_0043f780(&local_40,uVar3);
      }
      else if (cVar1 == '\x02') {
        FUN_00414480(&local_38);
        local_70 = *(undefined8 *)(param_1 + 0x810);
        local_a8 = 0;
        local_a0 = PTR_DAT_02004830;
        FUN_00448510(&local_38,local_70,1,5);
        FUN_00414b50(&local_40,local_38);
        FUN_00414480(&local_38);
      }
      else if (cVar1 == '\x03') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x810),*PTR_DAT_02005310,0);
      }
      else if (cVar1 == '\x04') {
        local_a8 = CONCAT31(local_a8._1_3_,1);
        FUN_00b8fd60(&local_40,*(undefined8 *)(param_1 + 0x810),*PTR_DAT_02005310,1);
      }
      FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_40);
      puVar2 = local_80;
    }
  }
  local_80 = puVar2;
  local_90 = FUN_01af1a30;
  local_88 = param_1;
  FUN_00f833f0(&local_90,100);
  FUN_00414560(&local_40,7);
  return;
}

