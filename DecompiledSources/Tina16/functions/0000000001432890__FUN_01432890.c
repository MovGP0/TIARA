/* Ghidra address: 01432890 */
/* Ghidra symbol: FUN_01432890 */


void FUN_01432890(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e0ba80(&PTR_FUN_00e0b248,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

