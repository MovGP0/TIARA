/* Ghidra address: 0196cad0 */
/* Ghidra symbol: FUN_0196cad0 */


void FUN_0196cad0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&LAB_01938bd8);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1 + 8,*(undefined8 *)(param_2 + 8));
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    FUN_00414ad0(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    FUN_0196cc50(param_1,*(undefined8 *)(param_2 + 0x28));
    FUN_00414ad0(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30));
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    FUN_00414ad0(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38));
    FUN_00414ad0(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48));
    FUN_0196cc70(param_1,*(undefined8 *)(param_2 + 0x50));
    FUN_00414ad0(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60));
    FUN_00414ad0(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68));
    FUN_00414ad0(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70));
    FUN_00414ad0(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78));
  }
  return;
}

