/* Ghidra address: 0095ed40 */
/* Ghidra symbol: FUN_0095ed40 */


longlong FUN_0095ed40(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     byte param_5,undefined1 param_6)

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
  FUN_0095d3c0(local_res8,0,param_3,param_4);
  *(byte *)(local_res8 + 0x38) = param_5;
  if (param_5 < 2) {
    *(undefined1 *)(local_res8 + 0x29) = 0;
  }
  else if ((byte)(param_5 - 2) < 3) {
    *(undefined1 *)(local_res8 + 0x29) = 5;
  }
  uVar3 = FUN_00957190(&PTR_FUN_00910da8,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar3;
  *(undefined1 *)(local_res8 + 0x10) = 4;
  *(undefined1 *)(local_res8 + 0x28) = param_6;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

