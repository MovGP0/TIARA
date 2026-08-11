/* Ghidra address: 009f0220 */
/* Ghidra symbol: FUN_009f0220 */


void FUN_009f0220(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0x6fb6) {
    if (iVar1 == 0x6fb5) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009efdf0;
      return;
    }
    if (iVar1 == 0x35a) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009f00f0;
      return;
    }
    if (iVar1 == 0x39a) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009f0130;
      return;
    }
    if (iVar1 == 0x6fb3) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009efd30;
      return;
    }
    if (iVar1 == 0x6fb4) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009efd70;
      return;
    }
  }
  else {
    if (iVar1 == 0x6fb6) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009efed0;
      return;
    }
    if (iVar1 == 0x6fb7) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009effa0;
      return;
    }
    if (iVar1 == 0x6fb9) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009f0020;
      return;
    }
    if (iVar1 == 0x6fbd) {
      *(longlong *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x20) = FUN_009f0050;
      return;
    }
  }
  *(longlong *)(param_1 + 0x28) = param_1;
  *(code **)(param_1 + 0x20) = FUN_009ef6d0;
  return;
}

