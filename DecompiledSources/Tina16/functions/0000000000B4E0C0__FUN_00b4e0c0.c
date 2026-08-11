/* Ghidra address: 00b4e0c0 */
/* Ghidra symbol: FUN_00b4e0c0 */


undefined8 FUN_00b4e0c0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00b4dab0(param_1);
  uVar2 = FUN_00b23d20(**(undefined8 **)(param_1 + 0x18),uVar1);
  FUN_00b23800(param_2,uVar2);
  return param_2;
}

