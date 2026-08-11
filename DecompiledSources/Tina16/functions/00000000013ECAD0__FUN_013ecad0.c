/* Ghidra address: 013ecad0 */
/* Ghidra symbol: FUN_013ecad0 */


void FUN_013ecad0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1080) = param_2;
  *(undefined4 *)(param_1 + 0x1084) = param_3;
  FUN_00417c40(param_1 + 0x745,PTR_DAT_02001120,&DAT_01d0d0b8);
  FUN_013ed020(param_1,param_2,param_3);
  if ((*(int *)(param_1 + 0x1080) != 1) || (*(int *)(param_1 + 0x1084) != 1)) {
    if ((*(int *)(param_1 + 0x1080) == 0) && (*(char *)(param_1 + 0x1098) == '\0')) {
      FUN_014384c0(param_1 + 0xb76,**(undefined8 **)(param_1 + 0x1090));
    }
    if ((*(int *)(param_1 + 0x1084) == 0) && (*(char *)(param_1 + 0x1099) == '\0')) {
      FUN_013ec800(param_1 + 0xcc4,**(undefined8 **)(param_1 + 0x1090));
    }
  }
  return;
}

