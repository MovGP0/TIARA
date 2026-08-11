/* Ghidra address: 01a88200 */
/* Ghidra symbol: FUN_01a88200 */


void FUN_01a88200(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_007e2d20(*(longlong *)(param_1 + 0xa18),
               *(char *)(*(longlong *)(param_1 + 0xa18) + 0x80) == '\0');
  if (*(longlong *)(param_1 + 0x798) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x798);
    *(undefined4 *)(lVar1 + 0x100) = 0;
    *(undefined4 *)(lVar1 + 0x104) = 0;
  }
  FUN_01a77f90(param_1,param_2);
  return;
}

