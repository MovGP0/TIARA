/* Ghidra address: 00aa9b00 */
/* Ghidra symbol: FUN_00aa9b00 */


void FUN_00aa9b00(longlong param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,
                 char param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x60) < 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
  }
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 100) = param_2;
  }
  if (*(int *)(param_1 + 0x68) < 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
  }
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = param_2;
  }
  if ((param_5 != '\0') && (*(char *)(param_1 + 0x7d) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x6c) = iVar1;
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x74) = iVar1;
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x70) = iVar1;
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x78) = iVar1;
  }
  *(int *)(param_1 + 0x10) =
       *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x74) +
       *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x14) =
       *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x78) +
       *(int *)(param_1 + 0x68);
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0x90) == 0)) {
    uVar2 = FUN_00a95230(&PTR_FUN_00a83768,1,*(undefined8 *)(param_1 + 0x80),param_3);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    *(undefined8 *)(param_1 + 0x44) = *param_4;
    *(undefined8 *)(param_1 + 0x4c) = param_4[1];
    *(undefined8 *)(param_1 + 0x54) = param_4[2];
  }
  return;
}

