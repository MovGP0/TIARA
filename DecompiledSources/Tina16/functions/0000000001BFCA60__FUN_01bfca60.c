/* Ghidra address: 01bfca60 */
/* Ghidra symbol: FUN_01bfca60 */


void FUN_01bfca60(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  FUN_01bfcfa0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&LAB_01bf0fc0);
  if (cVar1 != '\0') {
    FUN_01bfcbf0(param_1,*(undefined8 *)(param_2 + 0x48));
    FUN_01bfcc10(param_1,*(undefined8 *)(param_2 + 0x50));
    FUN_01bfcc30(param_1,*(undefined4 *)(param_2 + 0x5c));
    FUN_01bfccb0(param_1,*(undefined1 *)(param_2 + 0x58));
  }
  return;
}

