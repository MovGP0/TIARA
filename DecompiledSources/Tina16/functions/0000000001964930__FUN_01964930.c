/* Ghidra address: 01964930 */
/* Ghidra symbol: FUN_01964930 */


void FUN_01964930(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  if (param_2 != 0) {
    FUN_0197f9a0(param_2,param_1);
  }
  cVar2 = FUN_0195f670(param_1,0);
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x38))
              (*(longlong **)(param_1 + 0x308),&local_20);
    bVar1 = false;
    FUN_004168b0(&local_38,local_20);
    FUN_0043e130(&local_30,local_38);
    iVar3 = FUN_004170c0(L"[TOTALPAGES#]",local_30,1);
    while (0 < iVar3) {
      FUN_00416490(&local_20,iVar3,0xd);
      FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0x3b0));
      FUN_004168e0(&local_48,local_40);
      FUN_00416550(local_48,&local_20,iVar3);
      FUN_004168b0(&local_58,local_20);
      FUN_0043e130(&local_50,local_58);
      iVar3 = FUN_005b8d30(L"[TOTALPAGES#]",local_50,iVar3);
      bVar1 = true;
    }
    FUN_004168b0(&local_68,local_20);
    FUN_0043e130(&local_60,local_68);
    iVar3 = FUN_004170c0(L"[COPYNAME#]",local_60,1);
    while (0 < iVar3) {
      FUN_0043f750(&local_78,*(undefined4 *)(param_1 + 0x3b4));
      FUN_00416ba0(&local_70,L"CopyName",local_78);
      iVar4 = FUN_018163f0(DAT_02110728,local_70);
      if (iVar4 == -1) {
        FUN_00414520(&local_28);
      }
      else {
        lVar5 = FUN_018163e0(DAT_02110728,iVar4);
        FUN_0046c3f0(&local_80,lVar5 + 0x28);
        FUN_004168e0(&local_28,local_80);
      }
      FUN_00416490(&local_20,iVar3,0xb);
      FUN_00416550(local_28,&local_20,iVar3);
      iVar4 = FUN_00414cc0(local_28);
      FUN_004168b0(&local_90,local_20);
      FUN_0043e130(&local_88,local_90);
      iVar3 = FUN_005b8d30(L"[COPYNAME#]",local_88,iVar3 + iVar4);
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x308) + 0x58))
                (*(longlong **)(param_1 + 0x308),local_20);
    }
  }
  FUN_00414560(&local_90,9);
  FUN_00414520(&local_48);
  FUN_00414560(&local_40,3);
  FUN_004145c0(&local_28,2);
  return;
}

