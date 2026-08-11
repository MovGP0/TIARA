/* Ghidra address: 01ba2960 */
/* Ghidra symbol: FUN_01ba2960 */


void FUN_01ba2960(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_34 [4];
  undefined1 local_30 [7];
  undefined1 local_29;
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  
  _Debug_CheckAllCU(*(undefined8 *)(param_1 + 0x968),local_20,local_28,local_30,local_34);
  uVar1 = _Debug_GetMainEntryPoint(*(undefined8 *)(param_1 + 0x968),&local_29);
  *(undefined4 *)(param_1 + 0x538) = uVar1;
  FUN_01ba2180(param_1,0);
  return;
}

