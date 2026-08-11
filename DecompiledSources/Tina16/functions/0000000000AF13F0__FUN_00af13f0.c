/* Ghidra address: 00af13f0 */
/* Ghidra symbol: FUN_00af13f0 */


void FUN_00af13f0(longlong param_1)

{
  longlong lVar1;
  
  FUN_00651da0(param_1);
  FUN_00652570(*(undefined8 *)(param_1 + 0x740),*(undefined8 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x288) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x740);
    *(longlong *)(lVar1 + 0x290) = param_1;
    *(code **)(lVar1 + 0x288) = FUN_00af2880;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x740);
    *(undefined8 *)(lVar1 + 0x288) = *(undefined8 *)(param_1 + 0x288);
    *(undefined8 *)(lVar1 + 0x290) = *(undefined8 *)(param_1 + 0x290);
  }
  return;
}

