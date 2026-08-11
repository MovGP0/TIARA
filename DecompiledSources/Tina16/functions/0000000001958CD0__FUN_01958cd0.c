/* Ghidra address: 01958cd0 */
/* Ghidra symbol: FUN_01958cd0 */


void FUN_01958cd0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01921868);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),*(undefined8 *)(param_2 + 8));
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
              (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
              (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
  }
  return;
}

