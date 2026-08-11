/* Ghidra address: 015363d0 */
/* Ghidra symbol: FUN_015363d0 */


void FUN_015363d0(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  if (((*(byte *)((longlong)&local_38 + ((longlong)(ulonglong)*(byte *)(param_1 + 0x5db) >> 3)) >>
        ((ulonglong)*(byte *)(param_1 + 0x5db) & 7) & 1) != 0) &&
     (*(char *)(param_1 + 0x325) == '\0')) {
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    if (*(char *)(param_1 + 0x325) == '\0') {
      FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&LAB_0153658c,2);
      FUN_016f5430(param_1,1,0);
      FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&DAT_0153658a,0);
    }
    else {
      FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),1,&DAT_01536588,0);
      FUN_016f6430(param_1,1,0);
      FUN_016f3620(param_1,0,1);
      FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&DAT_0153658a,0);
    }
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    if (*(char *)(param_1 + 0x324) != '\0') {
      if (param_2 == '\0') {
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

