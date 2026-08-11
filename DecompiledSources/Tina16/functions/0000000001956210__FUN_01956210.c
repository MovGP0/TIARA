/* Ghidra address: 01956210 */
/* Ghidra symbol: FUN_01956210 */


undefined8 * FUN_01956210(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00414480(param_2);
  if (*(char *)(param_1 + 8) != *(char *)(param_3 + 8)) {
    FUN_00468530(&local_38,*(char *)(param_1 + 8),1);
    FUN_018036e0(local_20,&local_38);
    FUN_00416cd0(param_2,6,*param_2,&DAT_01956638,param_4,L".Kind=\"",local_20[0],&DAT_01956664);
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_3 + 0x10));
  if (iVar1 != 0) {
    FUN_01802f80(&local_40,*(undefined8 *)(param_1 + 0x10));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01956638,param_4,L".DetailReport=\"",local_40,&DAT_01956664
                );
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_3 + 0x18));
  if (iVar1 != 0) {
    FUN_01802f80(&local_48,*(undefined8 *)(param_1 + 0x18));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01956638,param_4,L".DetailPage=\"",local_48,&DAT_01956664);
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_3 + 0x28));
  if (iVar1 != 0) {
    FUN_01802f80(&local_50,*(undefined8 *)(param_1 + 0x28));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01956638,param_4,L".ReportVariable=\"",local_50,
                 &DAT_01956664);
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_3 + 0x40));
  if (iVar1 != 0) {
    FUN_01802f80(&local_58,*(undefined8 *)(param_1 + 0x40));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01956638,param_4,L".TabCaption=\"",local_58,&DAT_01956664);
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_3 + 0x30));
  if (iVar1 != 0) {
    FUN_01802f80(&local_60,*(undefined8 *)(param_1 + 0x30));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01956638,param_4,L".Value=\"",local_60,&DAT_01956664);
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_3 + 0x38));
  if (iVar1 != 0) {
    FUN_01802f80(&local_68,*(undefined8 *)(param_1 + 0x38));
    FUN_00416cd0(param_2,6,*param_2,&DAT_01956638,param_4,L".ValuesSeparator=\"",local_68,
                 &DAT_01956664);
  }
  FUN_00414560(&local_68,6);
  FUN_00460ba0(&local_38);
  FUN_00414480(local_20);
  return param_2;
}

