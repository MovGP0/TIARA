/* Ghidra address: 01434d20 */
/* Ghidra symbol: FUN_01434d20 */


void FUN_01434d20(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0141d2f0(&PTR_FUN_0141cd98,1,*(undefined8 *)PTR_DAT_02004030,
                       **(undefined8 **)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

