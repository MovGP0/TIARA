/* Ghidra address: 0104e010 */
/* Ghidra symbol: FUN_0104e010 */


undefined4 FUN_0104e010(undefined8 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar2 = thunk_FUN_03a65bf1(DAT_0202f420[0xd7],param_1,param_2,(longlong)param_3,(longlong)param_4)
  ;
  if (param_2 == 0xf) {
    cVar1 = (**(code **)(*DAT_0202f420 + 0x2e8))(DAT_0202f420);
    if (cVar1 != '\0') {
      iVar3 = (**(code **)(*DAT_0202f420 + 0x2e0))(DAT_0202f420);
      if (iVar3 == -1) {
        uVar4 = (**(code **)(*DAT_0202f420 + 0x2f0))(DAT_0202f420);
      }
      else {
        uVar4 = (**(code **)(*DAT_0202f420 + 0x2e0))(DAT_0202f420);
      }
      uVar5 = (**(code **)(*DAT_0202f420 + 0x2f8))(DAT_0202f420,2);
      FUN_010a7d40(uVar5,uVar4,1);
    }
  }
  return uVar2;
}

