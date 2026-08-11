/* Ghidra address: 01c23570 */
/* Ghidra symbol: FUN_01c23570 */


void FUN_01c23570(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_01c270a0(param_1,param_3);
  if (param_2 != 0) {
    FUN_01c235f0(param_1,0,param_3);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x558) != 0)) {
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x558);
    }
    *(undefined8 *)(param_1 + 0x558) = 0;
  }
  *(undefined8 *)(param_2 + 8) = param_3;
  if (*(longlong *)(param_1 + 0x590) != 0) {
    (**(code **)(param_1 + 0x590))(*(undefined8 *)(param_1 + 0x598),param_1);
  }
  return;
}

