/* Ghidra address: 01965040 */
/* Ghidra symbol: FUN_01965040 */


longlong FUN_01965040(longlong param_1,char param_2,undefined8 param_3,ushort param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar3 = 0;
  FUN_0194f560(local_res8,0,param_3,param_4);
  *(bool *)(local_res8 + 0x2c4) = param_4 != 0;
  if (param_4 < 8) {
    uVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << ((byte)param_4 & 0x1f);
    uVar3 = (ulonglong)uVar2;
    bVar4 = (uVar2 & 0x14) != 0;
  }
  else {
    bVar4 = false;
  }
  *(bool *)(local_res8 + 0x2c5) = bVar4;
  if (param_4 < 8) {
    bVar4 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << ((byte)param_4 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar4 = false;
  }
  *(bool *)(local_res8 + 0x2cd) = bVar4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

