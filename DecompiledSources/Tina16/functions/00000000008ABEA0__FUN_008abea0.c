/* Ghidra address: 008abea0 */
/* Ghidra symbol: FUN_008abea0 */


void FUN_008abea0(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[2] == 0) {
    iVar1 = (**(code **)(*(longlong *)param_1[5] + 0x28))((longlong *)param_1[5]);
    if (iVar1 == 0) {
      (**(code **)*param_1)(param_1);
    }
  }
  else {
    (*(code *)param_1[2])(param_1[3],param_1);
  }
  return;
}

