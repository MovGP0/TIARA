/* Ghidra address: 0074a0f0 */
/* Ghidra symbol: FUN_0074a0f0 */


longlong FUN_0074a0f0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined **local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00660290(local_res8,0,param_3);
  FUN_0064cbf0(local_res8,0x96);
  FUN_0064cc50(local_res8,0x96);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x498) = uVar2;
  uVar2 = FUN_00749bd0(&PTR_FUN_00749850,1,uVar2,local_res8);
  *(undefined8 *)(local_res8 + 0x4a0) = uVar2;
  *(undefined4 *)(local_res8 + 0x4a8) = 0xffffffff;
  FUN_0041ddd0(&local_28,PTR_PTR_02005b18);
  (**(code **)(**(longlong **)(local_res8 + 0x4a0) + 0x78))
            (*(longlong **)(local_res8 + 0x4a0),local_28);
  FUN_0074a520(local_res8,0);
  *(byte *)(local_res8 + 0x58) = *(byte *)(local_res8 + 0x58) & 0xfe;
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x40000;
  if (DAT_01e07cf8 == '\0') {
    local_30 = &PTR_FUN_0073a900;
    FUN_004a0ae0(&local_30,0);
    DAT_01e07cf8 = '\x01';
  }
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

