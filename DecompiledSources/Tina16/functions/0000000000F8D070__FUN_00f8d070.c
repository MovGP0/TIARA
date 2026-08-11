/* Ghidra address: 00f8d070 */
/* Ghidra symbol: FUN_00f8d070 */


ulonglong FUN_00f8d070(longlong param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00f90b00(param_1);
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00f90b00(param_1);
    if (iVar1 == 4) {
      uVar2 = FUN_00f7d400(*(undefined8 *)(param_1 + 0x3548),param_2);
    }
    else {
      uVar3 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x3468) = uVar3;
      FUN_00f8d6e0(param_1);
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x3400);
    }
  }
  return uVar2;
}

