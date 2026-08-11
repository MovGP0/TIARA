/* Ghidra address: 0044f380 */
/* Ghidra symbol: FUN_0044f380 */


undefined8 FUN_0044f380(longlong param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  uint7 uVar4;
  undefined8 uVar3;
  int iVar5;
  
  uVar3 = 0;
  if (param_2 < 1) {
    bVar2 = false;
  }
  else {
    iVar5 = 0;
    if (param_1 != 0) {
      iVar5 = *(int *)(param_1 + -4);
    }
    bVar2 = param_2 <= iVar5;
  }
  if (((bVar2) && (uVar1 = *(ushort *)(param_1 + -2 + (longlong)param_2 * 2), 0xd7ff < uVar1)) &&
     (uVar1 < 0xe000)) {
    uVar1 = *(ushort *)(param_1 + -2 + (longlong)param_2 * 2);
    uVar4 = (uint7)(byte)(uVar1 >> 8);
    if ((uVar1 < 0xd800) || (0xdbff < uVar1)) {
      uVar3 = CONCAT71(uVar4,2);
    }
    else {
      uVar3 = CONCAT71(uVar4,1);
    }
  }
  return uVar3;
}

