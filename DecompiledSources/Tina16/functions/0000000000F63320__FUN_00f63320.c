/* Ghidra address: 00f63320 */
/* Ghidra symbol: FUN_00f63320 */


void FUN_00f63320(longlong param_1,longlong param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  
  if (param_4 == '\0') {
    FUN_00f62ac0(param_1,*(undefined8 *)(param_1 + 0x10),0xffffff);
  }
  else {
    cVar1 = FUN_00f6f9b0(param_2,0x20);
    if (cVar1 == '\0') {
      FUN_00f62ac0(param_1,*(undefined8 *)(param_1 + 0x10),param_3);
    }
    else {
      FUN_00f62ac0(param_1,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(PTR_DAT_02002068 + 0xc));
    }
  }
  cVar1 = FUN_00f6f9b0(param_2,0x40);
  if (cVar1 == '\0') {
    cVar1 = FUN_00f6f970(param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_00f6f8e0(param_2);
      if (cVar1 != '\0') {
        FUN_00f652e0(param_1,0xff);
        goto LAB_00f63404;
      }
    }
    FUN_00f652e0(param_1,*(undefined4 *)(PTR_DAT_02002068 + 8));
    FUN_00f65300(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x28));
  }
  else {
    FUN_00f652e0(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x18));
    FUN_00f65300(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x34));
  }
LAB_00f63404:
  FUN_00f65320(param_1,0);
  FUN_00f652c0(param_1,4);
  FUN_00f62f10(param_1,param_2,param_2 + 0x28);
  cVar1 = FUN_00f6f970(param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_00f6f8e0(param_2);
    if (cVar1 == '\0') {
      FUN_00f63520(param_1,param_2,*(undefined4 *)(PTR_DAT_02002068 + 0x10),
                   *(undefined4 *)(PTR_DAT_02002068 + 0x2c),2);
    }
  }
  *(undefined1 *)(param_2 + 0x40) = 0;
  return;
}

