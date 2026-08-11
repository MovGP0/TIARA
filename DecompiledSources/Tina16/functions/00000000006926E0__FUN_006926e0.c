/* Ghidra address: 006926e0 */
/* Ghidra symbol: FUN_006926e0 */


bool FUN_006926e0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 != 0) && (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_0066f8b0), cVar1 != '\0')) {
    uVar2 = FUN_006838c0(lVar4);
    return (bool)uVar2;
  }
  lVar4 = FUN_00786090(param_1);
  if (lVar4 == 0) {
    bVar6 = false;
  }
  else {
    uVar5 = FUN_00786090(param_1);
    iVar3 = thunk_FUN_041b2403(uVar5,0x157,0,0);
    bVar6 = iVar3 != 0;
  }
  return bVar6;
}

