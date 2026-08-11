/* Ghidra address: 0065fd10 */
/* Ghidra symbol: FUN_0065fd10 */


longlong FUN_0065fd10(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_004238d0(param_2,0,0,param_3,0);
  uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
  uVar1 = FUN_00652100(param_1);
  uVar3 = FUN_00416740(param_4);
  thunk_FUN_041a24be(uVar2,uVar3,0xffffffff,param_2,uVar1 | 0xc10);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 6;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 2;
  return param_2;
}

