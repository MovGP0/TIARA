/* Ghidra address: 01434ba0 */
/* Ghidra symbol: FUN_01434ba0 */


void FUN_01434ba0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01404dd0(&PTR_FUN_01403f78,1,*(undefined8 *)PTR_DAT_02004030,
                       *(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

