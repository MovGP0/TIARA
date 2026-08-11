/* Ghidra address: 0111d570 */
/* Ghidra symbol: FUN_0111d570 */


undefined8 FUN_0111d570(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  *(undefined1 *)(param_1 + 0x2d) = 5;
  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x163) = 0xd;
  uVar2 = *(ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) +
           (longlong)(*(int *)(*(longlong *)(param_1 + 0x40) + 0x150) + 1) * 2);
  if (uVar2 < 0x100) {
    bVar5 = ((byte)(&DAT_0111d630)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) & 1)
            != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
    *piVar1 = *piVar1 + 1;
  }
  uVar2 = *(ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) +
           (longlong)(*(int *)(*(longlong *)(param_1 + 0x40) + 0x150) + 1) * 2);
  if (uVar2 < 0x100) {
    bVar5 = ((byte)(&DAT_0111d650)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) & 1)
            != 0;
    uVar3 = (ulonglong)CONCAT11((char)(uVar2 >> 8),bVar5);
  }
  else {
    uVar3 = 0;
    bVar5 = false;
  }
  if (bVar5) {
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x150);
    *piVar1 = *piVar1 + 1;
    uVar4 = FUN_0111d4e0();
  }
  return uVar4;
}

