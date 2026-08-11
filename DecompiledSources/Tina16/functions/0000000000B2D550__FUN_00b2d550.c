/* Ghidra address: 00b2d550 */
/* Ghidra symbol: FUN_00b2d550 */


void FUN_00b2d550(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0061d8e0(local_20,*(undefined8 *)(param_1 + 0xa8));
  FUN_00414c70(param_1 + 0xa8,local_20[0]);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = FUN_00418560(0x2f,&DAT_00b2c7a8);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    FUN_00414bf0(*(longlong *)(param_1 + 0xa0) + 5,*(undefined8 *)(param_1 + 0xa8));
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x11) = 0;
    if (*(char *)(param_1 + 0x9f) != '\0') {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x11) = 1;
    }
    FUN_004144d0(param_1 + 0xa8);
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x20),
                 *(undefined8 *)(param_1 + 0xa0));
    if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x40) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x40))
                (*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x48),
                 *(undefined8 *)(param_1 + 0xa0));
    }
  }
  FUN_004144d0(local_20);
  return;
}

