/* Ghidra address: 00afeb30 */
/* Ghidra symbol: FUN_00afeb30 */


void FUN_00afeb30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_00a777e0(param_1,param_2);
  if (*param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x740);
    *(undefined8 *)(lVar1 + 0x188) = 0;
    *(undefined8 *)(lVar1 + 400) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x740);
    *(longlong *)(lVar1 + 400) = param_1;
    *(code **)(lVar1 + 0x188) = FUN_00a77e40;
  }
  return;
}

