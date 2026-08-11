/* Ghidra address: 0065f790 */
/* Ghidra symbol: FUN_0065f790 */


undefined8 FUN_0065f790(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((uVar1 < 0x100) || (0x109 < uVar1)) {
    uVar1 = *(uint *)(param_2 + 8);
    uVar2 = (ulonglong)uVar1;
    if (((uVar1 != 0xb000) &&
        (((uVar1 != 0xb001 && (*(int *)(param_2 + 8) != 0xb016)) &&
         (*(int *)(param_2 + 8) != 0xb017)))) && (*(int *)(param_2 + 8) != 0x111)) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar2 = (ulonglong)uVar1;
      if (((uVar1 < 0x201) || (0x20e < uVar1)) && (*(int *)(param_2 + 8) != 0xa0)) {
        return 0;
      }
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

