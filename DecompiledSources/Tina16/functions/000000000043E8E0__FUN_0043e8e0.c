/* Ghidra address: 0043e8e0 */
/* Ghidra symbol: FUN_0043e8e0 */


int FUN_0043e8e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  thunk_FUN_041931fb(0);
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + -4) >> 1;
  }
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = *(uint *)(param_2 + -4) >> 1;
  }
  uVar3 = FUN_00415f70(param_1);
  uVar4 = FUN_00415f70(param_2);
  iVar1 = FUN_004277a0(0x400,0,uVar3,uVar5,uVar4,uVar6);
  iVar2 = thunk_FUN_03ce33a6();
  if (iVar2 != 0) {
    FUN_00451a00();
  }
  return iVar1 + -2;
}

