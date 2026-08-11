/* Ghidra address: 00c535d0 */
/* Ghidra symbol: FUN_00c535d0 */


undefined8 FUN_00c535d0(undefined4 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = (ushort)param_1;
  if ((((uVar1 < 0x61) || (0x7a < uVar1)) && ((uVar1 < 0x41 || (0x5a < uVar1)))) &&
     ((uVar1 != 0x5f && (uVar1 != 0xb0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)param_1 >> 8),1);
  }
  return uVar2;
}

