/* Ghidra address: 005b2340 */
/* Ghidra symbol: FUN_005b2340 */


void FUN_005b2340(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_005b4770(*(longlong *)(param_1 + 0xc0),param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_00410f20(uVar1);
  FUN_004d4bf0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

