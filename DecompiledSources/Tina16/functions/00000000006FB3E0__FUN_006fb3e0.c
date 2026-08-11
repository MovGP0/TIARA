/* Ghidra address: 006fb3e0 */
/* Ghidra symbol: FUN_006fb3e0 */


void FUN_006fb3e0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int local_64 [3];
  int local_58;
  int local_54;
  
  FUN_00655080(param_1);
  iVar1 = FUN_006d3e90();
  if (0x40046 < iVar1) {
    uVar2 = FUN_0064fca0(param_1,0x455,0,0);
    uVar6 = uVar2 | 1;
    iVar1 = FUN_006d3e90();
    if (0x50050 < iVar1) {
      if ((char)param_1[0xc9] == '\0') {
        uVar2 = uVar2 & 0xffffffef | 1;
      }
      else {
        uVar2 = uVar2 | 0x11;
      }
      if (((char)param_1[0x94] == '\0') || (*(char *)((longlong)param_1 + 0x4dd) == '\0')) {
        uVar6 = uVar2 & 0xfffffff7;
      }
      else {
        uVar6 = uVar2 | 8;
      }
    }
    FUN_0064fca0(param_1,0x454,0,uVar6);
  }
  param_1[0xa5] = 0;
  lVar3 = thunk_FUN_041715dd(0xd);
  if (lVar3 != 0) {
    lVar4 = thunk_FUN_040ef593(0);
    if (lVar4 != 0) {
      uVar5 = thunk_FUN_041a19a1(lVar4,lVar3);
      iVar1 = thunk_FUN_04172119(lVar4,local_64);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0xa7) = ((local_64[0] - local_58) - local_54) + 1;
      }
      thunk_FUN_041a19a1(lVar4,uVar5);
      thunk_FUN_041a9b5c(0,lVar4);
    }
  }
  FUN_006fd640(param_1);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

