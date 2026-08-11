/* Ghidra address: 00ce3340 */
/* Ghidra symbol: FUN_00ce3340 */


void FUN_00ce3340(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cdfc68);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_2 + 0xc0,*(undefined8 *)(param_1 + 0xc0));
    FUN_00414ad0(param_2 + 200,*(undefined8 *)(param_1 + 200));
    FUN_00414ad0(param_2 + 0xd0,*(undefined8 *)(param_1 + 0xd0));
    FUN_00414ad0(param_2 + 0xd8,*(undefined8 *)(param_1 + 0xd8));
    FUN_00414ad0(param_2 + 0xe8,*(undefined8 *)(param_1 + 0xe8));
    FUN_00414ad0(param_2 + 0x108,*(undefined8 *)(param_1 + 0x108));
    FUN_00414ad0(param_2 + 0xf0,*(undefined8 *)(param_1 + 0xf0));
    FUN_00414ad0(param_2 + 0xf8,*(undefined8 *)(param_1 + 0xf8));
    FUN_00414ad0(param_2 + 0x100,*(undefined8 *)(param_1 + 0x100));
    *(undefined1 *)(param_2 + 0x128) = *(undefined1 *)(param_1 + 0x128);
    (**(code **)(**(longlong **)(param_2 + 0x120) + 0x10))
              (*(longlong **)(param_2 + 0x120),*(undefined8 *)(param_1 + 0x120));
    FUN_00414ad0(param_2 + 0x138,*(undefined8 *)(param_1 + 0x138));
  }
  FUN_00ce0d70(param_1,param_2);
  return;
}

