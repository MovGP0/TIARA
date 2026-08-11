/* Ghidra address: 00960cb0 */
/* Ghidra symbol: FUN_00960cb0 */


void FUN_00960cb0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (param_2 == 0) {
    return;
  }
  cVar1 = FUN_008f4b80(param_1);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)*param_1)(param_1);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_008d3958);
    if (((cVar1 == '\0') || (iVar2 = FUN_008e69b0(&PTR_FUN_008d3958,param_2), iVar2 != -1)) ||
       (iVar2 = FUN_008e69b0(&PTR_FUN_008d40d8,param_2), iVar2 != -1)) {
      uVar3 = (**(code **)*param_1)(param_1);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_008d3d18);
      if (((cVar1 == '\0') || (iVar2 = FUN_008e69b0(&PTR_FUN_008d3d18,param_2), iVar2 != -1)) ||
         (iVar2 = FUN_008e69b0(&PTR_FUN_008d4498,param_2), iVar2 != -1)) {
        uVar3 = (**(code **)*param_1)(param_1);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_008d3548);
        if ((cVar1 == '\0') || (iVar2 = FUN_008e69b0(&PTR_FUN_008d3548,param_2), iVar2 != -1))
        goto LAB_00960dc6;
      }
    }
    uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,L"Declared encoding does not match byte order mark.");
    FUN_004134c0(uVar3);
  }
LAB_00960dc6:
  iVar2 = FUN_0043e420(param_2,PTR_u_UTF_16_01e32948);
  if (iVar2 == 0) {
    cVar1 = FUN_008f4b80(param_1);
    if (cVar1 == '\0') {
      FUN_008f4e40(param_1,PTR_u_UTF_16BE_01e32950);
    }
    else {
      uVar3 = (**(code **)*param_1)(param_1);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_008d3958);
      if (cVar1 == '\0') {
        uVar3 = (**(code **)*param_1)(param_1);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_008d3d18);
        if (cVar1 == '\0') {
          uVar3 = FUN_0044d490(&PTR_FUN_00436080,1,
                               L"Declared encoding does not match byte order mark.");
          FUN_004134c0(uVar3);
        }
      }
    }
  }
  else {
    FUN_008f4e40(param_1,param_2);
  }
  return;
}

