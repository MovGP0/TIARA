/* Ghidra address: 006042a0 */
/* Ghidra symbol: FUN_006042a0 */


void FUN_006042a0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_b8;
  local_78 = 0;
  local_28 = 0;
  local_58 = 0;
  local_68 = 0;
  local_20[0] = 0;
  FUN_00417580(local_50,&DAT_005f7210);
  local_60 = FUN_00410e60(&DAT_006041b8,1);
  if (local_60 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_60 + 0x10;
  }
  FUN_0041b840(&local_68,lVar3);
  FUN_00414ad0(local_60 + 0x18,param_2);
  FUN_00414480(local_20);
  FUN_00441a10(&local_58,*(undefined8 *)(local_60 + 0x18));
  FUN_00414b50(local_20,local_58);
  FUN_00416e20(local_20,1,1);
  FUN_00414b50(&local_28,local_20[0]);
  FUN_00414480(local_20);
  local_30 = FUN_00602d10(DAT_01dee058,local_28);
  local_50[0] = 1;
  FUN_00414b50(local_48,*(undefined8 *)(local_60 + 0x18));
  pcVar1 = (code *)FUN_00411550(param_1,0xfffb);
  (*pcVar1)(param_1,local_50,&local_30);
  if (local_30 == 0) {
    FUN_0041ddd0(&local_78,PTR_PTR_02005ae8);
    local_88 = local_28;
    local_80 = 0x11;
    local_98 = 0;
    uVar2 = FUN_0044d530(&PTR_FUN_005f2298,1,local_78,&local_88);
    FUN_004134c0(uVar2);
  }
  if (local_60 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_60 + 0x20;
  }
  FUN_00603b30(param_1,local_30,lVar3);
  FUN_00414480(&local_78);
  FUN_0041b800(&local_68);
  FUN_00414480(&local_58);
  FUN_00417740(local_50,&DAT_005f7210);
  FUN_00414560(&local_28,2);
  return;
}

