/* Ghidra address: 00b7cee0 */
/* Ghidra symbol: FUN_00b7cee0 */


uint FUN_00b7cee0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 >> 0x10;
  if (param_3 % 2 == 0) {
    uVar3 = param_2 & 0xffff ^
            uVar2 & *(uint *)(param_1 + 0x98 + ((ulonglong)param_3 / 2 & 0xff) * 4);
    uVar1 = uVar3 | *(uint *)(param_1 + 0x98 +
                             (ulonglong)((((uint)((ulonglong)param_3 / 2) & 0xff) + 6) % 8 + 8) * 4)
    ;
  }
  else {
    uVar1 = (param_3 - 1) / 2 & 0xff;
    uVar3 = param_2 & 0xffff ^
            uVar2 & *(uint *)(param_1 + 0x98 + (ulonglong)((uVar1 + 2) % 8 + 8) * 4);
    uVar1 = uVar3 | *(uint *)(param_1 + 0x98 + ((ulonglong)(uVar1 + 4) % 8) * 4);
  }
  return (uVar2 ^ uVar1) << 0x10 | uVar3;
}

