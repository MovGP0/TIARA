/* Ghidra address: 00623d50 */
/* Ghidra symbol: FUN_00623d50 */


undefined8 FUN_00623d50(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  if (param_2 == 0) {
    FUN_0041b840(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x78));
    uVar1 = 0;
  }
  else {
    uVar1 = 0x8002000b;
  }
  return uVar1;
}

