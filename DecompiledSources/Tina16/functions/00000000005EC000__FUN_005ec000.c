/* Ghidra address: 005ec000 */
/* Ghidra symbol: FUN_005ec000 */


undefined1 FUN_005ec000(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414b50(local_20,param_2);
  cVar1 = FUN_005ea1f0(local_20[0]);
  if (cVar1 == '\0') {
    FUN_00416e20(local_20,1,1);
  }
  uVar4 = FUN_00416740(local_20[0]);
  uVar5 = FUN_00416740(param_3);
  uVar3 = thunk_FUN_0416778d(*(undefined8 *)(param_1 + 0x10),uVar4,uVar5);
  uVar2 = FUN_005ea620(param_1,uVar3);
  FUN_00414480(local_20);
  return uVar2;
}

