/* Ghidra address: 01b215c0 */
/* Ghidra symbol: FUN_01b215c0 */


undefined8 FUN_01b215c0(uint param_1,byte param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = (ulonglong)param_1;
  uVar1 = (ushort)param_1;
  if ((((uVar1 < 0x61) || (0x7a < uVar1)) &&
      ((uVar2 = (ulonglong)param_1, uVar1 < 0x41 || (0x5a < uVar1)))) &&
     (uVar2 = (ulonglong)CONCAT31((int3)(param_1 >> 8),uVar1 == 0x5f),
     (param_2 & uVar1 == 0x5f) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar3;
}

