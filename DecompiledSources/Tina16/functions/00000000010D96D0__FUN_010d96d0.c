/* Ghidra address: 010d96d0 */
/* Ghidra symbol: FUN_010d96d0 */


void FUN_010d96d0(longlong param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_3 == 0xd) {
    *param_3 = 0;
    cVar1 = *(char *)(param_1 + 0x9be);
    if (cVar1 == '\0') {
      uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x968));
      *(undefined8 *)(param_1 + 0x970) = uVar2;
      FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x970));
    }
    else if (cVar1 == '\x01') {
      uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x968));
      *(undefined8 *)(param_1 + 0x978) = uVar2;
      FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x978));
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x968));
      *(undefined8 *)(param_1 + 0x980) = uVar2;
      FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x980));
    }
  }
  return;
}

