/* Ghidra address: 0065a7a0 */
/* Ghidra symbol: FUN_0065a7a0 */


void FUN_0065a7a0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *(undefined8 *)(param_2 + 0x18) = 1;
  FUN_0065de70(param_1,*(undefined2 *)(param_2 + 8));
  cVar1 = FUN_0065a6d0(param_1,param_2);
  if (cVar1 != '\0') {
    return;
  }
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) goto LAB_0065a8b9;
  lVar3 = FUN_0064fca0(param_1,0xb02e,*(undefined2 *)(param_2 + 8),param_1);
  if (lVar3 != 0) {
    return;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)*(ushort *)(param_2 + 8);
  if (uVar4 < 0x1c) {
    if ((uVar4 == 0x1b) || (uVar4 == 3)) {
LAB_0065a856:
      uVar6 = 4;
    }
    else if (uVar4 == 9) {
      uVar6 = 2;
    }
    else if (uVar4 == 0xd) goto LAB_0065a856;
  }
  else if (uVar4 - 0x25 < 4) {
    uVar6 = 1;
  }
  else if (uVar4 - 0x25 == 6) goto LAB_0065a856;
  if (((uVar6 != 0) &&
      (lVar3 = FUN_0064fca0(param_1,0xb01e,*(undefined2 *)(param_2 + 8),0), lVar3 == 0)) &&
     (uVar2 = FUN_0064fca0(param_1,0x87,0,0), (uVar6 & uVar2) == 0)) {
    uVar5 = FUN_007f9b70(param_1,1);
    lVar3 = FUN_0064fca0(uVar5,0xb005,*(undefined2 *)(param_2 + 8),
                         (longlong)*(int *)(param_2 + 0x10));
    if (lVar3 != 0) {
      return;
    }
  }
LAB_0065a8b9:
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

