/* Ghidra address: 012332c0 */
/* Ghidra symbol: FUN_012332c0 */


void FUN_012332c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x840));
  *(undefined8 *)(PTR_DAT_020021e8 + 0x40) = uVar1;
  FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x6e8),
               *(undefined8 *)(PTR_DAT_020021e8 + 0x40));
  return;
}

