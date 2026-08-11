/* Ghidra address: 00bd4db0 */
/* Ghidra symbol: FUN_00bd4db0 */


void FUN_00bd4db0(longlong param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = 0;
  if (param_2 != (ushort *)0x0) {
    iVar1 = *(int *)(param_2 + -2);
  }
  if ((iVar1 == 1) && (uVar2 = (uint)*param_2, uVar2 < 0x80)) {
    if (*(int *)(param_1 + 0x658 + (ulonglong)uVar2 * 4) == 0) {
      uVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x20));
      uVar3 = FUN_00bd19b0(uVar4,param_2);
      *(undefined4 *)(param_1 + 0x658 + (ulonglong)uVar2 * 4) = uVar3;
    }
  }
  else {
    uVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x20));
    FUN_00bd19b0(uVar4,param_2);
  }
  return;
}

