/* Ghidra address: 013a44e0 */
/* Ghidra symbol: FUN_013a44e0 */


void FUN_013a44e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,L"[SetTINAMode(1)]");
  FUN_013a40d0(param_1,&local_10);
  *(undefined4 *)(param_1 + 0x6e8) = 1;
  uVar1 = FUN_019a4600();
  FUN_01396fa0(uVar1);
  FUN_00414480(&local_10);
  return;
}

