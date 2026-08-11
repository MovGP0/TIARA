/* Ghidra address: 00d57750 */
/* Ghidra symbol: FUN_00d57750 */


void FUN_00d57750(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_005ffa40(param_1);
  thunk_FUN_03b994b9(uVar1,1);
  uVar1 = FUN_005ffa40(param_1);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + -4);
  }
  uVar2 = FUN_00416740(param_2);
  thunk_FUN_041a24be(uVar1,uVar2,uVar3,param_3,param_4);
  return;
}

