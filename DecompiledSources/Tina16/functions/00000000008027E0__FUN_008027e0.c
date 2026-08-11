/* Ghidra address: 008027e0 */
/* Ghidra symbol: FUN_008027e0 */


void FUN_008027e0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((((((*(byte *)(param_1 + 0x6a8) & 8) == 0) && (*(longlong *)(DAT_02012668 + 0xa8) != 0)) &&
       (*(longlong *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x500) != 0)) &&
      (*(longlong *)(DAT_02012668 + 0xa8) != param_1)) &&
     ((*(char *)(param_1 + 0x4d6) == '\x01' ||
      (*(char *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x4d6) != '\x02')))) {
    uVar2 = 0;
    if ((((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(longlong *)(param_1 + 0x500) != 0)) &&
       ((*(char *)(*(longlong *)(param_1 + 0x500) + 0xd0) != '\0' ||
        (*(char *)(param_1 + 0x4d6) == '\x01')))) {
      uVar2 = *(undefined8 *)(param_1 + 0x500);
    }
    uVar1 = *(undefined8 *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x500);
    if (param_2 == '\0') {
      FUN_007e7270(uVar1,uVar2);
    }
    else {
      FUN_007e7230(uVar1,uVar2);
    }
  }
  return;
}

