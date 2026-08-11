/* Ghidra address: 004e6770 */
/* Ghidra symbol: FUN_004e6770 */


void FUN_004e6770(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004e5a10(param_1,param_2);
  iVar2 = FUN_004e5960(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
  }
  return;
}

