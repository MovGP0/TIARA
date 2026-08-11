/* Ghidra address: 01c3db80 */
/* Ghidra symbol: FUN_01c3db80 */


undefined8 FUN_01c3db80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_01c337e0();
  iVar2 = FUN_01c337e0(param_2);
  if (iVar1 == iVar2) {
    uVar3 = 0;
  }
  else if (iVar1 < iVar2) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

