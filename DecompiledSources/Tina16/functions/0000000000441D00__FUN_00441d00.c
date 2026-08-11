/* Ghidra address: 00441d00 */
/* Ghidra symbol: FUN_00441d00 */


undefined8 * FUN_00441d00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  short *psVar3;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = 0;
  local_28 = 0;
  local_98 = param_1;
  local_90 = param_2;
  local_88 = param_3;
  FUN_00441820(&local_40,param_2);
  FUN_00441820(&local_48,local_88);
  cVar1 = FUN_0044fe20(local_40,local_48);
  if (cVar1 == '\0') {
    FUN_00414ad0(local_98,local_88);
  }
  else {
    FUN_00441c30(auStack_c8,&local_50,local_90);
    FUN_00414b50(&local_20,local_50);
    FUN_00414e00(&local_20);
    FUN_00441c30(auStack_c8,&local_58,local_88);
    FUN_00414b50(&local_28,local_58);
    FUN_00414e00(&local_28);
    local_30 = local_20;
    lVar2 = FUN_00441cc0(auStack_c8,&local_30);
    local_38 = local_28;
    psVar3 = (short *)FUN_00441cc0(auStack_c8,&local_38);
    while ((lVar2 != 0 && (psVar3 != (short *)0x0))) {
      FUN_004167d0(&local_60,lVar2);
      FUN_004167d0(&local_68,psVar3);
      cVar1 = FUN_0044fe20(local_60,local_68);
      if (cVar1 == '\0') break;
      lVar2 = FUN_00441cc0(auStack_c8,&local_30);
      psVar3 = (short *)FUN_00441cc0(auStack_c8,&local_38);
    }
    FUN_00414480(local_98);
    while (local_30 != 0) {
      local_a8 = &LAB_00442014;
      FUN_00416cd0(local_98,3,*local_98,&DAT_00442000);
      FUN_00441cc0(auStack_c8,&local_30);
    }
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      FUN_004167d0(&local_70,psVar3);
      local_a8 = &LAB_00442014;
      FUN_00416cd0(local_98,3,*local_98,local_70);
    }
    if (local_38 != 0) {
      FUN_004167d0(&local_78,local_38);
      FUN_00416ad0(local_98,local_78);
    }
    FUN_00441920(&local_80,local_88);
    FUN_00416ad0(local_98,local_80);
  }
  FUN_00414560(&local_80,9);
  FUN_00414560(&local_28,2);
  return local_98;
}

