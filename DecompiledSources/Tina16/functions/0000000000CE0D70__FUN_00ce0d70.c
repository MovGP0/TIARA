/* Ghidra address: 00ce0d70 */
/* Ghidra symbol: FUN_00ce0d70 */


void FUN_00ce0d70(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cde420);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))
              (*(longlong **)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x18));
    (**(code **)(**(longlong **)(param_2 + 0x80) + 0x10))
              (*(longlong **)(param_2 + 0x80),*(undefined8 *)(param_1 + 0x80));
    FUN_00414ad0(param_2 + 0x10,*(undefined8 *)(param_1 + 0x10));
    FUN_00414ad0(param_2 + 0x20,*(undefined8 *)(param_1 + 0x20));
    FUN_00414ad0(param_2 + 0x28,*(undefined8 *)(param_1 + 0x28));
    FUN_00414ad0(param_2 + 0x30,*(undefined8 *)(param_1 + 0x30));
    FUN_00414ad0(param_2 + 0x38,*(undefined8 *)(param_1 + 0x38));
    FUN_00414ad0(param_2 + 0x40,*(undefined8 *)(param_1 + 0x40));
    FUN_00414ad0(param_2 + 0x70,*(undefined8 *)(param_1 + 0x70));
    FUN_00414ad0(param_2 + 0x78,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    FUN_00414ad0(param_2 + 0x68,*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x88);
    FUN_00414ad0(param_2 + 0x98,*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
    FUN_00414ad0(param_2 + 0xa8,*(undefined8 *)(param_1 + 0xa8));
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_1 + 0xb0);
    FUN_00414ad0(param_2 + 0xb8,*(undefined8 *)(param_1 + 0xb8));
  }
  return;
}

