/* Ghidra address: 015fae30 */
/* Ghidra symbol: FUN_015fae30 */


undefined8 FUN_015fae30(undefined4 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = (ushort)param_1;
  if ((((uVar1 < 0x30) || (0x39 < uVar1)) && ((uVar1 < 0x41 || (0x46 < uVar1)))) &&
     ((uVar1 < 0x61 || (0x66 < uVar1)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)param_1 >> 8),1);
  }
  return uVar2;
}

