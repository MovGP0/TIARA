/* Ghidra address: 00bba5a0 */
/* Ghidra symbol: FUN_00bba5a0 */


void FUN_00bba5a0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bb7948), cVar1 != '\0')) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return;
    }
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_1);
    return;
  }
  FUN_004b1060(param_1,param_2);
  return;
}

