/* Ghidra address: 00cd2c80 */
/* Ghidra symbol: FUN_00cd2c80 */


undefined8 FUN_00cd2c80(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00cd2c60();
  uVar2 = (**(code **)PTR_DAT_02004398)(uVar1);
  FUN_004167a0(param_2,uVar2);
  return param_2;
}

