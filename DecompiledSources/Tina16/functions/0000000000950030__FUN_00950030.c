/* Ghidra address: 00950030 */
/* Ghidra symbol: FUN_00950030 */


longlong FUN_00950030(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined1 param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  uVar4 = FUN_00414520(&local_28);
  uVar5 = FUN_00414520(local_20);
  cVar2 = FUN_009479a0(param_5,uVar4,uVar5);
  if (cVar2 == '\0') {
    cVar2 = FUN_008ff6c0(param_5);
    if (cVar2 == '\0') {
      uVar4 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
      FUN_004134c0(uVar4);
    }
    else {
      uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar4);
    }
  }
  iVar3 = FUN_00416420(local_28,L"xmlns");
  if (iVar3 == 0) {
    iVar3 = FUN_00416420(param_4,L"http://www.w3.org/2000/xmlns/");
    if (iVar3 != 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar4);
    }
    *(undefined1 *)(local_res8 + 0x80) = 1;
  }
  else {
    iVar3 = FUN_00416420(param_5,L"xmlns");
    if (iVar3 == 0) {
      iVar3 = FUN_00416420(param_4,L"http://www.w3.org/2000/xmlns/");
      if (iVar3 != 0) {
        uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
        FUN_004134c0(uVar4);
      }
      *(undefined1 *)(local_res8 + 0x80) = 0;
    }
    else {
      iVar3 = FUN_00416420(param_4,L"http://www.w3.org/2000/xmlns/");
      if (iVar3 == 0) {
        uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
        FUN_004134c0(uVar4);
      }
      *(undefined1 *)(local_res8 + 0x80) = 2;
    }
  }
  iVar3 = FUN_00416420(param_4,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00416420(local_28,0);
    if (iVar3 != 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar4);
    }
  }
  iVar3 = FUN_00416420(local_28,&DAT_00950494);
  if (iVar3 == 0) {
    iVar3 = FUN_00416420(param_4,L"http://www.w3.org/XML/1998/namespace");
    if (iVar3 != 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar4);
    }
  }
  else {
    iVar3 = FUN_00416420(param_4,L"http://www.w3.org/XML/1998/namespace");
    if (iVar3 == 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar4);
    }
  }
  FUN_0094c4e0(local_res8,0,param_3);
  FUN_00414b90(local_res8 + 0x98,param_5);
  FUN_00414b90(local_res8 + 0x90,param_4);
  FUN_00414b90(local_res8 + 0xa8,local_28);
  FUN_00414b90(local_res8 + 0x88,local_20[0]);
  *(undefined1 *)(local_res8 + 0x40) = 1;
  FUN_00414520(local_res8 + 0x58);
  *(undefined1 *)(local_res8 + 0xb0) = param_6;
  *(undefined2 *)(local_res8 + 0x78) = 0;
  FUN_004145c0(&local_28,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

