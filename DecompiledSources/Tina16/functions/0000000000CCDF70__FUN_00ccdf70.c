/* Ghidra address: 00ccdf70 */
/* Ghidra symbol: FUN_00ccdf70 */


void FUN_00ccdf70(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&LAB_00cc6b58);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_2 + 8,*(undefined8 *)(param_1 + 8));
    FUN_00414ad0(param_2 + 0x10,*(undefined8 *)(param_1 + 0x10));
    FUN_00414ad0(param_2 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_00414ad0(param_2 + 0x20,*(undefined8 *)(param_1 + 0x20));
    FUN_00ccde70(param_2,*(undefined1 *)(param_1 + 0x28));
    FUN_00ccdec0(param_2,*(undefined1 *)(param_1 + 0x29));
    *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_1 + 0x30);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    FUN_00414ad0(param_2 + 0x38,*(undefined8 *)(param_1 + 0x38));
    FUN_00414ad0(param_2 + 0x40,*(undefined8 *)(param_1 + 0x40));
  }
  return;
}

