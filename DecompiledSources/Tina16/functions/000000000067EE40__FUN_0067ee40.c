/* Ghidra address: 0067ee40 */
/* Ghidra symbol: FUN_0067ee40 */


void FUN_0067ee40(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_3 + -4);
  }
  uVar1 = FUN_00416740(param_3);
  thunk_FUN_041a24be(param_2,uVar1,uVar2,param_4,param_5);
  return;
}

