/* Ghidra address: 00f11ef0 */
/* Ghidra symbol: FUN_00f11ef0 */


void FUN_00f11ef0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_2c;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x58,4);
    FUN_01d311c0(param_2,param_1 + 0x48,4);
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = 1;
    if (0 < iVar1) {
      do {
        FUN_01d311c0(param_2,*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar2 * 8,8);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_01d311c0(param_2,param_1 + 0x5c,1);
    FUN_01d31ea0(param_2,*(undefined8 *)(param_1 + 0x60));
    FUN_01d311c0(param_2,param_1 + 0x70,1);
    if (*(char *)(param_1 + 0x70) != '\0') {
      iVar1 = *(int *)(param_1 + 0x48);
      iVar2 = 1;
      if (0 < iVar1) {
        do {
          FUN_01d311c0(param_2,*(longlong *)(param_1 + 0x68) + -0x10 + (longlong)iVar2 * 0x10,0x10);
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
      local_2c = 0xffffffff;
    }
    else {
      local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x40);
    }
    FUN_01d311c0(param_2,&local_2c,4);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      local_2c = 0xffffffff;
    }
    else {
      local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x40);
    }
    FUN_01d311c0(param_2,&local_2c,4);
  }
  return;
}

