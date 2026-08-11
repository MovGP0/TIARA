/* Ghidra address: 01cc80c0 */
/* Ghidra symbol: FUN_01cc80c0 */


void FUN_01cc80c0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_004b6dc0(param_1[3],param_2);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1[0xb] + 0x2c);
  lVar2 = (**(code **)*param_1)(param_1);
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    uVar1 = FUN_0040c770(((double)param_2 / (double)lVar2) * (double)*(int *)(param_1 + 5));
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  }
  return;
}

