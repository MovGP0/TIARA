/* Ghidra address: 013901c0 */
/* Ghidra symbol: FUN_013901c0 */


void FUN_013901c0(undefined8 *param_1,byte param_2,byte param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = *param_1;
  uStack_30 = param_1[1];
  uStack_28 = param_1[2];
  uStack_20 = param_1[3];
  if (((*(byte *)((longlong)&local_38 + ((longlong)(ulonglong)*(byte *)(param_4 + 0x5db) >> 3)) >>
        ((ulonglong)*(byte *)(param_4 + 0x5db) & 7) & 1) != 0) &&
     ((param_2 & *(byte *)(param_4 + 0x325)) == 0)) {
    FUN_017d9ab0(*(undefined8 *)(param_4 + 0xd8),0);
    if (*(char *)(param_4 + 0x325) == '\0') {
      FUN_01af25b0(*(undefined8 *)(param_4 + 0xf10),0,&DAT_01390410,2);
      cVar1 = FUN_01b07dd0(param_4);
      if (cVar1 == '\0') {
        FUN_016f5430(param_4,1,0);
      }
      else {
        FUN_016f39b0(param_4,1,0);
      }
      FUN_01af25b0(*(undefined8 *)(param_4 + 0xf10),0,&DAT_0139040e,0);
    }
    else {
      FUN_01af25b0(*(undefined8 *)(param_4 + 0xf10),1,&DAT_0139040c,0);
      FUN_016f6430(param_4,1,0);
      FUN_016f3620(param_4,0,1);
      FUN_01af25b0(*(undefined8 *)(param_4 + 0xf10),0,&DAT_0139040e,0);
    }
    FUN_017d9ab0(*(undefined8 *)(param_4 + 0xd8),0);
    if (*(char *)(param_4 + 0x324) != '\0') {
      if (*PTR_DAT_020052b8 == '\0') {
        if (param_3 < 8) {
          bVar3 = ((int)CONCAT71((int7)((ulonglong)PTR_DAT_020052b8 >> 8),1) << (param_3 & 0x1f) &
                  3U) != 0;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          uVar2 = FUN_01b04b70(&PTR_FUN_01af3038,1,param_4);
          FUN_004134c0(uVar2);
        }
        else {
          FUN_00de8980(&local_48,0x10a,*(undefined8 *)(param_4 + 0x1310));
          FUN_01b05000(local_48,0);
        }
      }
      else {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_40,0x10a);
        FUN_013a4820(*(undefined8 *)PTR_DAT_020032b8,local_40);
        FUN_0044d440();
      }
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

