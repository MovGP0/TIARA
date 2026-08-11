/* Ghidra address: 0196e100 */
/* Ghidra symbol: FUN_0196e100 */


void FUN_0196e100(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_004b1e70(param_1);
  local_10 = FUN_01804390(&DAT_01802268,1);
  FUN_01804870(local_10,param_2,0);
  iVar1 = FUN_0043e420(*(undefined8 *)(*(longlong *)(local_10 + 0x28) + 0x20),L"style");
  if (iVar1 == 0) {
    FUN_0196dd70(param_1,*(undefined8 *)(local_10 + 0x28),*(undefined1 *)(local_10 + 0x38));
  }
  FUN_00410f20(local_10);
  return;
}

