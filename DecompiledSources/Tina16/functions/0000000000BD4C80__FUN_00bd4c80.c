/* Ghidra address: 00bd4c80 */
/* Ghidra symbol: FUN_00bd4c80 */


undefined8 FUN_00bd4c80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00609e10(*(undefined8 *)(param_1 + 0x20));
  uVar1 = FUN_005ffa40(uVar1);
  uVar1 = FUN_00bd1940(uVar1,param_2,param_3);
  return uVar1;
}

