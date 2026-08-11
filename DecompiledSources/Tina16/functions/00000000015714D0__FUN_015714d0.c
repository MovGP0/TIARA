/* Ghidra address: 015714d0 */
/* Ghidra symbol: FUN_015714d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015714d0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),L"SW_1");
  if (iVar1 == 0) {
    _DAT_0210ee70 = 1;
  }
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}

