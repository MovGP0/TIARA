/* Ghidra address: 01972980 */
/* Ghidra symbol: FUN_01972980 */


void FUN_01972980(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x210) = *(undefined8 *)(param_2 + 0x78);
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x240) + 0x48,
               *(undefined8 *)(param_2 + 0x70));
  if (*(longlong *)(param_2 + 0x68) != 0) {
    if (*(longlong *)(param_2 + 0x60) == 0) {
      FUN_0041d830(param_2 + 0x30,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x240) + 0x48));
      (**(code **)(**(longlong **)(param_2 + 0x68) + 0x90))
                (*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0xa8),
                 *(undefined8 *)(param_2 + 0x30));
    }
    else {
      FUN_0041d830(param_2 + 0x38,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x240) + 0x48));
      (**(code **)(**(longlong **)(param_2 + 0x68) + 0x90))
                (*(undefined8 *)(param_2 + 0x68),
                 *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x90),
                 *(undefined8 *)(param_2 + 0x38));
    }
    FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  }
  if (*(longlong *)(param_2 + 0x60) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x60) + 0x90))
              (*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0xa8));
    FUN_00410f20(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}

