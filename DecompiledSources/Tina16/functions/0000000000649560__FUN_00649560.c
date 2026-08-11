/* Ghidra address: 00649560 */
/* Ghidra symbol: FUN_00649560 */


void FUN_00649560(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00649270(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00637e70);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))
              (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
  }
  return;
}

