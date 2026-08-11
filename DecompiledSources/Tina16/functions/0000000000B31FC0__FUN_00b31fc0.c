/* Ghidra address: 00b31fc0 */
/* Ghidra symbol: FUN_00b31fc0 */


void FUN_00b31fc0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_47;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_15;
  undefined4 local_14;
  undefined1 local_d;
  int local_c;
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00417580(&local_47,&DAT_00b25e50);
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,6)
  ;
  local_c = 0;
  local_d = 0;
  local_14 = 0;
  local_15 = 0;
  uVar1 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar1,&local_14,2);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 2,&local_c,2);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 4,&local_d,1);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 5,&local_15,1);
  local_3e = (undefined2)local_14;
  local_3f = 6;
  FUN_00b2bea0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),&local_47);
  FUN_00414be0(&local_30,local_47);
  if ((local_15 & 0x80) == 0) {
    FUN_00414c70(&local_20,&DAT_00b3230c);
  }
  else {
    FUN_004144d0(&local_20);
  }
  if ((local_15 & 0x40) == 0) {
    FUN_00414c70(&local_28,&DAT_00b3230c);
  }
  else {
    FUN_004144d0(&local_28);
  }
  FUN_00415530(&local_50,local_30,0);
  FUN_00b20e40(&local_58,local_d);
  FUN_0043f750(&local_60,local_c + 1);
  FUN_00415dd0(&local_68,local_60,0);
  FUN_00415980(*(longlong *)(param_1 + 0x38) + 10,6,local_50,&LAB_00b3231c,local_28,local_58,
               local_20,local_68);
  FUN_004144d0(&local_68);
  FUN_00414480(&local_60);
  FUN_00414590(&local_58,2);
  FUN_00417740(&local_47,&DAT_00b25e50);
  FUN_00414520(&local_30);
  FUN_00414590(&local_28,2);
  return;
}

