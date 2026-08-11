/* Ghidra address: 01ba8a80 */
/* Ghidra symbol: FUN_01ba8a80 */


void FUN_01ba8a80(longlong param_1)

{
  uint uVar1;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong local_20;
  ulonglong uVar2;
  
  local_20 = 0;
  uVar2 = (ulonglong)*(byte *)(param_1 + 0x7c0);
  uVar1 = (uint)*(byte *)(param_1 + 0x7c0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4c0);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4e0) + -1;
  if (iVar4 <= iVar5) {
    iVar5 = (iVar5 - iVar4) + 1;
    do {
      if ((char)uVar2 == '\0') {
LAB_01ba8af0:
        uVar2 = 0;
      }
      else {
        uVar3 = FUN_0084e320(*(undefined8 *)(param_1 + 0x6f0),&local_20,1,iVar4);
        if (local_20 == 0) goto LAB_01ba8af0;
        uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      uVar1 = (uint)uVar2;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),uVar1);
  FUN_00414480(&local_20);
  return;
}

