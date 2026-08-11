/* Ghidra address: 00bba950 */
/* Ghidra symbol: FUN_00bba950 */


void FUN_00bba950(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bb7c88), cVar1 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
    *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    if (*(longlong *)(param_1 + 0x38) == 0) {
      return;
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
    return;
  }
  FUN_004b1060(param_1,param_2);
  return;
}

