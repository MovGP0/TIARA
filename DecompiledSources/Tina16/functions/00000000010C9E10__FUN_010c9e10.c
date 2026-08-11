/* Ghidra address: 010c9e10 */
/* Ghidra symbol: FUN_010c9e10 */


undefined8 FUN_010c9e10(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = (ushort)param_2;
  if ((((uVar1 < 0x61) || (0x7a < uVar1)) && ((uVar1 < 0x41 || (0x5a < uVar1)))) && (uVar1 != 0x5f))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
  }
  return uVar2;
}

