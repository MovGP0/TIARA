/* Ghidra address: 005ec0c0 */
/* Ghidra symbol: FUN_005ec0c0 */


undefined1 FUN_005ec0c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,param_2);
  cVar1 = FUN_005ea1f0(local_10);
  if (cVar1 == '\0') {
    FUN_00416e20(&local_10,1,1);
  }
  uVar4 = FUN_00416740(local_10);
  uVar3 = thunk_FUN_039d8f0f(*(undefined8 *)(param_1 + 0x10),uVar4);
  uVar2 = FUN_005ea620(param_1,uVar3);
  FUN_00414480(&local_10);
  return uVar2;
}

