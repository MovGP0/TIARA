/* Ghidra address: 009535d0 */
/* Ghidra symbol: FUN_009535d0 */


longlong FUN_009535d0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  cVar2 = FUN_009005e0(param_4);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  FUN_0094c4e0(local_res8,0,param_3);
  FUN_00414b90(local_res8 + 0x80,param_4);
  FUN_00414520(local_res8 + 0x58);
  *(undefined2 *)(local_res8 + 0x78) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

