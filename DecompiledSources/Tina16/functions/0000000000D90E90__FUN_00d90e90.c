/* Ghidra address: 00d90e90 */
/* Ghidra symbol: FUN_00d90e90 */


ulonglong FUN_00d90e90(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),param_2);
  if ((int)uVar1 == 0x1fffffff) {
    uVar1 = (ulonglong)param_2;
  }
  return uVar1;
}

