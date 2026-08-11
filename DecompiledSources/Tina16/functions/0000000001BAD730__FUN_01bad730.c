/* Ghidra address: 01bad730 */
/* Ghidra symbol: FUN_01bad730 */


void FUN_01bad730(longlong param_1,int *param_2)

{
  if (*param_2 == 0x4e) {
    if ((*(int *)(*(longlong *)(param_2 + 4) + 0x10) == -0x146) ||
       (*(int *)(*(longlong *)(param_2 + 4) + 0x10) == -0x132)) {
      param_2[6] = 1;
      param_2[7] = 0;
    }
    else {
      (**(code **)(param_1 + 0x708))(*(undefined8 *)(param_1 + 0x710));
    }
  }
  else {
    (**(code **)(param_1 + 0x708))(*(undefined8 *)(param_1 + 0x710));
  }
  return;
}

