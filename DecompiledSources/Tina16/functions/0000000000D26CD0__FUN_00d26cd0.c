/* Ghidra address: 00d26cd0 */
/* Ghidra symbol: FUN_00d26cd0 */


void FUN_00d26cd0(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    *(uint *)(param_2 + (ulonglong)uVar1 * 4) =
         *(uint *)(param_3 + (ulonglong)uVar1 * 4) ^ (param_4 & 0xff) * 0x1010101;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x40);
  return;
}

