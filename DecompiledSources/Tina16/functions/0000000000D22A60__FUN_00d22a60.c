/* Ghidra address: 00d22a60 */
/* Ghidra symbol: FUN_00d22a60 */


void FUN_00d22a60(longlong *param_1,byte *param_2,byte *param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_58 = 0;
  local_38 = 0;
  local_50 = 0;
  cVar2 = FUN_00d21100(param_1,1);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_38,PTR_PTR_02003100);
    FUN_00410ae0(*param_1,&local_50);
    local_48 = local_50;
    local_40 = 0x11;
    FUN_00442f70(&local_30,local_38,&local_48,0);
    FUN_00415dd0(&local_58,local_30,0);
    FUN_00d20b50(3,local_58);
  }
  uVar3 = (ulonglong)*(byte *)(param_1 + 5);
  local_5c = param_4;
  if (uVar3 < 4) {
    if (uVar3 == 3) {
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        *param_3 = *param_2 ^ *(byte *)param_1[10];
        FUN_00409a70(param_1[0xc] + 1,param_1[0xc],
                     (longlong)(*(int *)((longlong)param_1 + 0x44) + -1));
        *(undefined1 *)(param_1[0xc] + (longlong)(*(int *)((longlong)param_1 + 0x44) + -1)) =
             *(undefined1 *)param_1[10];
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
      }
    }
    else if (uVar3 == 0) {
      if (param_2 != param_3) {
        FUN_00409a70(param_2,param_3,(longlong)param_4);
      }
      lVar1 = param_1[0xc];
      lVar5 = param_1[10];
      for (; lVar4 = lVar1, *(int *)((longlong)param_1 + 0x44) <= local_5c;
          local_5c = local_5c - *(int *)((longlong)param_1 + 0x44)) {
        FUN_00cd7350(param_3,lVar4,*(int *)((longlong)param_1 + 0x44),lVar5);
        (**(code **)(*param_1 + 0x60))(param_1,param_3);
        FUN_00cd7350(param_3,lVar4,*(undefined4 *)((longlong)param_1 + 0x44),param_3);
        param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
        lVar1 = lVar5;
        lVar5 = lVar4;
      }
      if (lVar4 != param_1[0xc]) {
        FUN_00409a70(lVar4,param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44));
      }
      if (0 < local_5c) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        FUN_00cd7350(param_1[10],param_3,local_5c,param_3);
        FUN_00cd7350(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]
                    );
      }
    }
    else if (uVar3 == 1) {
      if (param_2 != param_3) {
        FUN_00409a70(param_2,param_3,(longlong)param_4);
      }
      lVar1 = param_1[0xc];
      lVar5 = param_1[10];
      for (; lVar4 = lVar1, *(int *)((longlong)param_1 + 0x44) <= local_5c;
          local_5c = local_5c - *(int *)((longlong)param_1 + 0x44)) {
        FUN_00409a70(param_3,lVar5,(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x60))(param_1,param_3);
        FUN_00cd7350(lVar4,param_3,*(undefined4 *)((longlong)param_1 + 0x44),param_3);
        param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
        lVar1 = lVar5;
        lVar5 = lVar4;
      }
      if (lVar4 != param_1[0xc]) {
        FUN_00409a70(lVar4,param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44));
      }
      if (0 < local_5c) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        FUN_00cd7350(param_3,param_1[10],local_5c,param_3);
        FUN_00cd7350(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]
                    );
      }
    }
    else if (uVar3 == 2) {
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        FUN_00409a70(param_1[0xc] + 1,param_1[0xc],
                     (longlong)(*(int *)((longlong)param_1 + 0x44) + -1));
        *(byte *)(param_1[0xc] + (longlong)(*(int *)((longlong)param_1 + 0x44) + -1)) = *param_2;
        *param_3 = *param_2 ^ *(byte *)param_1[10];
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
      }
    }
  }
  else if (uVar3 == 4) {
    if (param_2 != param_3) {
      FUN_00409a70(param_2,param_3,(longlong)param_4);
    }
    for (; *(int *)((longlong)param_1 + 0x44) <= local_5c;
        local_5c = local_5c - *(int *)((longlong)param_1 + 0x44)) {
      (**(code **)(*param_1 + 0x60))(param_1,param_3);
      param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
    }
    if (0 < local_5c) {
      FUN_00409a70(param_3,param_1[10],(longlong)local_5c);
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00409a70(param_1[10],param_3,(longlong)local_5c);
    }
  }
  else if (uVar3 - 5 < 3) {
    FUN_00d222a0(param_1,param_2,param_3,param_4);
  }
  FUN_004144d0(&local_58);
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  return;
}

