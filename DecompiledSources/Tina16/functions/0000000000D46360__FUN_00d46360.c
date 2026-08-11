/* Ghidra address: 00d46360 */
/* Ghidra symbol: FUN_00d46360 */


void FUN_00d46360(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00789f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

