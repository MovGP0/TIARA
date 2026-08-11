/* Ghidra address: 00536050 */
/* Ghidra symbol: FUN_00536050 */


void FUN_00536050(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + -8);
  }
  FUN_00409a70(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  return;
}

