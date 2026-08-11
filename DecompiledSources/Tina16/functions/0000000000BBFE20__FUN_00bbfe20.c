/* Ghidra address: 00bbfe20 */
/* Ghidra symbol: FUN_00bbfe20 */


undefined1 FUN_00bbfe20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_60 = auStack_b8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  local_11 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,param_2);
  cVar1 = FUN_005eaa60(local_10,local_res18);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_10,local_res20);
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,&local_20,local_res20);
      FUN_00bbfd80(auStack_b8,&local_68,&local_20);
      FUN_00414b50(&local_28,local_68);
      FUN_00bbfd80(auStack_b8,&local_70,&local_20);
      FUN_00414b50(&local_30,local_70);
      FUN_00bbfd80(auStack_b8,&local_78,&local_20);
      FUN_00414b50(&local_38,local_78);
      FUN_00bbfd80(auStack_b8,&local_80,&local_20);
      FUN_00414b50(&local_40,local_80);
      FUN_00bbfd80(auStack_b8,&local_88,&local_20);
      FUN_00414b50(&local_48,local_88);
      FUN_00bbfd80(auStack_b8,&local_90,&local_20);
      FUN_00414b50(&local_50,local_90);
      FUN_00bbfd80(auStack_b8,&local_98,&local_20);
      FUN_00414b50(&local_58,local_98);
      iVar2 = FUN_00416db0(local_48,&DAT_00bc02ec);
      if (iVar2 == 0) {
        FUN_00bc0b80(*(undefined8 *)(param_1 + 0x40),0xff000005);
      }
      else {
        iVar2 = FUN_0043fc00(local_58);
        FUN_00bc0b80(*(undefined8 *)(param_1 + 0x40),
                     *(undefined4 *)(&DAT_01e9989c + (longlong)iVar2 * 4));
      }
      iVar2 = FUN_00416db0(local_40,&DAT_00bc02ec);
      if (iVar2 == 0) {
        FUN_00bc0bd0(*(undefined8 *)(param_1 + 0x40),0xff000008);
      }
      else {
        iVar2 = FUN_0043fc00(local_50);
        FUN_00bc0bd0(*(undefined8 *)(param_1 + 0x40),
                     *(undefined4 *)(&DAT_01e9989c + (longlong)iVar2 * 4));
      }
      FUN_00bc0bf0(*(undefined8 *)(param_1 + 0x40),0);
      iVar2 = FUN_004170c0(&DAT_00bc0300,local_38,1);
      if (0 < iVar2) {
        FUN_00bc0bf0(*(undefined8 *)(param_1 + 0x40),
                     *(byte *)(*(longlong *)(param_1 + 0x40) + 0x28) | 1);
      }
      iVar2 = FUN_004170c0(&DAT_00bc0314,local_38,1);
      if (0 < iVar2) {
        FUN_00bc0bf0(*(undefined8 *)(param_1 + 0x40),
                     *(byte *)(*(longlong *)(param_1 + 0x40) + 0x28) | 2);
      }
      iVar2 = FUN_004170c0(&DAT_00bc0328,local_38,1);
      if (0 < iVar2) {
        FUN_00bc0bf0(*(undefined8 *)(param_1 + 0x40),
                     *(byte *)(*(longlong *)(param_1 + 0x40) + 0x28) | 4);
      }
      local_11 = 1;
    }
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414560(&local_98,7);
  FUN_00414560(&local_58,8);
  FUN_00414560(&local_res18,2);
  return local_11;
}

