/* Ghidra address: 01435f20 */
/* Ghidra symbol: FUN_01435f20 */


void FUN_01435f20(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_014290a0(&PTR_FUN_014288c8,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

