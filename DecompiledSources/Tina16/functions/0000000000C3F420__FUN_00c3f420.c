/* Ghidra address: 00c3f420 */
/* Ghidra symbol: FUN_00c3f420 */


void FUN_00c3f420(undefined8 param_1,char param_2,char param_3,byte *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 != '\0') {
    uVar2 = (uint)*param_4 * 3 + 2;
    sVar1 = FUN_00c3f0d0(param_1,uVar2);
    if (sVar1 != -1) {
      *param_4 = 0;
      return;
    }
    sVar1 = FUN_00c3f0d0(param_1,(ulonglong)uVar2 % 3);
    if (sVar1 != -1) {
      return;
    }
  }
  iVar3 = (uint)(param_2 != '\0') + (uint)*param_4 * 3;
  sVar1 = FUN_00c3f0d0(param_1,iVar3);
  if (sVar1 == -1) {
    sVar1 = FUN_00c3f0d0(param_1,(ulonglong)(longlong)iVar3 % 3);
    if (sVar1 == -1) {
      sVar1 = FUN_00c3f0d0(param_1,(uint)(param_2 == '\0') + (uint)*param_4 * 3);
      if (sVar1 == -1) {
        FUN_00c3f0d0(param_1,param_2 == '\0');
      }
      else {
        *param_4 = 0;
      }
    }
  }
  else {
    *param_4 = 0;
  }
  return;
}

