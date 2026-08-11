/* Ghidra address: 00a67670 */
/* Ghidra symbol: FUN_00a67670 */


byte FUN_00a67670(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar4;
  int iVar5;
  bool bVar6;
  byte local_39 [9];
  ulonglong uVar3;
  
  local_39[0] = 0;
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = (int)*(undefined8 *)(param_2 - 8);
  }
  iVar4 = 0;
  uVar3 = param_2;
  if (iVar5 - 1U < 0x80000000) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x28) == 0) {
        bVar1 = *(byte *)(param_2 + (longlong)iVar4 * 0x10);
        if (bVar1 < 8) {
          uVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << (bVar1 & 0x1f);
          uVar3 = (ulonglong)uVar2;
          bVar6 = (uVar2 & 0x41) != 0;
        }
        else {
          bVar6 = false;
        }
        local_39[0] = bVar6 ^ *(byte *)(param_2 + 1 + (longlong)iVar4 * 0x10);
      }
      else {
        uVar3 = *(ulonglong *)(param_1 + 0x80);
        (**(code **)(*(longlong *)(param_1 + 0x80) + 0x28))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x30),uVar3,
                   param_2 + (longlong)iVar4 * 0x10,local_39);
      }
      if (local_39[0] != 0) {
        return local_39[0];
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return local_39[0];
}

