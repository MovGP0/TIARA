/* Ghidra address: 00588a70 */
/* Ghidra symbol: FUN_00588a70 */


ulonglong FUN_00588a70(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ushort *local_20;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_00468530(&local_40,0,1);
  puVar2 = &local_40;
  cVar1 = FUN_0046f360(*(undefined8 *)(param_1 + 0xe0),puVar2);
  if (cVar1 != '\0') {
    FUN_00588420();
  }
  local_20 = *(ushort **)(param_1 + 0xe0);
  if (*local_20 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)puVar2 >> 8),1) << ((byte)*local_20 & 0x1f) & 0xf0U) !=
            0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_00464c60(*(undefined8 *)(param_1 + 0xe0));
    local_48 = FUN_0040c840();
  }
  else {
    local_48 = FUN_00463a50(*(undefined8 *)(param_1 + 0xe0));
  }
  if (param_2 <= local_48) {
    if (local_48 <= param_3) goto code_r0x00588b52;
  }
  FUN_00588420();
code_r0x00588b52:
  FUN_00460ba0(&local_40);
  return local_48;
}

