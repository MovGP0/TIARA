/* Ghidra address: 01be58d0 */
/* Ghidra symbol: FUN_01be58d0 */


void FUN_01be58d0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x498) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x30) = 0;
  }
  FUN_0064dbe0(param_1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x670);
  *(undefined8 *)(param_1 + 0x670) = 0;
  FUN_00410f20(uVar1);
  FUN_01be16f0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

