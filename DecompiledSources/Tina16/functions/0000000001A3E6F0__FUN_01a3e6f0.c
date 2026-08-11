/* Ghidra address: 01a3e6f0 */
/* Ghidra symbol: FUN_01a3e6f0 */


void FUN_01a3e6f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0xa8));
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x808);
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x808) = 0;
  return;
}

