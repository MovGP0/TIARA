/* Ghidra address: 01969f30 */
/* Ghidra symbol: FUN_01969f30 */


void FUN_01969f30(longlong param_1,double param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  FUN_01950900(param_1,param_2);
  fVar2 = (float)FUN_0196a360(param_1);
  uVar1 = FUN_0040c770(param_2 * (double)fVar2);
  FUN_00806af0(*(undefined8 *)(param_1 + 0x180),uVar1);
  return;
}

