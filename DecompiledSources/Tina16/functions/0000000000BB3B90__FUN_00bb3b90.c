/* Ghidra address: 00bb3b90 */
/* Ghidra symbol: FUN_00bb3b90 */


undefined1 FUN_00bb3b90(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  local_50 = auStack_98;
  local_68 = 0;
  local_30 = 0;
  local_38 = 0;
  local_39 = 1;
  FUN_00bae380(param_1);
  FUN_004b6dc0(param_2,0);
  local_78 = (undefined8 *)FUN_0045ae90();
  local_70 = local_70 & 0xffffff00;
  local_28 = FUN_00bad320(&PTR_FUN_00b9f300,1,param_2,0);
  FUN_004b0000(param_1[0x17]);
  if (local_28 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_28 + 0x60;
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_1,lVar3);
  iVar1 = FUN_004b0420(param_1[0x17]);
  if (0 < iVar1) {
    FUN_00bb3a10(auStack_98,&local_68);
    local_60 = local_68;
    local_58 = 0x11;
    local_78 = &local_60;
    local_70 = 0;
    uVar2 = FUN_00bad230(&PTR_FUN_00b9ee48,1,3,0x29);
    FUN_004134c0(uVar2);
  }
  lVar3 = local_28;
  local_48 = local_28;
  local_28 = 0;
  FUN_00410f20(lVar3);
  FUN_00414480(param_1 + 0xf);
  FUN_00414480(&local_68);
  FUN_00414560(&local_38,2);
  return local_39;
}

