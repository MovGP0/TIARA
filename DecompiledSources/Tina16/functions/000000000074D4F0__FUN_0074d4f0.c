/* Ghidra address: 0074d4f0 */
/* Ghidra symbol: FUN_0074d4f0 */


longlong * FUN_0074d4f0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_res8;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_004d22d0(local_res8,0,param_3);
  lVar3 = FUN_004095c0(0x3d0);
  local_res8[0x14] = lVar3;
  *(undefined1 *)(local_res8 + 0xf) = 0;
  *(undefined1 *)(local_res8 + 0x12) = 0;
  FUN_0074e350(local_res8,10000);
  lVar3 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  local_res8[0x15] = lVar3;
  lVar3 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  local_res8[0x13] = lVar3;
  lVar3 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  local_res8[0x18] = lVar3;
  *(undefined4 *)(local_res8 + 0x1a) = 0;
  *(undefined1 *)((longlong)local_res8 + 0xd4) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x91) = 0;
  FUN_00742eb0(local_res8[0x18],0);
  local_38 = local_res8;
  local_40 = *(undefined8 *)(*local_res8 + 0xa0);
  FUN_00742ef0(local_res8[0x18],&local_40);
  FUN_00742ed0(local_res8[0x18],1000);
  if ((*(ushort *)((longlong)local_res8 + 0x34) & 0x10) == 0) {
    FUN_0040d200(local_res8[0x14],0x3d0,0);
    uVar2 = FUN_006369e0();
    *(undefined4 *)local_res8[0x14] = uVar2;
    local_38 = local_res8;
    local_40 = *(undefined8 *)(*local_res8 + 0x98);
    uVar4 = FUN_004d6440(&local_40);
    *(undefined8 *)(local_res8[0x14] + 8) = uVar4;
    FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_48);
    FUN_00442660(local_res8[0x14] + 0x28,local_48,0x7f);
    lVar3 = local_res8[0x14];
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar3 + 8);
    *(undefined4 *)(lVar3 + 0x330) = 10000;
    uVar4 = FUN_0060ce20(local_res8[0x13]);
    *(undefined8 *)(local_res8[0x14] + 0x20) = uVar4;
    lVar3 = local_res8[0x14];
    *(undefined4 *)(lVar3 + 0x14) = 3;
    *(undefined4 *)(lVar3 + 0x18) = 0x401;
    FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_50);
    local_20 = local_50;
    local_24 = 0;
    if (local_50 != 0) {
      local_24 = *(int *)(local_50 + -4);
    }
    if (0 < local_24) {
      *(uint *)(local_res8[0x14] + 0x14) = *(uint *)(local_res8[0x14] + 0x14) | 4;
    }
    FUN_0074e0e0(local_res8);
  }
  FUN_00414560(&local_50,2);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

