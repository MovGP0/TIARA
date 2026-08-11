/* Ghidra address: 00a99e30 */
/* Ghidra symbol: FUN_00a99e30 */


void FUN_00a99e30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar1 + 0x118) != 0) {
    (**(code **)(lVar1 + 0x118))
              (*(undefined8 *)(lVar1 + 0x120),*(undefined8 *)(lVar1 + 0xb8),param_1,
               *(undefined8 *)(param_1 + 0x130));
  }
  return;
}

