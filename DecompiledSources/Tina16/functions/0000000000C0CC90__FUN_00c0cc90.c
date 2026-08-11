/* Ghidra address: 00c0cc90 */
/* Ghidra symbol: FUN_00c0cc90 */


void FUN_00c0cc90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (1 < *(int *)(param_2 + 0xd8)) {
    *(undefined4 *)(param_2 + 0xd4) = 0;
    if (*(longlong *)(param_2 + 0xc0) != 0) {
      *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + -4);
    }
    *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + *(int *)(param_2 + 0xd4);
  }
  FUN_00711270(*(undefined8 *)(param_2 + 0xb8));
  *(undefined4 *)(param_2 + 0xb4) = 0;
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + -4);
  }
  uVar1 = FUN_00bb7750(*(int *)(param_2 + 0x98) + *(int *)(param_2 + 0xb4),
                       *(undefined4 *)(param_2 + 0x9c));
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  FUN_00c0a5f0(*(undefined8 *)(param_2 + 0x100),param_2 + 0xa0,param_2 + 0x38,param_2 + 0xd8);
  FUN_00c086e0(*(undefined8 *)(param_2 + 0x100),*(undefined1 *)(param_2 + 0x97));
  return;
}

