/* Ghidra address: 00722540 */
/* Ghidra symbol: FUN_00722540 */


undefined8 FUN_00722540(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*param_2 == DAT_020124d4) && (*(int *)(param_1 + 0x7c) != 0)) {
    FUN_0080dac0(*(undefined8 *)PTR_DAT_02004030,*(undefined4 *)(param_1 + 0x7c));
    uVar1 = 1;
  }
  return uVar1;
}

