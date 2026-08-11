/* Ghidra address: 0065a950 */
/* Ghidra symbol: FUN_0065a950 */


void FUN_0065a950(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    *(undefined8 *)(param_2 + 0x18) = 1;
    uVar1 = FUN_0064fca0(param_1,0x87,0,0);
    if ((uVar1 & 0x80) == 0) {
      uVar2 = FUN_007f9b70(param_1,1);
      lVar3 = FUN_0064fca0(uVar2,0xb006,*(undefined2 *)(param_2 + 8),
                           (longlong)*(int *)(param_2 + 0x10));
      if (lVar3 != 0) {
        return;
      }
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return;
}

