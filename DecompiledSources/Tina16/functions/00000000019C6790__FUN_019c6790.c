/* Ghidra address: 019c6790 */
/* Ghidra symbol: FUN_019c6790 */


void FUN_019c6790(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 char param_9)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res20;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = *param_2;
  local_28 = *param_3;
  local_res20 = param_4;
  FUN_00419500(param_4);
  lVar4 = *(longlong *)(param_1 + 0x78);
  lVar5 = 0;
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(lVar4 + -8);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  cVar2 = FUN_019c54d0(param_1,local_res20,*(undefined8 *)(param_1 + 0x38),
                       *(undefined8 *)(param_1 + 0x48),uVar6,param_5,param_6,lVar4,lVar5 + -1,4,1);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + -8);
  }
  FUN_00419260(param_1 + 0x78,&DAT_019bf8d8,1,lVar4 + 1);
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + -8);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (lVar4 + -1) * 0x40);
  *puVar1 = local_20;
  puVar1[1] = local_28;
  FUN_004194b0(puVar1 + 2,local_res20,&DAT_0147b748);
  *(char *)(puVar1 + 3) = cVar2;
  if (cVar2 == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar5 = 0;
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + -8);
    }
    uVar3 = FUN_019c6f50(param_1,local_res20,lVar4,lVar5 + -1,CONCAT44(uVar3,4));
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar3;
  }
  else {
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  }
  *(char *)(puVar1 + 4) = param_9;
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar3 = (undefined4)*(undefined8 *)(*(longlong *)(param_1 + 0x78) + -8);
  }
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar3;
  puVar1[5] = param_5;
  *(undefined4 *)(puVar1 + 7) = param_7;
  puVar1[6] = param_6;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = param_8;
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (param_9 == '\x01') {
      FUN_00414b50(&local_40,L"orthogonal");
    }
    else if (param_9 == '\0') {
      FUN_00414b50(&local_40,L"straight");
    }
    else if (param_9 == '\x02') {
      FUN_00414b50(&local_40,L"dynamic");
    }
    local_60 = local_40;
    local_58 = 0x11;
    FUN_00442f70(local_50,L"  fixed route: %s",&local_60,0);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
              (*(longlong **)(param_1 + 0x70),local_50[0]);
    FUN_019c0130(&local_30,&local_20);
    FUN_019c0130(&local_38,&local_28);
    local_88 = local_30;
    local_80 = 0x11;
    local_78 = local_38;
    local_70 = 0x11;
    FUN_00442f70(&local_68,L"  success: StartPt=%s, EndPt=%s",&local_88,1);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),local_68);
    FUN_019c5a70(param_1,local_res20);
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                (*(longlong **)(param_1 + 0x70),L"  route status: invalid (should not happen)");
    }
    else if (cVar2 == '\x01') {
      lVar4 = 0;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + -8);
      }
      local_60 = CONCAT44(local_60._4_4_,
                          *(undefined4 *)
                           (*(longlong *)(param_1 + 0x78) + 0x1c + (lVar4 + -1) * 0x40));
      local_58 = 0;
      FUN_00442f70(&local_90,L"  route status: valid, overlapped, overlap size=",&local_60,0);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),local_90)
      ;
    }
    else if (cVar2 == '\x02') {
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                (*(longlong **)(param_1 + 0x70),L"  route status: valid, nonoverlapping");
    }
  }
  FUN_00414480(&local_90);
  FUN_00414480(&local_68);
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  FUN_00419430(&local_res20,&DAT_0147b748);
  return;
}

