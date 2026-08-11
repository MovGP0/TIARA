/* Ghidra address: 0096f3a0 */
/* Ghidra symbol: FUN_0096f3a0 */


longlong FUN_0096f3a0(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  if (param_3 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004361b8,1,L"AOwner not specified.");
    FUN_004134c0(uVar3);
  }
  cVar2 = FUN_008ff6c0(param_4);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  cVar2 = FUN_00900140(param_7);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  cVar2 = FUN_00900490(param_6);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  FUN_008b85a0(local_res8,0,0);
  FUN_00414b90(local_res8 + 0x40,param_5);
  *(longlong *)(local_res8 + 0x60) = param_3;
  *(undefined1 *)(local_res8 + 0x48) = 0;
  FUN_00414520(local_res8 + 0x50);
  FUN_00414b90(local_res8 + 0x58,param_4);
  FUN_00414b90(local_res8 + 0x68,param_6);
  FUN_00414b90(local_res8 + 0x70,param_7);
  *(undefined1 *)(local_res8 + 0x4a) = 0;
  *(undefined1 *)(local_res8 + 0x49) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

