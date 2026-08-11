/* Ghidra address: 0136ad30 */
/* Ghidra symbol: FUN_0136ad30 */


void FUN_0136ad30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x18) == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x27a8)) {
    FUN_01994230(*(longlong *)(param_1 + 0x18));
    FUN_0199e010(*(undefined8 *)(param_1 + 0x18),0);
  }
  FUN_00805ad0(*(undefined8 *)PTR_DAT_02002fa8);
  FUN_01364f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

