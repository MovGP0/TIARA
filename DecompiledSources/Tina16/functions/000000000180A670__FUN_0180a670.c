/* Ghidra address: 0180a670 */
/* Ghidra symbol: FUN_0180a670 */


void FUN_0180a670(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 != '\0') {
    FUN_007d6450(*(undefined8 *)(param_1 + 0x10));
    uVar1 = FUN_01809c50(param_1);
    FUN_007d6450(uVar1);
  }
  uVar1 = FUN_01809c50(param_1);
  FUN_01809ab0(param_1,param_2,0x10,0x10,*(undefined8 *)(param_1 + 0x10),uVar1);
  return;
}

