/* Ghidra address: 0196c820 */
/* Ghidra symbol: FUN_0196c820 */


void FUN_0196c820(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01937ca0);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    FUN_00414ad0(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10));
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  }
  return;
}

