/* Ghidra address: 0068fad0 */
/* Ghidra symbol: FUN_0068fad0 */


void FUN_0068fad0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x498) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00786a00(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

