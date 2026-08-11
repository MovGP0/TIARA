/* Ghidra address: 0044f3e0 */
/* Ghidra symbol: FUN_0044f3e0 */


undefined8 FUN_0044f3e0(longlong param_1,int param_2)

{
  ushort uVar1;
  uint7 uVar3;
  undefined8 uVar2;
  
  uVar2 = 0;
  uVar1 = *(ushort *)(param_1 + (ulonglong)(param_2 - 1) * 2);
  if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
    uVar1 = *(ushort *)(param_1 + (ulonglong)(param_2 - 1) * 2);
    uVar3 = (uint7)(byte)(uVar1 >> 8);
    if ((uVar1 < 0xd800) || (0xdbff < uVar1)) {
      uVar2 = CONCAT71(uVar3,2);
    }
    else {
      uVar2 = CONCAT71(uVar3,1);
    }
  }
  return uVar2;
}

