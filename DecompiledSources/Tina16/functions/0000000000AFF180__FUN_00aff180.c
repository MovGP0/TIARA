/* Ghidra address: 00aff180 */
/* Ghidra symbol: FUN_00aff180 */


void FUN_00aff180(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    (**(code **)(param_1 + 0x6f8))
              (*(undefined8 *)(param_1 + 0x700),param_1,
               CONCAT71((int7)((ulonglong)param_4 >> 8),1) & 0xffffffff,param_2);
  }
  return;
}

