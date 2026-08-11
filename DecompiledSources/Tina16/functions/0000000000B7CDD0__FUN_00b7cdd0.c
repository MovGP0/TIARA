/* Ghidra address: 00b7cdd0 */
/* Ghidra symbol: FUN_00b7cdd0 */


uint FUN_00b7cdd0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00b7cd70(param_1,param_2 >> 0x10 ^ *(uint *)(param_1 + 0x98 + (ulonglong)param_3 * 4),
                       *(undefined4 *)(param_1 + 0x98 + (ulonglong)((param_3 + 5) % 8 + 8) * 4));
  uVar1 = uVar1 ^ param_2 & 0xffff;
  uVar2 = FUN_00b7cd70(param_1,param_2 & 0xffff ^
                               *(uint *)(param_1 + 0x98 + ((ulonglong)(param_3 + 2) % 8) * 4),
                       *(undefined4 *)(param_1 + 0x98 + (ulonglong)((param_3 + 1) % 8 + 8) * 4));
  uVar2 = uVar2 ^ uVar1;
  uVar1 = FUN_00b7cd70(param_1,uVar1 ^ *(uint *)(param_1 + 0x98 + ((ulonglong)(param_3 + 7) % 8) * 4
                                                ),
                       *(undefined4 *)(param_1 + 0x98 + (ulonglong)((param_3 + 3) % 8 + 8) * 4));
  return (uVar2 ^ *(uint *)(param_1 + 0x98 + ((ulonglong)(param_3 + 4) % 8) * 4)) << 0x10 |
         uVar1 ^ uVar2;
}

