/* Ghidra address: 00afeb90 */
/* Ghidra symbol: FUN_00afeb90 */


void FUN_00afeb90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_00a77800(param_1,param_2);
  if (*param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x740);
    *(undefined8 *)(lVar1 + 0x198) = 0;
    *(undefined8 *)(lVar1 + 0x1a0) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x740);
    *(longlong *)(lVar1 + 0x1a0) = param_1;
    *(code **)(lVar1 + 0x198) = FUN_00a77e70;
  }
  return;
}

