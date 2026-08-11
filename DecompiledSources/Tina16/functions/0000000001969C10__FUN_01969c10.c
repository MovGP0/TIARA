/* Ghidra address: 01969c10 */
/* Ghidra symbol: FUN_01969c10 */


longlong * FUN_01969c10(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_0197ca70(local_res8,0,param_3);
  local_1c = (int)local_res8[3];
  lVar2 = (**(code **)(*local_res8 + 0x118))(local_res8);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*local_res8 + 0x118))(local_res8);
    if (*(char *)(*(longlong *)(lVar2 + 0x1a8) + 0x20) != '\0') {
      local_res8[3] = 0x13e;
      goto LAB_01969ca8;
    }
  }
  local_res8[3] = 0;
LAB_01969ca8:
  lVar2 = FUN_018dd120(&PTR_FUN_018dc720,1,local_res8);
  local_res8[0x30] = lVar2;
  local_res8[3] = (longlong)local_1c;
  *(undefined1 *)(local_res8[0x30] + 0x4d4) = 1;
  FUN_005fcd80(local_res8[0xf],L"Tahoma");
  FUN_005fce30(local_res8[0xf],8);
  FUN_0196a2b0(local_res8,2);
  *(undefined1 *)(local_res8 + 0x3b) = 4;
  *(undefined1 *)((longlong)local_res8 + 0x1d9) = 0;
  FUN_0196a300(local_res8,0xff00000f);
  FUN_0064dfb0(local_res8[0x30],1);
  local_res8[0x3c] = 0;
  local_res8[0x3d] = 0;
  *(undefined4 *)(local_res8 + 0x3e) = *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

