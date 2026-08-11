/* Ghidra address: 0065a8d0 */
/* Ghidra symbol: FUN_0065a8d0 */


void FUN_0065a8d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    uVar2 = (ulonglong)*(ushort *)(param_2 + 8);
    if (uVar2 < 0x1c) {
      if ((((uVar2 != 0x1b) && (uVar2 != 3)) && (uVar2 != 9)) && (uVar2 != 0xd)) {
        return;
      }
    }
    else if ((3 < uVar2 - 0x25) && (uVar2 - 0x25 != 6)) {
      return;
    }
    uVar1 = FUN_0064fca0(param_1,0xb01e,*(ushort *)(param_2 + 8),0);
    *(undefined8 *)(param_2 + 0x18) = uVar1;
  }
  return;
}

