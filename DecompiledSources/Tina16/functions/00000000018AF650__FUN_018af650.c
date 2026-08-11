/* Ghidra address: 018af650 */
/* Ghidra symbol: FUN_018af650 */


void FUN_018af650(longlong param_1,undefined8 param_2,short *param_3)

{
  if (*param_3 == 0xd) {
    if (*(longlong *)(param_1 + 0x4c0) == *(longlong *)(param_1 + 0x718)) {
      FUN_018af390(param_1,0);
    }
    if (*(longlong *)(param_1 + 0x4c0) == *(longlong *)(param_1 + 0x748)) {
      FUN_018afa40(param_1,0);
    }
  }
  return;
}

