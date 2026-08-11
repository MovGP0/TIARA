/* Ghidra address: 0096f150 */
/* Ghidra symbol: FUN_0096f150 */


longlong FUN_0096f150(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
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
  FUN_008b85a0(local_res8,0,0);
  *(longlong *)(local_res8 + 0x60) = param_3;
  *(undefined1 *)(local_res8 + 0x49) = 1;
  *(undefined1 *)(local_res8 + 0x4a) = 0;
  *(undefined1 *)(local_res8 + 0x48) = 1;
  FUN_00947c70(&local_28,param_5);
  FUN_00414b90(local_res8 + 0x50,local_28);
  FUN_00414b90(local_res8 + 0x58,param_4);
  FUN_00414520(local_res8 + 0x68);
  FUN_00414520(local_res8 + 0x70);
  FUN_00414520(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

