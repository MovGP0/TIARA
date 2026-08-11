/* Ghidra address: 0096de00 */
/* Ghidra symbol: FUN_0096de00 */


undefined4 FUN_0096de00(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  lVar2 = (**(code **)*param_1)(param_1);
  if (0 < lVar2) {
    uVar3 = FUN_0044d490(&PTR_FUN_00471da0,1,L"Byte order mark only allowed at output start.");
    FUN_004134c0(uVar3);
  }
  local_1c = 0;
  lVar2 = param_1[6];
  cVar1 = FUN_004113d0(lVar2,&PTR_FUN_008d3958);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_008d3d18);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(lVar2,&PTR_FUN_008d4fe8);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(lVar2,&PTR_FUN_008d5358);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(lVar2,&PTR_FUN_008d3548);
          if (cVar1 != '\0') {
            local_1c = 3;
            (**(code **)(*param_1 + 0x10))(param_1,&DAT_01e32a42,3);
          }
        }
        else {
          local_1c = 2;
          (**(code **)(*param_1 + 0x10))(param_1,&DAT_01e32a47,2);
        }
      }
      else {
        local_1c = 2;
        (**(code **)(*param_1 + 0x10))(param_1,&DAT_01e32a45,2);
      }
    }
    else {
      local_1c = 2;
      (**(code **)(*param_1 + 0x10))(param_1,&DAT_01e32a47,2);
    }
  }
  else {
    local_1c = 2;
    (**(code **)(*param_1 + 0x10))(param_1,&DAT_01e32a45,2);
  }
  return local_1c;
}

