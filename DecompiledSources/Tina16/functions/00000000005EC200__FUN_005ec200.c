/* Ghidra address: 005ec200 */
/* Ghidra symbol: FUN_005ec200 */


undefined1 FUN_005ec200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00414b50(local_30,param_2);
  uVar2 = FUN_005ea1f0(local_30[0]);
  if ((char)uVar2 == '\0') {
    FUN_00416e20(local_30,1,1);
  }
  uVar3 = FUN_005ea6e0(param_1,uVar2);
  uVar4 = FUN_00416740(local_30[0]);
  uVar5 = FUN_00416740(param_3);
  uVar6 = FUN_00416740(param_4);
  uVar2 = thunk_FUN_0415aad1(uVar3,uVar4,uVar5,uVar6);
  uVar1 = FUN_005ea620(param_1,uVar2);
  FUN_00414480(local_30);
  return uVar1;
}

