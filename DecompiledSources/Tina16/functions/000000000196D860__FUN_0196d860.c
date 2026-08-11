/* Ghidra address: 0196d860 */
/* Ghidra symbol: FUN_0196d860 */


void FUN_0196d860(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01939f00);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
    uVar2 = FUN_0196d800(param_2);
    FUN_0196d970(param_1,uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))
              (*(longlong **)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
              (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
              (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
    *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  }
  return;
}

