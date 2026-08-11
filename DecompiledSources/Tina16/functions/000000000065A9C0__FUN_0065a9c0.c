/* Ghidra address: 0065a9c0 */
/* Ghidra symbol: FUN_0065a9c0 */


void FUN_0065a9c0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_2 + 0x18) = 1;
  cVar1 = FUN_0065a6d0(param_1,param_2);
  if (cVar1 != '\0') {
    return;
  }
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    lVar2 = FUN_0064fca0(param_1,0xb02e,*(undefined2 *)(param_2 + 8),param_1);
    if (lVar2 != 0) {
      return;
    }
    uVar3 = FUN_007f9b70(param_1,1);
    lVar2 = FUN_0064fca0(uVar3,0xb005,*(undefined2 *)(param_2 + 8),
                         (longlong)*(int *)(param_2 + 0x10));
    if (lVar2 != 0) {
      return;
    }
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

