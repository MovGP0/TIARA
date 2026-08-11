/* Ghidra address: 01432540 */
/* Ghidra symbol: FUN_01432540 */


void FUN_01432540(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (**(byte **)(param_1 + 0x10) < 0xc) {
    uVar1 = FUN_01121e50(&PTR_FUN_0111f770,
                         CONCAT71((int7)((ulonglong)*(byte **)(param_1 + 0x10) >> 8),1) & 0xffffffff
                         ,*(undefined8 *)PTR_DAT_02004030,*(undefined8 *)(param_1 + 8),param_2);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return;
}

