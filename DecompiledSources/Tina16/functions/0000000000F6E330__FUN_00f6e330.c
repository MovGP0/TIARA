/* Ghidra address: 00f6e330 */
/* Ghidra symbol: FUN_00f6e330 */


void FUN_00f6e330(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004b89e0(param_2,param_1 + 0x10,1);
  FUN_004b89e0(param_2,param_1 + 0x11,1);
  FUN_004b89e0(param_2,param_1 + 0x28,4);
  FUN_004b89e0(param_2,param_1 + 0x2c,4);
  FUN_00f60a20(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x2c),param_2);
  FUN_00f60a20(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c),param_2);
  FUN_00f60860(param_1 + 0x30,param_2);
  FUN_00f60860(param_1 + 0x38,param_2);
  FUN_00f60860(param_1 + 0x40,param_2);
  FUN_00f60860(param_1 + 0x48,param_2);
  FUN_004b89e0(param_2,param_1 + 0x50,4);
  FUN_004b89e0(param_2,param_1 + 0x54,4);
  FUN_004b89e0(param_2,param_1 + 0x58,4);
  FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0x60));
  FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0x68));
  FUN_004b89e0(param_2,param_1 + 0x70,1);
  FUN_004b89e0(param_2,param_1 + 0x71,1);
  FUN_004b89e0(param_2,param_1 + 0x74,4);
  FUN_00f60a20(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x74),param_2);
  FUN_00f60a20(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x74),param_2);
  iVar2 = *(int *)(param_1 + 0x74);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b89e0(param_2,param_1 + 0x88 + (longlong)iVar1,1);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004b89e0(param_2,param_1 + 0x92,1);
  FUN_004b89e0(param_2,param_1 + 0x93,1);
  FUN_004b89e0(param_2,param_1 + 0x94,1);
  FUN_00f60860(param_1 + 0x98,param_2);
  FUN_00f60860(param_1 + 0xa0,param_2);
  return;
}

