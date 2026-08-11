/* Ghidra address: 0173d2e0 */
/* Ghidra symbol: FUN_0173d2e0 */


void FUN_0173d2e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined1 *)(param_1 + 0x19) = param_4;
  *(undefined1 *)(param_1 + 0xb) = param_5;
  *(undefined1 *)(param_1 + 0xc) = param_6;
  if ((*PTR_DAT_020052b8 == '\0') && (*(char *)(param_1 + 8) != '\0')) {
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_0173d100(param_1,param_3,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  return;
}

