/* Ghidra address: 01897fd0 */
/* Ghidra symbol: FUN_01897fd0 */


void FUN_01897fd0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38) = 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x6e0) == '\0')) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  }
  FUN_006dc640(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

