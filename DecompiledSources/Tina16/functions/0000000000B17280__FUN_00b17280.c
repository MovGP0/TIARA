/* Ghidra address: 00b17280 */
/* Ghidra symbol: FUN_00b17280 */


undefined4 FUN_00b17280(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00b17250(param_1,0,1);
  uVar2 = FUN_00b17250(param_1,0,2);
  FUN_00b17250(param_1,uVar1,0);
  return uVar2;
}

