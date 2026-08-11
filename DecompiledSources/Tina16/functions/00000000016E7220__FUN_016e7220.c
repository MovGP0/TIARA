/* Ghidra address: 016e7220 */
/* Ghidra symbol: FUN_016e7220 */


void FUN_016e7220(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  FUN_016e5970(lVar1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (*(double *)(lVar1 + 0x78) <= 0.0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x20);
  }
  else {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8);
    FUN_016e69a0(lVar1,param_2);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8);
    *(double *)(param_1 + 0x20) =
         *(double *)(*(longlong *)(param_1 + 0x70) + 0x20) *
         *(double *)(*(longlong *)(param_1 + 0x68) + 0x20);
  }
  return;
}

