/* Ghidra address: 0094fd50 */
/* Ghidra symbol: FUN_0094fd50 */


undefined8 FUN_0094fd50(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_20;
  
  local_20 = 0;
  if (-1 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if ((param_3 <= iVar1) && (-1 < param_4)) goto LAB_0094fdb8;
  }
  uVar3 = FUN_0044d490(&PTR_FUN_00900bd8,1,L"Index size error.");
  FUN_004134c0(uVar3);
LAB_0094fdb8:
  iVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  iVar1 = iVar2 - param_3;
  if (param_4 < iVar2 - param_3) {
    iVar1 = param_4;
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_20);
  lVar4 = FUN_00415f70(local_20);
  FUN_004147a0(param_2,lVar4 + (longlong)param_3 * 2,iVar1);
  FUN_00414520(&local_20);
  return param_2;
}

