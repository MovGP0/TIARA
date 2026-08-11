/* Ghidra address: 01951d40 */
/* Ghidra symbol: FUN_01951d40 */


undefined8 *
FUN_01951d40(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
            undefined8 param_5)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414480(param_2);
  FUN_005fccd0(param_3,local_20);
  FUN_005fccd0(param_4,&local_28);
  iVar4 = FUN_00416db0(local_20[0],local_28);
  if (iVar4 != 0) {
    FUN_005fccd0(param_3,&local_38);
    FUN_01802f80(&local_30,local_38);
    FUN_00416cd0(param_2,5,*param_2,param_5,L"Font.Name=\"",local_30,&DAT_019520ec);
  }
  iVar4 = FUN_005fce00(param_3);
  iVar5 = FUN_005fce00(param_4);
  if (iVar4 != iVar5) {
    uVar6 = FUN_005fce00(param_3);
    FUN_0043f750(&local_40,uVar6);
    FUN_00416cd0(param_2,5,*param_2,param_5,L"Font.Size=\"",local_40,&DAT_019520ec);
  }
  if (*(int *)(param_3 + 0x28) != *(int *)(param_4 + 0x28)) {
    FUN_0043f750(&local_48,*(int *)(param_3 + 0x28));
    FUN_00416cd0(param_2,5,*param_2,param_5,L"Font.Color=\"",local_48,&DAT_019520ec);
  }
  cVar1 = FUN_005fce60(param_3);
  cVar2 = FUN_005fce60(param_4);
  if (cVar1 != cVar2) {
    uVar7 = FUN_005fce60(param_3);
    bVar8 = (uVar7 & 1) != 0;
    uVar7 = FUN_005fce60(param_3);
    if ((uVar7 & 2) != 0) {
      bVar8 = bVar8 | 2;
    }
    uVar7 = FUN_005fce60(param_3);
    if ((uVar7 & 4) != 0) {
      bVar8 = bVar8 | 4;
    }
    uVar7 = FUN_005fce60(param_3);
    if ((uVar7 & 8) != 0) {
      bVar8 = bVar8 | 8;
    }
    FUN_0043f750(&local_50,bVar8);
    FUN_00416cd0(param_2,5,*param_2,param_5,L"Font.Style=\"",local_50,&DAT_019520ec);
  }
  cVar1 = FUN_005fcf90(param_3);
  cVar2 = FUN_005fcf90(param_4);
  if (cVar1 != cVar2) {
    uVar3 = FUN_005fcf90(param_3);
    FUN_0043f750(&local_58,uVar3);
    FUN_00416cd0(param_2,5,*param_2,param_5,L"Font.Charset=\"",local_58,&DAT_019520ec);
  }
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414560(&local_28,2);
  return param_2;
}

