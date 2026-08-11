/* Ghidra address: 01716240 */
/* Ghidra symbol: FUN_01716240 */


longlong FUN_01716240(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01710d00(local_res8 + 0x10);
  FUN_01710d00(local_res8 + 0x18);
  FUN_01710d00(local_res8 + 0x20);
  FUN_01710d00(local_res8 + 0x28);
  FUN_01710d00(local_res8 + 0x30);
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong *)(local_res8 + 0x98) = lVar2;
  *(undefined2 *)(lVar2 + 0x30) = 0x7c;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x68) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x78) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar3;
  FUN_004b67b0(uVar3,1);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar3;
  FUN_004b67b0(uVar3,1);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar3;
  uVar3 = FUN_0171c3f0(&PTR_FUN_0170f9c8,1,0);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

