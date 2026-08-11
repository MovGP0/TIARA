/* Ghidra address: 00bca100 */
/* Ghidra symbol: FUN_00bca100 */


void FUN_00bca100(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 8 + (longlong)iVar1 * 8) = 0;
    *(undefined8 *)(param_1 + 0x80 + (longlong)iVar1 * 8) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xf);
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    iVar2 = FUN_00414d00(*(longlong *)(param_1 + 400));
    if (iVar2 != iVar1) {
      FUN_004095f0(*(undefined8 *)(param_1 + 400));
      *(undefined8 *)(param_1 + 400) = 0;
    }
  }
  if (*(longlong *)(param_1 + 400) == 0) {
    uVar3 = FUN_004095c0((longlong)((iVar1 + 1) * 2));
    *(undefined8 *)(param_1 + 400) = uVar3;
  }
  FUN_00bc3b20(*(undefined8 *)(param_1 + 400),param_2);
  return;
}

