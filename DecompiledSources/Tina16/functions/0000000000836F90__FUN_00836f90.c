/* Ghidra address: 00836f90 */
/* Ghidra symbol: FUN_00836f90 */


undefined8 FUN_00836f90(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x4d8);
  iVar6 = 0;
  if (lVar2 != 0) {
    iVar6 = *(int *)(lVar2 + -4);
  }
  if (*(int *)(param_1 + 0x90) < iVar6) {
    uVar5 = *(ushort *)
             (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x4d8) + -2 +
             (longlong)*(int *)(param_1 + 0x90) * 2);
    if ((ushort)(uVar5 - 0x61) < 0x1a) {
      uVar5 = uVar5 & 0xffdf;
    }
    uVar1 = *(ushort *)
             (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x4d8) + -2 +
             (longlong)(*(int *)(param_1 + 0x90) + 1) * 2);
    uVar4 = uVar1;
    if ((ushort)(uVar1 - 0x61) < 0x1a) {
      uVar4 = uVar1 & 0xffdf;
    }
    bVar7 = uVar5 == uVar4;
    uVar3 = (ulonglong)CONCAT11((char)(uVar1 >> 8),bVar7);
  }
  else {
    uVar3 = 0;
    bVar7 = false;
  }
  return CONCAT71((int7)(uVar3 >> 8),!bVar7);
}

