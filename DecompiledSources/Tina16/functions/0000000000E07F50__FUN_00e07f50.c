/* Ghidra address: 00e07f50 */
/* Ghidra symbol: FUN_00e07f50 */


undefined8 FUN_00e07f50(longlong param_1,int *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x34) = 0;
  while ((0 < *(int *)(param_1 + 0x1058) &&
         (*(int *)(param_1 + 0x2058 +
                  (longlong)*(int *)(param_1 + 0x1058 + (longlong)*(int *)(param_1 + 0x1058) * 4) *
                  4) == 0))) {
    *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + -1;
  }
  if (*(int *)(param_1 + 0x1058) < 1) {
    FUN_00e07c00(param_1,0);
    *(undefined2 *)(param_1 + 0x2e) = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar4 = (undefined1)*(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4);
    }
    *(undefined1 *)(param_1 + 0x245c) = uVar4;
    *param_2 = *(int *)(param_1 + 0x1058 + (longlong)*(int *)(param_1 + 0x1058) * 4);
    FUN_00e07c00(param_1,*(undefined4 *)(param_1 + 0x2058 + (longlong)*param_2 * 4));
    *(undefined4 *)(param_1 + 0x2058 + (longlong)*param_2 * 4) = 0;
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    iVar5 = 0;
    if (uVar2 != 0) {
      iVar5 = *(int *)(uVar2 - 4);
    }
    if (iVar5 < 1) {
      *(undefined2 *)(param_1 + 0x2e) = 0;
    }
    else {
      iVar5 = 0;
      if (uVar2 != 0) {
        iVar5 = *(int *)(uVar2 - 4);
      }
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x20) + -2 + (longlong)iVar5 * 2);
      uVar2 = (ulonglong)uVar1;
      *(ushort *)(param_1 + 0x2e) = uVar1;
    }
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar3;
}

