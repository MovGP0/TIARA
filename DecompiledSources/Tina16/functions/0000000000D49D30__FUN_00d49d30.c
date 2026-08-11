/* Ghidra address: 00d49d30 */
/* Ghidra symbol: FUN_00d49d30 */


undefined8 FUN_00d49d30(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_00d49cd0(param_1);
  iVar2 = FUN_00d49cb0(param_1);
  iVar3 = FUN_00d49da0(param_1);
  if ((((iVar1 < 0) || (iVar3 < iVar1)) || (iVar2 < iVar3)) || (iVar2 == iVar1)) {
    uVar5 = 0;
  }
  else {
    dVar4 = (double)(iVar3 - iVar1) / (double)(iVar2 - iVar1);
    uVar5 = CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4);
  }
  return uVar5;
}

