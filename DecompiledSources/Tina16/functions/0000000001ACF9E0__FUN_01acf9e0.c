/* Ghidra address: 01acf9e0 */
/* Ghidra symbol: FUN_01acf9e0 */


undefined8 FUN_01acf9e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (ulonglong)*(uint *)(param_1 + 0xa0);
  local_28 = (uint)uVar1;
  if ((((*(uint *)(param_1 + 0xa0) == local_28) &&
       (uVar3 = (ulonglong)*(uint *)(param_1 + 0xa8), local_20 = (uint)uVar2,
       *(uint *)(param_1 + 0xa8) == local_20)) &&
      (uVar3 = (ulonglong)*(uint *)(param_1 + 0xa4), local_24 = (uint)((ulonglong)uVar1 >> 0x20),
      *(uint *)(param_1 + 0xa4) == local_24)) &&
     (uVar3 = (ulonglong)*(uint *)(param_1 + 0xac), local_1c = (uint)((ulonglong)uVar2 >> 0x20),
     *(uint *)(param_1 + 0xac) == local_1c)) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  return uVar4;
}

