/* Ghidra address: 005b4a60 */
/* Ghidra symbol: FUN_005b4a60 */


void FUN_005b4a60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0xb0) + 0xb8) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0xb0) + 0xb8))
              (*(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0xc0),*(undefined8 *)(param_2 + 0xb0)
              );
  }
  return;
}

