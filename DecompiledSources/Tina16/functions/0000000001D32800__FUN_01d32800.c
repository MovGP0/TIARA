/* Ghidra address: 01d32800 */
/* Ghidra symbol: FUN_01d32800 */


void FUN_01d32800(longlong param_1,byte *param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_01d31a40(param_1);
    if (iVar1 == 0) {
      FUN_01d32760(param_1);
      FUN_004b84c0(*(undefined8 *)(param_1 + 0x10),param_2,1);
      FUN_01d31a90(param_1);
      FUN_004b84c0(*(undefined8 *)(param_1 + 0x10),param_2 + 1,*param_2);
      FUN_01d31a90(param_1);
      FUN_004b84c0(*(undefined8 *)(param_1 + 0x10),param_2 + 0x100,2);
      FUN_01d31a90(param_1);
      FUN_004b84c0(*(undefined8 *)(param_1 + 0x10),param_2 + 0x102,4);
      FUN_01d31a90(param_1);
      *(ushort *)(param_1 + 0x26) = *param_2 + 7;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x102);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
  return;
}

