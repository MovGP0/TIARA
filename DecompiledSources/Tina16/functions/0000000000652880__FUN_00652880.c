/* Ghidra address: 00652880 */
/* Ghidra symbol: FUN_00652880 */


longlong FUN_00652880(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  FUN_0064bb10(local_res8,0,param_3);
  local_28 = local_res8;
  local_30 = FUN_006560a0;
  uVar2 = FUN_004d6210(&local_30);
  *(undefined8 *)(local_res8 + 0x470) = uVar2;
  uVar2 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  *(undefined8 *)(local_res8 + 0x330) = uVar2;
  FUN_005fdab0(uVar2,*(undefined4 *)(local_res8 + 200));
  *(undefined1 *)(local_res8 + 0x478) = 0;
  *(undefined1 *)(local_res8 + 0x395) = 1;
  *(undefined1 *)(local_res8 + 0x394) = 1;
  *(undefined4 *)(local_res8 + 0x380) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x348) = 3;
  *(undefined1 *)(local_res8 + 0x392) = 0;
  *(undefined1 *)(local_res8 + 0x31a) = 0xf;
  *(undefined1 *)(local_res8 + 0x31b) = 2;
  *(undefined1 *)(local_res8 + 0x31c) = 1;
  *(undefined4 *)(local_res8 + 800) = 1;
  *(undefined1 *)(local_res8 + 0x298) = 1;
  lVar3 = FUN_00665950(&PTR_FUN_0063a520,1,local_res8);
  *(longlong *)(local_res8 + 0x328) = lVar3;
  *(longlong *)(lVar3 + 0x28) = local_res8;
  *(code **)(lVar3 + 0x20) = FUN_0065ece0;
  *(undefined1 *)(local_res8 + 0x396) = 0;
  *(undefined1 *)(local_res8 + 0x368) = 2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

