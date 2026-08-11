/* Ghidra address: 00705700 */
/* Ghidra symbol: FUN_00705700 */


undefined8 FUN_00705700(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar2 == 0) {
LAB_0070574d:
    uVar3 = 1;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006a1278);
      if (cVar1 == '\0') goto LAB_0070574d;
    }
    uVar3 = 0;
  }
  return uVar3;
}

