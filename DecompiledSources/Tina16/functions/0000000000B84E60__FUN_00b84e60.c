/* Ghidra address: 00b84e60 */
/* Ghidra symbol: FUN_00b84e60 */


void FUN_00b84e60(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = (param_3 & 0xff) * 0x1010101;
  do {
    *(uint *)(param_1 + (ulonglong)uVar1 * 4) = *(uint *)(param_2 + (ulonglong)uVar1 * 4) ^ uVar2;
    *(uint *)(param_1 + (ulonglong)(uVar1 + 1) * 4) =
         *(uint *)(param_2 + (ulonglong)(uVar1 + 1) * 4) ^ uVar2;
    *(uint *)(param_1 + (ulonglong)(uVar1 + 2) * 4) =
         *(uint *)(param_2 + (ulonglong)(uVar1 + 2) * 4) ^ uVar2;
    *(uint *)(param_1 + (ulonglong)(uVar1 + 3) * 4) =
         *(uint *)(param_2 + (ulonglong)(uVar1 + 3) * 4) ^ uVar2;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x40);
  return;
}

