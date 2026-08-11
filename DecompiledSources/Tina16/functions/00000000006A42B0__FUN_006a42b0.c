/* Ghidra address: 006a42b0 */
/* Ghidra symbol: FUN_006a42b0 */


void FUN_006a42b0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_00410f20(uVar1);
  FUN_0061d110(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

