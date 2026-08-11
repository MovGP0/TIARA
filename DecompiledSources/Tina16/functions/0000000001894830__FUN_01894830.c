/* Ghidra address: 01894830 */
/* Ghidra symbol: FUN_01894830 */


void FUN_01894830(longlong param_1,undefined8 param_2,short *param_3)

{
  if (*param_3 == 0xd) {
    (**(code **)(*(longlong *)(param_1 + 0x6f0) + 0x1f8))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x200),0);
  }
  return;
}

