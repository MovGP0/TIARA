/* Ghidra address: 01bfcce0 */
/* Ghidra symbol: FUN_01bfcce0 */


void FUN_01bfcce0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_01c07b40(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&LAB_01bf08d8);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    FUN_01bfcf30(param_1,*(undefined8 *)(param_2 + 0x38));
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  }
  return;
}

