/* Ghidra address: 0095e3e0 */
/* Ghidra symbol: FUN_0095e3e0 */


longlong FUN_0095e3e0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined1 param_10)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  FUN_0095d3c0(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x10) = 5;
  FUN_00414b90(local_res8 + 0x48,param_6);
  FUN_00414b90(local_res8 + 0x58,param_7);
  FUN_00414b90(local_res8 + 0x38,param_8);
  FUN_00414b90(local_res8 + 0x28,param_9);
  lVar4 = FUN_00410e60(&PTR_FUN_008f5158,1);
  *(longlong *)(local_res8 + 0x30) = lVar4;
  *(undefined1 *)(lVar4 + 0x10) = 0;
  cVar2 = FUN_0095e880(local_res8);
  if (cVar2 == '\0') {
    FUN_0095ea70(local_res8,param_5);
  }
  else {
    cVar2 = FUN_0095e880(local_res8);
    if (cVar2 == '\x01') {
      FUN_00414520(local_res8 + 0x50);
      *(undefined1 *)(local_res8 + 0x60) = 0;
    }
    else {
      FUN_00414b90(local_res8 + 0x50,param_5);
      *(undefined1 *)(local_res8 + 0x60) = 1;
    }
  }
  *(undefined1 *)(local_res8 + 0x40) = param_10;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

