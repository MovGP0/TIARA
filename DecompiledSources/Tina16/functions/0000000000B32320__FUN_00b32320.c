/* Ghidra address: 00b32320 */
/* Ghidra symbol: FUN_00b32320 */


void FUN_00b32320(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_5f;
  undefined1 local_57;
  undefined2 local_56;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  byte local_1a;
  byte local_19;
  undefined4 local_18;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  
  local_70[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_00417580(&local_5f,&DAT_00b25e50);
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,10
              );
  local_c = 0;
  local_10 = 0;
  local_11 = 0;
  local_12 = 0;
  local_18 = 0;
  local_19 = 0;
  local_1a = 0;
  uVar1 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar1,&local_18,2);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 2,&local_c,2);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 4,&local_10,2);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 6,&local_11,1);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 7,&local_19,1);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 8,&local_12,1);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 9,&local_1a,1);
  if ((local_19 & 0x80) == 0) {
    FUN_00414c70(&local_28,&DAT_00b32874);
  }
  else {
    FUN_004144d0(&local_28);
  }
  if ((local_19 & 0x40) == 0) {
    FUN_00414c70(&local_38,&DAT_00b32874);
  }
  else {
    FUN_004144d0(&local_38);
  }
  if ((local_1a & 0x80) == 0) {
    FUN_00414c70(&local_30,&DAT_00b32874);
  }
  else {
    FUN_004144d0(&local_30);
  }
  if ((local_1a & 0x40) == 0) {
    FUN_00414c70(&local_40,&DAT_00b32874);
  }
  else {
    FUN_004144d0(&local_40);
  }
  local_56 = (undefined2)local_18;
  local_57 = 6;
  FUN_00b2bea0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),&local_5f);
  FUN_00414be0(&local_48,local_5f);
  FUN_00415530(local_70,local_48,0);
  FUN_00b20e40(&local_78,local_11);
  FUN_0043f750(&local_80,local_c + 1);
  FUN_00415dd0(&local_88,local_80,0);
  FUN_00b20e40(&local_90,local_12);
  FUN_0043f750(&local_98,local_10 + 1);
  FUN_00415dd0(&local_a0,local_98,0);
  FUN_00415980(*(longlong *)(param_1 + 0x38) + 10,0xb,local_70[0],&DAT_00b32884,local_38,local_78,
               local_28,local_88,&LAB_00b32894,local_40,local_90,local_30,local_a0);
  FUN_004144d0(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414590(&local_90,2);
  FUN_00414480(&local_80);
  FUN_00414590(&local_78,2);
  FUN_00417740(&local_5f,&DAT_00b25e50);
  FUN_00414520(&local_48);
  FUN_00414590(&local_40,4);
  return;
}

