/* Ghidra address: 012f37a0 */
/* Ghidra symbol: FUN_012f37a0 */


void FUN_012f37a0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0xab8) == '\0') && (*(int *)(param_1 + 0x508) == 1)) {
    iVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
    if (iVar2 != 0) {
      uVar1 = 0;
      goto LAB_012f37d7;
    }
  }
  uVar1 = 1;
LAB_012f37d7:
  *param_3 = uVar1;
  return;
}

