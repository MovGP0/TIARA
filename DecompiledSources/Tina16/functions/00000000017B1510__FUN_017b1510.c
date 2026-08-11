/* Ghidra address: 017b1510 */
/* Ghidra symbol: FUN_017b1510 */


void FUN_017b1510(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_30 = *param_3;
  FUN_00414ff0(param_1 + 8,param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x144) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x145) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x147) = *(undefined1 *)(param_2 + 0x20);
  local_40[0] = FUN_00498310(*(short *)(param_2 + 0x21) + (int)local_30,
                             *(short *)(param_2 + 0x23) + local_30._4_4_);
  (**(code **)*param_1)(param_1,local_40);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x25);
  *(undefined8 *)((longlong)param_1 + 0x154) = *(undefined8 *)(param_2 + 0x26);
  param_1[0x2c] = *(undefined8 *)(param_2 + 0x2e);
  return;
}

