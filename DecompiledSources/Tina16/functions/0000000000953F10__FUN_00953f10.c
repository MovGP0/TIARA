/* Ghidra address: 00953f10 */
/* Ghidra symbol: FUN_00953f10 */


longlong *
FUN_00953f10(longlong *param_1,char param_2,undefined8 param_3,longlong param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  cVar2 = FUN_009009a0(param_6);
  if (cVar2 == '\0') {
    iVar3 = FUN_00416420(param_6,0);
    if (iVar3 != 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
      FUN_004134c0(uVar4);
    }
  }
  iVar3 = FUN_00416420(param_6,L"xmlns");
  if (iVar3 == 0) {
    iVar3 = FUN_00416420(param_5,L"http://www.w3.org/2000/xmlns/");
    if (iVar3 != 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar4);
    }
  }
  iVar3 = FUN_00416420(param_5,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00416420(param_6,0);
    if (iVar3 != 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar4);
    }
  }
  iVar3 = FUN_00416420(param_6,&DAT_009541e4);
  if (iVar3 == 0) {
    iVar3 = FUN_00416420(param_5,L"http://www.w3.org/XML/1998/namespace");
    if (iVar3 != 0) {
      uVar4 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar4);
    }
  }
  FUN_0094c4e0(local_res8,0,param_3);
  *(undefined2 *)(local_res8 + 0xf) = 0;
  (**(code **)(*local_res8 + 0xe0))(local_res8,1);
  FUN_00414b90(local_res8 + 0x10,param_5);
  local_res8[0x11] = param_4;
  FUN_00414b90(local_res8 + 0x12,param_6);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

