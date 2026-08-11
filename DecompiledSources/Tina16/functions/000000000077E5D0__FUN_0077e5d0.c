/* Ghidra address: 0077e5d0 */
/* Ghidra symbol: FUN_0077e5d0 */


undefined8 FUN_0077e5d0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (((param_2 < 0x20 && 1 << (param_2 & 0x1f) != 0) && (*(char *)(param_1 + 0x6a) != '\0')) &&
     (*(longlong *)(param_1 + 0x70 + (ulonglong)param_2 * 8) == 0)) {
    uVar1 = (**(code **)PTR_DAT_020024d8)(0,(&PTR_u_button_01e084b0)[param_2]);
    *(undefined8 *)(param_1 + 0x70 + (ulonglong)param_2 * 8) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x70 + (ulonglong)param_2 * 8);
}

