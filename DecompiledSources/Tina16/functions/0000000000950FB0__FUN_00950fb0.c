/* Ghidra address: 00950fb0 */
/* Ghidra symbol: FUN_00950fb0 */


longlong FUN_00950fb0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  cVar2 = FUN_008ff6c0(param_4);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  FUN_0094c4e0(local_res8,0,param_3);
  FUN_00414b90(local_res8 + 0xb0,param_4);
  FUN_00414520(local_res8 + 0x58);
  FUN_00414520(local_res8 + 0xb8);
  uVar3 = FUN_008ba9b0(&PTR_FUN_008b7070,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar3;
  uVar3 = FUN_0099f820(&PTR_FUN_00935ac0,1);
  *(undefined8 *)(local_res8 + 0x98) = uVar3;
  uVar3 = FUN_0099f820(&PTR_FUN_00935ac0,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar3;
  local_38 = 4;
  local_30 = 0;
  uVar3 = FUN_0094b680(&PTR_FUN_00907700,1,local_res8,*(undefined8 *)(local_res8 + 0x88));
  *(undefined8 *)(local_res8 + 0x80) = uVar3;
  *(undefined2 *)(local_res8 + 0x78) = 0x2fa;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

