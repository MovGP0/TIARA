/* Ghidra address: 00bbb690 */
/* Ghidra symbol: FUN_00bbb690 */


void FUN_00bbb690(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bb8ef0), cVar1 != '\0')) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return;
    }
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
    return;
  }
  FUN_004b1060(param_1,param_2);
  return;
}

