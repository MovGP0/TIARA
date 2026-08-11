/* Ghidra address: 0078e450 */
/* Ghidra symbol: FUN_0078e450 */


void FUN_0078e450(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0078d820(param_1,param_2);
  iVar2 = FUN_0078d770(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
  }
  return;
}

