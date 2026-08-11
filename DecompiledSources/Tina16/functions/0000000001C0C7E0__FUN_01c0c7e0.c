/* Ghidra address: 01c0c7e0 */
/* Ghidra symbol: FUN_01c0c7e0 */


void FUN_01c0c7e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (*(char *)(param_1 + 0x363) != '\0') {
    uVar1 = FUN_01c07120(param_1);
    lVar2 = FUN_01c03e40(uVar1);
    if (*(int *)(lVar2 + 0xa8) != 0x20000000) {
      uVar1 = FUN_01c07120(param_1);
      lVar2 = FUN_01c03e40(uVar1);
      FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x70),
                   *(undefined4 *)(lVar2 + 0xa8));
    }
  }
  FUN_01c05800(param_1,param_2,param_3,local_res20);
  FUN_00414480(&local_res20);
  return;
}

