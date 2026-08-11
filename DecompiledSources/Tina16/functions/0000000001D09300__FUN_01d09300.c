/* Ghidra address: 01d09300 */
/* Ghidra symbol: FUN_01d09300 */


void FUN_01d09300(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (*(longlong *)PTR_DAT_02001d08 != 0) {
    cVar1 = FUN_017fea70(*(undefined8 *)PTR_DAT_02001d08);
    if (cVar1 != '\0') {
      FUN_017ff4f0(param_1,&local_10);
      FUN_01d08c80(param_1,&local_30,0);
      FUN_00416cd0(&local_18,5,L"InsertPart(",local_30,&DAT_01d09570,*(undefined8 *)(param_1 + 0x98)
                   ,&DAT_01d09580);
      puVar3 = &local_20;
      puVar5 = &local_24;
      FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_38,local_10,L"InsertPart",puVar3,puVar5,
                   &local_28);
      uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
      uVar4 = (undefined4)((ulonglong)puVar3 >> 0x20);
      iVar2 = FUN_00416db0(local_18,local_38);
      if (iVar2 != 0) {
        FUN_00415dd0(&local_40,local_10,0);
        FUN_00415dd0(&local_48,local_20,0);
        FUN_00415dd0(&local_50,local_18,0);
        FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_40,local_48,local_50,
                     CONCAT44(uVar4,local_24),CONCAT44(uVar6,local_28));
      }
      (**(code **)(*param_2 + 0x78))(param_2,local_18);
    }
  }
  FUN_00414590(&local_50,3);
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_20,3);
  return;
}

