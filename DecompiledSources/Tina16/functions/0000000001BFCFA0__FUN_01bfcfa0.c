/* Ghidra address: 01bfcfa0 */
/* Ghidra symbol: FUN_01bfcfa0 */


void FUN_01bfcfa0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_01c07b40(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&LAB_01bf0c80);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    FUN_01bfd160(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  return;
}

