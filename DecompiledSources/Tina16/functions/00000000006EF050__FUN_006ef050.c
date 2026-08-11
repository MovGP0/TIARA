/* Ghidra address: 006ef050 */
/* Ghidra symbol: FUN_006ef050 */


void FUN_006ef050(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar2 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x30));
  if (iVar2 != 0) {
    FUN_00414ad0(param_1 + 0x30,param_2);
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x510) == '\0') {
      uVar4 = FUN_006eeda0(param_1);
      uVar3 = FUN_006ef6e0(param_1);
      FUN_00611ec0(uVar4,uVar3,0,0xffffffffffffffff);
    }
    uVar4 = FUN_006eed60(param_1);
    cVar1 = FUN_006f37d0(uVar4);
    if (cVar1 == '\0') {
      bVar6 = false;
    }
    else {
      lVar5 = FUN_006eed60(param_1);
      bVar6 = 0 < *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x500) + 0x10) + 0x10);
    }
    if (bVar6) {
      uVar4 = FUN_006eed60(param_1);
      lVar5 = FUN_006f6ca0(uVar4,0);
      if (0x7fffffff < *(uint *)(lVar5 + 0x38)) {
        uVar4 = FUN_006eed60(param_1);
        FUN_006f74d0(uVar4);
      }
    }
    lVar5 = FUN_006eed60(param_1);
    if (*(byte *)(lVar5 + 0x4d9) < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (*(byte *)(lVar5 + 0x4d9) & 0x1f) &
              0xcU) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      uVar4 = FUN_006eed60(param_1);
      FUN_006f67c0(uVar4);
    }
  }
  return;
}

