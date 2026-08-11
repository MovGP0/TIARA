/* Ghidra address: 00c51bf0 */
/* Ghidra symbol: FUN_00c51bf0 */


longlong FUN_00c51bf0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_004d22d0(local_res8,0,param_3);
  uVar3 = FUN_00611350(&PTR_FUN_00610278,1,0);
  *(undefined8 *)(local_res8 + 0x78) = uVar3;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x1b8) = local_res8;
  *(code **)(lVar1 + 0x1b0) = FUN_00c52130;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x1c8) = local_res8;
  *(code **)(lVar1 + 0x1c0) = FUN_00c521d0;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x278) = local_res8;
  *(code **)(lVar1 + 0x270) = FUN_00c52270;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x268) = local_res8;
  *(code **)(lVar1 + 0x260) = FUN_00c52310;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x1d8) = local_res8;
  *(code **)(lVar1 + 0x1d0) = FUN_00c523b0;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x238) = local_res8;
  *(code **)(lVar1 + 0x230) = FUN_00c524d0;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x248) = local_res8;
  *(code **)(lVar1 + 0x240) = FUN_00c52590;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 600) = local_res8;
  *(code **)(lVar1 + 0x250) = FUN_00c52630;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x208) = local_res8;
  *(code **)(lVar1 + 0x200) = FUN_00c526d0;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x288) = local_res8;
  *(code **)(lVar1 + 0x280) = FUN_00c52770;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x298) = local_res8;
  *(code **)(lVar1 + 0x290) = FUN_00c52810;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x2b8) = local_res8;
  *(code **)(lVar1 + 0x2b0) = FUN_00c52950;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x2a8) = local_res8;
  *(code **)(lVar1 + 0x2a0) = FUN_00c528b0;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x2c8) = local_res8;
  *(code **)(lVar1 + 0x2c0) = FUN_00c52a00;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x218) = local_res8;
  *(code **)(lVar1 + 0x210) = FUN_00c52b90;
  lVar1 = *(longlong *)PTR_DAT_02004030;
  *(longlong *)(lVar1 + 0x228) = local_res8;
  *(code **)(lVar1 + 0x220) = FUN_00c52c30;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

