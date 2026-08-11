/* Ghidra address: 00807a10 */
/* Ghidra symbol: FUN_00807a10 */


longlong FUN_00807a10(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar3 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar3 = local_30;
  }
  local_30 = puVar3;
  FUN_004d22d0(local_res8,0,param_3);
  puVar2 = PTR_PTR_02002250;
  *(longlong *)(PTR_PTR_02002250 + 8) = local_res8;
  *(code **)puVar2 = FUN_00808230;
  puVar2 = PTR_PTR_020022a8;
  *(longlong *)(PTR_PTR_020022a8 + 8) = local_res8;
  *(code **)puVar2 = FUN_00808250;
  FUN_00808270(local_res8);
  uVar5 = thunk_FUN_03fe657d(0);
  *(undefined8 *)(local_res8 + 0x90) = uVar5;
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xa8) = uVar5;
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xb0) = uVar5;
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xb8) = uVar5;
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xc0) = uVar5;
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xf8) = uVar5;
  local_20 = thunk_FUN_040ef593(0);
  uVar4 = thunk_FUN_03e5bd07(local_20,0x5a);
  *(undefined4 *)(local_res8 + 0x98) = uVar4;
  thunk_FUN_041a9b5c(0,local_20);
  thunk_FUN_041e8a85(0,0,FUN_007ffab0,*(undefined8 *)(local_res8 + 0xc0));
  uVar5 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x108) = uVar5;
  uVar5 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x110) = uVar5;
  uVar5 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x100) = uVar5;
  uVar5 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x118) = uVar5;
  uVar5 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x120) = uVar5;
  FUN_00808a90(local_res8);
  lVar1 = *(longlong *)(local_res8 + 0x108);
  *(longlong *)(lVar1 + 0x10) = local_res8;
  *(code **)(lVar1 + 8) = FUN_008087e0;
  lVar1 = *(longlong *)(local_res8 + 0x110);
  *(longlong *)(lVar1 + 0x10) = local_res8;
  *(code **)(lVar1 + 8) = FUN_008087e0;
  lVar1 = *(longlong *)(local_res8 + 0x100);
  *(longlong *)(lVar1 + 0x10) = local_res8;
  *(code **)(lVar1 + 8) = FUN_008087e0;
  lVar1 = *(longlong *)(local_res8 + 0x118);
  *(longlong *)(lVar1 + 0x10) = local_res8;
  *(code **)(lVar1 + 8) = FUN_008087e0;
  lVar1 = *(longlong *)(local_res8 + 0x120);
  *(longlong *)(lVar1 + 0x10) = local_res8;
  *(code **)(lVar1 + 8) = FUN_008087e0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

