/* Ghidra address: 0174af30 */
/* Ghidra symbol: FUN_0174af30 */


undefined8 FUN_0174af30(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = FUN_015f7420(uVar1);
  FUN_015f77c0(param_2,uVar1,uVar2,3);
  return param_2;
}

