/* Ghidra address: 0163eac0 */
/* Ghidra symbol: FUN_0163eac0 */


void FUN_0163eac0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_004b84c0(param_2,param_3 + 8,1);
  FUN_004b84c0(param_2,param_3 + 9,1);
  FUN_004b84c0(param_2,param_3 + 0xb,1);
  FUN_004b84c0(param_2,param_3 + 0xc,4);
  FUN_004b84c0(param_2,param_3 + 0x21,1);
  FUN_004b84c0(param_2,param_3 + 0x22,1);
  FUN_004b84c0(param_2,param_3 + 0x10,4);
  if (*(char *)(param_3 + 9) != '\0') {
    uVar1 = FUN_016123d0(&DAT_01611258,1);
    *(undefined8 *)(param_3 + 0x18) = uVar1;
    FUN_0163f460(param_1,param_2,uVar1);
  }
  *(undefined1 *)(param_3 + 10) = 1;
  if ((((*(char *)(param_3 + 9) == '\0') && (*(char *)(param_3 + 8) == '\0')) &&
      (*(char *)(param_3 + 0xb) == '\0')) && (*(char *)(param_3 + 0x21) == '\0')) {
    *(undefined1 *)(param_3 + 10) = 0;
  }
  return;
}

