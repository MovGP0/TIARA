/* Ghidra address: 01d84b00 */
/* Ghidra symbol: FUN_01d84b00 */


undefined8 FUN_01d84b00(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_004168e0(local_20,param_2);
  uVar2 = FUN_00415f70(local_20[0]);
  uVar3 = FUN_0041b800(param_1);
  uVar1 = thunk_FUN_041c3d23(uVar2,2,uVar3);
  FUN_006245b0(uVar1);
  FUN_00414520(local_20);
  return param_1;
}

