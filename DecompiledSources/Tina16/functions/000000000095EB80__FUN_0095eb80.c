/* Ghidra address: 0095eb80 */
/* Ghidra symbol: FUN_0095eb80 */


longlong FUN_0095eb80(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  cVar2 = FUN_008ff6c0(param_4);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  cVar2 = FUN_00900490(param_5);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  cVar2 = FUN_00900140(param_6);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  FUN_0095d3c0(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x10) = 6;
  FUN_00414b90(local_res8 + 0x30,param_5);
  FUN_00414b90(local_res8 + 0x38,param_6);
  *(undefined1 *)(local_res8 + 0x28) = param_7;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

