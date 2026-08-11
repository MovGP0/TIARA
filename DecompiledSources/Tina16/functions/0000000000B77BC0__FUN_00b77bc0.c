/* Ghidra address: 00b77bc0 */
/* Ghidra symbol: FUN_00b77bc0 */


undefined8 FUN_00b77bc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_00b77b90(param_1,param_1,param_2);
    uVar1 = FUN_00b77b90(param_1,uVar1,param_2);
    uVar1 = FUN_00b77b90(uVar1,uVar1,param_2);
    uVar2 = FUN_00b77b90(param_1,uVar1,param_2);
  }
  return uVar2;
}

