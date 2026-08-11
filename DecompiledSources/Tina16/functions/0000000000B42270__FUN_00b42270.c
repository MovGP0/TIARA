/* Ghidra address: 00b42270 */
/* Ghidra symbol: FUN_00b42270 */


void FUN_00b42270(longlong param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  undefined1 local_2c [12];
  
  sVar1 = *(short *)(param_1 + 0x21);
  FUN_00b25710(param_2,local_2c);
  FUN_00b257f0(param_2,*(int *)(param_1 + 0x25) + -4);
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (sVar1 == 0xca) {
    lVar2 = FUN_00410e60(&DAT_00b403a0,1);
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(lVar2 + 0x2c) = 0xffffffff;
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),lVar2);
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  else if (sVar1 == 0x4b) {
    lVar2 = FUN_00b419a0(&DAT_00b40220,1);
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(lVar2 + 0x2c) = 0xffffffff;
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),lVar2);
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  else {
    lVar2 = FUN_00410e60(&DAT_00b400a8,1);
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(lVar2 + 0x2c) = 0xffffffff;
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),lVar2);
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return;
}

