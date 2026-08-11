/* Ghidra address: 006f8ec0 */
/* Ghidra symbol: FUN_006f8ec0 */


bool FUN_006f8ec0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  lVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar2 == 0) {
    bVar4 = (char)param_1[0xa2] == '\0';
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006a1278);
    if (cVar1 == '\0') {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}

