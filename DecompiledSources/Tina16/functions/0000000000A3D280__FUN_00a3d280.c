/* Ghidra address: 00a3d280 */
/* Ghidra symbol: FUN_00a3d280 */


undefined4 FUN_00a3d280(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined7 uVar4;
  bool bVar5;
  
  if ((((param_2 < 0) || (iVar1 = (**(code **)(*param_1 + 0x60))(param_1), iVar1 + -1 < param_2)) ||
      (param_3 < 0)) || (iVar1 = (**(code **)(*param_1 + 0x48))(param_1), iVar1 + -1 < param_3)) {
    return 0;
  }
  lVar3 = FUN_00a39e90(param_1);
  uVar4 = (undefined7)((ulonglong)lVar3 >> 8);
  if (*(byte *)(lVar3 + 0x491) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(lVar3 + 0x491) & 0x1f) & 9U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar2 = FUN_00a3c750(param_1,param_2,param_3);
    return uVar2;
  }
  if (*(byte *)(lVar3 + 0x491) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(lVar3 + 0x491) & 0x1f) & 0x10U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar2 = FUN_00a3cb50(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = FUN_00a3ca70(param_1,param_2,param_3);
  return uVar2;
}

