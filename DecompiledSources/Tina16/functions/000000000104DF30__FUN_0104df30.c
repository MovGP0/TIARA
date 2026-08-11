/* Ghidra address: 0104df30 */
/* Ghidra symbol: FUN_0104df30 */


undefined4 FUN_0104df30(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar2 = thunk_FUN_03a65bf1(DAT_0202f420[0xd6],param_1,param_2,param_3,param_4);
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
      uVar5 = (**(code **)(*DAT_0202f420 + 0x2f8))(DAT_0202f420,1);
      FUN_010a7d40(uVar5,uVar4,1);
    }
  }
  return uVar2;
}

