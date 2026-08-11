/* Ghidra address: 01b76700 */
/* Ghidra symbol: FUN_01b76700 */


void FUN_01b76700(longlong param_1,int *param_2)

{
  if (*param_2 == 0x4e) {
    if ((*(int *)(*(longlong *)(param_2 + 4) + 0x10) == -0x146) ||
       (*(int *)(*(longlong *)(param_2 + 4) + 0x10) == -0x132)) {
      param_2[6] = 1;
      param_2[7] = 0;
    }
    else {
      (**(code **)(param_1 + 0x6c8))(*(undefined8 *)(param_1 + 0x6d0));
    }
  }
  else {
    (**(code **)(param_1 + 0x6c8))(*(undefined8 *)(param_1 + 0x6d0));
  }
  return;
}

