/* Ghidra address: 0184c830 */
/* Ghidra symbol: FUN_0184c830 */


longlong FUN_0184c830(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_004d22d0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x151) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa8) = uVar2;
  FUN_004b67b0(uVar2,1);
  *(undefined1 *)(*(longlong *)(local_res8 + 0xa8) + 0x49) = 1;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xb8) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xc0) = uVar2;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(local_res8 + 0x148) = plVar3;
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  local_38 = 0;
  uVar2 = FUN_0184f010(&PTR_FUN_018400f8,1,local_res8,0);
  *(undefined8 *)(local_res8 + 0x128) = uVar2;
  FUN_00414ad0(local_res8 + 0x130,L"PascalScript");
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x140) = uVar2;
  *(undefined1 *)(local_res8 + 0x150) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

