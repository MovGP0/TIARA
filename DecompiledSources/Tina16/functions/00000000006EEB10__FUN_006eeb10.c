/* Ghidra address: 006eeb10 */
/* Ghidra symbol: FUN_006eeb10 */


void FUN_006eeb10(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006eea00(param_1);
  uVar2 = FUN_006ef6e0(*(undefined8 *)(param_1 + 0x78));
  FUN_00611ec0(uVar1,uVar2,param_2,0xffffffffffffffff);
  FUN_006eea20(param_1,param_2);
  return;
}

