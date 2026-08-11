/* Ghidra address: 0070cbc0 */
/* Ghidra symbol: FUN_0070cbc0 */


void FUN_0070cbc0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00786a00(param_1,param_2 & 0xfffffffc);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_00410f20(uVar1);
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

