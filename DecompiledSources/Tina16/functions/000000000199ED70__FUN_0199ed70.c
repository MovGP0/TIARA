/* Ghidra address: 0199ed70 */
/* Ghidra symbol: FUN_0199ed70 */


void FUN_0199ed70(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if (param_2 != 0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x05') {
      FUN_017c2600(param_2,0);
      FUN_017ff4f0(param_2,local_20);
      FUN_00414b50(param_1 + 0x48,local_20[0]);
      FUN_00416cd0(param_1 + 0x40,3,L"SetWireState(",*(undefined8 *)(param_1 + 0x48),&DAT_0199efa4);
      lVar3 = param_1 + 0x58;
      lVar5 = param_1 + 0x54;
      FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_28,*(undefined8 *)(param_1 + 0x48),
                   L"SetWireState",lVar3,lVar5,param_1 + 0x50);
      uVar6 = (undefined4)((ulonglong)lVar5 >> 0x20);
      uVar4 = (undefined4)((ulonglong)lVar3 >> 0x20);
      iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x40),local_28);
      if (iVar2 != 0) {
        FUN_00415dd0(&local_30,*(undefined8 *)(param_1 + 0x48),0);
        FUN_00415dd0(&local_38,*(undefined8 *)(param_1 + 0x58),0);
        FUN_00415dd0(&local_40,*(undefined8 *)(param_1 + 0x40),0);
        FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_30,local_38,local_40,
                     CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x54)),
                     CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x50)));
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                  (*(longlong **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      }
    }
  }
  FUN_00414590(&local_40,3);
  FUN_00414560(&local_28,2);
  return;
}

