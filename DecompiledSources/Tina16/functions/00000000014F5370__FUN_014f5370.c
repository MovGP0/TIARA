/* Ghidra address: 014f5370 */
/* Ghidra symbol: FUN_014f5370 */


void FUN_014f5370(longlong param_1,byte param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_40 = 0;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  uStack_28 = param_3[2];
  uStack_20 = param_3[3];
  if ((*(char *)(param_1 + 0x325) == '\0') &&
     ((*(byte *)((longlong)&local_38 + ((longlong)(ulonglong)*(byte *)(param_1 + 0x5db) >> 3)) >>
       ((ulonglong)*(byte *)(param_1 + 0x5db) & 7) & 1) != 0)) {
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&DAT_014f54c8,2);
    FUN_016f5430(param_1,1,0);
    FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&DAT_014f54ce,0);
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    if (*(char *)(param_1 + 0x324) != '\0') {
      if (param_2 < 8) {
        bVar2 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (param_2 & 0x1f) & 3U) != 0;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        uVar1 = FUN_01b04b70(&PTR_FUN_01af3038,1,param_1);
        FUN_004134c0(uVar1);
      }
      else {
        FUN_00de8980(&local_40,0x10a,*(undefined8 *)(param_1 + 0x1310));
        FUN_01b05000(local_40,0);
      }
    }
  }
  FUN_00414480(&local_40);
  return;
}

