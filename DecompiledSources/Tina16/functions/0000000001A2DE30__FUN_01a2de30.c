/* Ghidra address: 01a2de30 */
/* Ghidra symbol: FUN_01a2de30 */


void FUN_01a2de30(longlong param_1,double param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6c8);
  iVar2 = FUN_006e65a0(uVar1);
  uVar3 = FUN_0040c840(param_2 * (double)iVar2);
  FUN_006e6920(uVar1,uVar3);
  return;
}

