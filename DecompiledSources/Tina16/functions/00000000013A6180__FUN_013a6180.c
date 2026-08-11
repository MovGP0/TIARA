/* Ghidra address: 013a6180 */
/* Ghidra symbol: FUN_013a6180 */


void FUN_013a6180(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 8);
  if (lVar1 != 0) {
    FUN_004095f0(lVar1);
  }
  FUN_004095f0(*(undefined8 *)(param_2 + 0x58));
  return;
}

