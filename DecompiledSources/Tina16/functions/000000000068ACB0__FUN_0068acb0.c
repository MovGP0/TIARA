/* Ghidra address: 0068acb0 */
/* Ghidra symbol: FUN_0068acb0 */


void FUN_0068acb0(longlong *param_1,int param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_38 = 0;
  bVar1 = *(byte *)(param_1[7] + 0x4cc);
  if (bVar1 < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)param_1[7] >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar7 = false;
  }
  puVar3 = auStack_68;
  if (!bVar7) {
    FUN_004b3260(param_1);
    (**(code **)(*param_1 + 0x18))(param_1,&local_38,param_2);
    lVar2 = param_1[7];
    pcVar5 = (code *)FUN_00411550(lVar2,0xffac);
    local_30 = (*pcVar5)(lVar2,param_2);
    (**(code **)(*param_1 + 0x18))(param_1,&local_48,param_3);
    (**(code **)(*param_1 + 0x40))(param_1,param_2,local_48);
    lVar2 = param_1[7];
    pcVar5 = (code *)FUN_00411550(lVar2,0xffac);
    uVar6 = (*pcVar5)(lVar2,param_3);
    pcVar5 = (code *)FUN_00411550(lVar2,0xffab);
    (*pcVar5)(lVar2,param_2,uVar6);
    (**(code **)(*param_1 + 0x40))(param_1,param_3,local_38);
    lVar2 = param_1[7];
    pcVar5 = (code *)FUN_00411550(lVar2,0xffab);
    (*pcVar5)(lVar2,param_3,local_30);
    iVar4 = (**(code **)(*(longlong *)param_1[7] + 0x260))((longlong *)param_1[7]);
    if (iVar4 == param_2) {
      (**(code **)(*(longlong *)param_1[7] + 0x268))((longlong *)param_1[7],param_3);
    }
    else {
      iVar4 = (**(code **)(*(longlong *)param_1[7] + 0x260))((longlong *)param_1[7]);
      if (iVar4 == param_3) {
        (**(code **)(*(longlong *)param_1[7] + 0x268))((longlong *)param_1[7],param_2);
      }
    }
    FUN_004b3390(param_1);
    puVar3 = local_40;
  }
  local_40 = puVar3;
  FUN_00414480(&local_48);
  FUN_00414480(&local_38);
  return;
}

