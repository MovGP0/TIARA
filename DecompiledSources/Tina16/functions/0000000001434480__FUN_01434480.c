/* Ghidra address: 01434480 */
/* Ghidra symbol: FUN_01434480 */


void FUN_01434480(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_014000e0(&PTR_FUN_013faf98,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

