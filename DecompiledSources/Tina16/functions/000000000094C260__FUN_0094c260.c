/* Ghidra address: 0094c260 */
/* Ghidra symbol: FUN_0094c260 */


void FUN_0094c260(undefined8 param_1,undefined **param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == &PTR_FUN_008b3d68) {
    uVar1 = FUN_0044d490(&PTR_FUN_00900d18,0x8b3d01,L"EHierarchy request error.");
    FUN_004134c0(uVar1);
  }
  else if (param_2 == &PTR_FUN_008b3eb8) {
    uVar1 = FUN_0044d490(&PTR_FUN_00901108,&UNK_008b3e01,L"No modification allowed.");
    FUN_004134c0(uVar1);
  }
  else if (param_2 == &PTR_FUN_008b4010) {
    uVar1 = FUN_0044d490(&PTR_FUN_009013a8,0x8b4001,L"Node not specified.");
    FUN_004134c0(uVar1);
  }
  else if (param_2 == &PTR_FUN_008b4150) {
    uVar1 = FUN_0044d490(&PTR_FUN_00901268,0x8b4101,L"Node not found.");
    FUN_004134c0(uVar1);
  }
  else if (param_2 == &PTR_FUN_008b4290) {
    uVar1 = FUN_0044d490(&PTR_FUN_00900e68,&UNK_008b4201,L"Wrong document.");
    FUN_004134c0(uVar1);
  }
  else {
    FUN_00410ae0(param_2,&local_10);
    uVar1 = FUN_0044d490(param_2,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

