/* Ghidra address: 00952d10 */
/* Ghidra symbol: FUN_00952d10 */


void FUN_00952d10(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00901108,1,L"No modification allowed error.");
    FUN_004134c0(uVar3);
  }
  (**(code **)(*param_1 + 0x150))(param_1,local_20);
  iVar2 = FUN_00416420(local_20[0],L"http://www.w3.org/XML/1998/namespace");
  if (iVar2 == 0) {
    iVar2 = FUN_00416420(param_2,&DAT_0095305c);
    if (iVar2 != 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar3);
    }
  }
  else {
    (**(code **)(*param_1 + 0x150))(param_1,&local_28);
    iVar2 = FUN_00416420(local_28,0);
    if (iVar2 == 0) {
      iVar2 = FUN_00416420(param_2,0);
      if (iVar2 != 0) {
        uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
        FUN_004134c0(uVar3);
      }
    }
    iVar2 = FUN_00416420(param_2,&DAT_0095305c);
    if (iVar2 == 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar3);
    }
    iVar2 = FUN_00416420(param_2,L"xmlns");
    if (iVar2 == 0) {
      uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar3);
    }
  }
  iVar2 = FUN_00416420(param_2,0);
  if (iVar2 == 0) {
    FUN_00414520(param_1 + 0x17);
    (**(code **)(*param_1 + 0x148))(param_1,&local_30);
    FUN_00414b90(param_1 + 0x16,local_30);
  }
  else {
    cVar1 = FUN_008ff6c0(param_2);
    if (cVar1 == '\0') {
      uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
      FUN_004134c0(uVar3);
    }
    cVar1 = FUN_009009a0(param_2);
    if (cVar1 == '\0') {
      uVar3 = FUN_0044d490(&PTR_FUN_00901770,1,L"Namespace error.");
      FUN_004134c0(uVar3);
    }
    FUN_00414b90(param_1 + 0x17,param_2);
    (**(code **)(*param_1 + 0x148))(param_1,&local_38);
    FUN_00416310(param_1 + 0x16,3,param_2,&LAB_009530e8,local_38);
  }
  FUN_004145c0(&local_38,4);
  return;
}

