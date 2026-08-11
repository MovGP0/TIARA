/* Ghidra address: 015d9000 */
/* Ghidra symbol: FUN_015d9000 */


void FUN_015d9000(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x250));
  }
  uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,*(undefined2 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0x250) = uVar1;
  FUN_00414ad0(param_1 + 0x90,param_2);
  return;
}

