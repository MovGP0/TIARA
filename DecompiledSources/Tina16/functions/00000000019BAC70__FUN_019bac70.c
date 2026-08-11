/* Ghidra address: 019bac70 */
/* Ghidra symbol: FUN_019bac70 */


longlong FUN_019bac70(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00660290(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) & 0xffffffbf;
  *(undefined4 *)(local_res8 + 0x4bc) = 0x20;
  FUN_0064cc50(local_res8,0x20);
  FUN_0064cbf0(local_res8,*(undefined4 *)(local_res8 + 0x4bc));
  *(undefined2 *)(local_res8 + 0x49c) = 0x32;
  uVar2 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
  *(undefined8 *)(local_res8 + 0x4b0) = uVar2;
  FUN_007d64c0(uVar2,6);
  FUN_007d7850(*(undefined8 *)(local_res8 + 0x4b0),3);
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x4c0) = uVar2;
  FUN_0060bbf0(uVar2,7);
  uVar2 = FUN_00742bf0(&PTR_FUN_007334d8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4a8) = uVar2;
  FUN_00742ed0(uVar2,*(undefined2 *)(local_res8 + 0x49c));
  FUN_00742eb0(*(undefined8 *)(local_res8 + 0x4a8),0);
  local_28 = local_res8;
  local_30 = FUN_019bb3f0;
  FUN_00742ef0(*(undefined8 *)(local_res8 + 0x4a8),&local_30);
  *(undefined1 *)(local_res8 + 0x499) = 0;
  *(undefined1 *)(local_res8 + 0x49a) = 1;
  *(undefined1 *)(local_res8 + 0x49b) = 0;
  *(undefined1 *)(local_res8 + 0x4c8) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

