/* Ghidra address: 007e2e50 */
/* Ghidra symbol: FUN_007e2e50 */


void FUN_007e2e50(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x87) != (char)param_2) {
    lVar1 = *(longlong *)(param_1 + 200);
    if (lVar1 != 0) {
      uVar2 = FUN_007e34a0(lVar1,param_1);
      FUN_007ddfc0(lVar1,uVar2,param_2);
    }
    *(char *)(param_1 + 0x87) = (char)param_2;
    if ((*(char *)(param_1 + 0x80) != '\0') && (*(char *)(param_1 + 0x85) != '\0')) {
      FUN_007e2ca0(param_1);
    }
  }
  return;
}

