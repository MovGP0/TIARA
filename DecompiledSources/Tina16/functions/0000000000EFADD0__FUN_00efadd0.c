/* Ghidra address: 00efadd0 */
/* Ghidra symbol: FUN_00efadd0 */


void FUN_00efadd0(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)*param_2;
  if ((((pbVar1 != (byte *)0x0) && (pbVar2 != (byte *)0x0)) && (bVar3 = *pbVar1, bVar3 != 0)) &&
     (*pbVar2 != 0)) {
    if (*pbVar2 <= bVar3) {
      bVar3 = *pbVar2;
    }
    for (; pbVar1 != (byte *)0x0; pbVar1 = *(byte **)(pbVar1 + 0x10)) {
      if (*pbVar1 != 0xff) {
        *pbVar1 = *pbVar1 - bVar3;
      }
    }
    for (; pbVar2 != (byte *)0x0; pbVar2 = *(byte **)(pbVar2 + 0x10)) {
      if (*pbVar2 != 0xff) {
        *pbVar2 = *pbVar2 - bVar3;
      }
    }
  }
  return;
}

