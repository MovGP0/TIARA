/* Ghidra address: 0043e650 */
/* Ghidra symbol: FUN_0043e650 */


int FUN_0043e650(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + -4);
  }
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_2 + -4);
  }
  uVar2 = FUN_00416740();
  uVar3 = FUN_00416740(param_2);
  iVar1 = FUN_00427780(0x400,0,uVar2,uVar4,uVar3,uVar5);
  return iVar1 + -2;
}

