/* Ghidra address: 0197e980 */
/* Ghidra symbol: FUN_0197e980 */


undefined8 FUN_0197e980(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_0197e560(&PTR_FUN_0194cf70,1);
  iVar1 = FUN_0197e8b0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = FUN_0197eaa0(param_1,iVar4);
      FUN_0197e610(uVar2,uVar3,param_3,param_2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar2;
}

