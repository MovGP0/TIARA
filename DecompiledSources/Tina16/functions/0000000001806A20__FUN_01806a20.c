/* Ghidra address: 01806a20 */
/* Ghidra symbol: FUN_01806a20 */


void FUN_01806a20(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)param_2;
  if ((iVar2 < 0) || (*(int *)(param_1[6] + 0x10) < iVar2)) {
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    iVar2 = (int)uVar3;
    param_1 = (longlong *)FUN_0044d490(&PTR_FUN_004334c0,uVar3,L"Wide String Out of Bounds");
    FUN_004134c0();
  }
  if (iVar2 < *(int *)(param_1[6] + 0x10)) {
    lVar1 = FUN_004aeac0(param_1[6]);
    if (lVar1 != 0) {
      FUN_00414b90(lVar1,param_3);
    }
  }
  else {
    (**(code **)(*param_1 + 0x70))(param_1,param_3);
  }
  return;
}

