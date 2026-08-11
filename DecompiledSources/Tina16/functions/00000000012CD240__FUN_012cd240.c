/* Ghidra address: 012cd240 */
/* Ghidra symbol: FUN_012cd240 */


void FUN_012cd240(longlong param_1,int *param_2)

{
  if (*param_2 == 0x4e) {
    if ((*(int *)(*(longlong *)(param_2 + 4) + 0x10) == -0x146) ||
       (*(int *)(*(longlong *)(param_2 + 4) + 0x10) == -0x132)) {
      param_2[6] = 1;
      param_2[7] = 0;
    }
    else {
      (**(code **)(param_1 + 0x6f8))(*(undefined8 *)(param_1 + 0x700));
    }
  }
  else {
    (**(code **)(param_1 + 0x6f8))(*(undefined8 *)(param_1 + 0x700));
  }
  return;
}

