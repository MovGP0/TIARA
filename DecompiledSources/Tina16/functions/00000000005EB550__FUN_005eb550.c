/* Ghidra address: 005eb550 */
/* Ghidra symbol: FUN_005eb550 */


undefined4 FUN_005eb550(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_2c [3];
  
  FUN_0040d200(param_3,8,0);
  uVar3 = FUN_00416740(param_2);
  uVar2 = thunk_FUN_0419d678(*(undefined8 *)(param_1 + 8),uVar3,0,local_2c,0,param_3 + 4);
  uVar2 = FUN_005ea620(param_1,uVar2);
  uVar1 = FUN_005ea250(local_2c[0]);
  *param_3 = uVar1;
  return uVar2;
}

