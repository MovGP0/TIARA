/* Ghidra address: 01893000 */
/* Ghidra symbol: FUN_01893000 */


void FUN_01893000(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  FUN_00654e40(param_1,param_2);
  uVar1 = *(uint *)(param_2 + 8) | 0x2000000 |
          *(uint *)(&DAT_01fb26a4 + (ulonglong)*(byte *)(param_1 + 0x498) * 4);
  *(uint *)(param_2 + 8) = uVar1;
  if (*(char *)(param_1 + 0x4bc) == '\0') {
    *(uint *)(param_2 + 8) = uVar1 | 0x300000;
  }
  if (((*(char *)(param_1 + 0x390) != '\0') && (*PTR_DAT_02003210 != '\0')) &&
     (*(char *)(param_1 + 0x498) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  return;
}

