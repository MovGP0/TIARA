/* Ghidra address: 00c658d0 */
/* Ghidra symbol: FUN_00c658d0 */


void FUN_00c658d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00c63270);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    FUN_00414ad0(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28));
    FUN_00414ad0(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30));
    FUN_00414ad0(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38));
    FUN_00414ad0(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40));
    FUN_00414ad0(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48));
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))
              (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
    *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  }
  return;
}

