/* Ghidra address: 01b161f0 */
/* Ghidra symbol: FUN_01b161f0 */


void FUN_01b161f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_01b15350(param_1,param_2);
  uVar2 = FUN_01b15290(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_01b15260(param_1);
      uVar2 = FUN_01b15290(param_1,param_2,uVar1);
    }
    FUN_01b15530(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_01b155c0(param_1,uVar2,param_3);
  }
  return;
}

