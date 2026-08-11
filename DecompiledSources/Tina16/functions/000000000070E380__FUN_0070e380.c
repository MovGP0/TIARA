/* Ghidra address: 0070e380 */
/* Ghidra symbol: FUN_0070e380 */


undefined1 FUN_0070e380(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((lVar3 != 0) && (cVar1 = FUN_004113d0(lVar3,&PTR_FUN_006c0710), cVar1 != '\0')) {
    return *(undefined1 *)(lVar3 + 0x4d1);
  }
  lVar3 = FUN_00786090(param_1);
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    uVar4 = FUN_00786090(param_1);
    uVar5 = thunk_FUN_04118143(uVar4,0xfffffff0);
    if ((uVar5 & 0x40) == 0x40) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

