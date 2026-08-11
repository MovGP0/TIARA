/* Ghidra address: 01be97c0 */
/* Ghidra symbol: FUN_01be97c0 */


void FUN_01be97c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x672) != param_2) {
    *(char *)(param_1 + 0x672) = param_2;
    uVar1 = *(undefined8 *)(param_1 + 0x620);
    *(undefined8 *)(param_1 + 0x620) = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

