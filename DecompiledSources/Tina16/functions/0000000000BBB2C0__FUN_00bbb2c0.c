/* Ghidra address: 00bbb2c0 */
/* Ghidra symbol: FUN_00bbb2c0 */


void FUN_00bbb2c0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bb89f0), cVar1 != '\0')) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return;
    }
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
    return;
  }
  FUN_004b1060(param_1,param_2);
  return;
}

