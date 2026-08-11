/* Ghidra address: 00877b30 */
/* Ghidra symbol: FUN_00877b30 */


undefined8 * FUN_00877b30(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_3 != 0) {
    iVar4 = *(int *)(param_3 + -4);
  }
  iVar1 = 0;
  if (param_4 != 0) {
    iVar1 = *(int *)(param_4 + -4);
  }
  if (iVar1 == iVar4) {
    FUN_00414ad0(param_1);
    iVar1 = FUN_004170c0(param_3,*param_1,1);
    if (0 < iVar1) {
      FUN_00414e00(param_1);
      do {
        uVar2 = FUN_00416740(param_4);
        lVar3 = FUN_00414de0(param_1);
        FUN_00409a70(uVar2,lVar3 + -2 + (longlong)iVar1 * 2,(longlong)(iVar4 * 2));
        iVar1 = FUN_004170c0(param_3,*param_1,iVar1 + iVar4);
      } while (iVar1 != 0);
    }
  }
  else {
    FUN_00450070(param_1,param_2,param_3,param_4,1);
  }
  return param_1;
}

