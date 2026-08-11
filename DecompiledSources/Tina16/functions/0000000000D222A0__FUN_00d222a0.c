/* Ghidra address: 00d222a0 */
/* Ghidra symbol: FUN_00d222a0 */


void FUN_00d222a0(longlong *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_58 = 0;
  local_38 = 0;
  local_50 = 0;
  cVar3 = FUN_00d21100(param_1,1);
  if (cVar3 == '\0') {
    FUN_0041ddd0(&local_38,PTR_PTR_02003100);
    FUN_00410ae0(*param_1,&local_50);
    local_48 = local_50;
    local_40 = 0x11;
    FUN_00442f70(local_30,local_38,&local_48,0);
    FUN_00415dd0(&local_58,local_30[0],0);
    FUN_00d20b50(3,local_58);
  }
  bVar1 = *(byte *)(param_1 + 5);
  local_5c = param_4;
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      if (param_2 != param_3) {
        FUN_00409a70(param_2,param_3,(longlong)param_4);
      }
      for (; *(int *)((longlong)param_1 + 0x44) <= local_5c;
          local_5c = local_5c - *(int *)((longlong)param_1 + 0x44)) {
        (**(code **)(*param_1 + 0x58))(param_1,param_3);
        param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
      }
      if (0 < local_5c) {
        FUN_00409a70(param_3,param_1[10],(longlong)local_5c);
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        FUN_00409a70(param_1[10],param_3,(longlong)local_5c);
      }
    }
    else if (bVar1 == 0) {
      for (; *(int *)((longlong)param_1 + 0x44) <= local_5c; local_5c = local_5c - iVar2) {
        FUN_00cd7350(param_2,param_1[0xc],*(int *)((longlong)param_1 + 0x44),param_3);
        (**(code **)(*param_1 + 0x58))(param_1,param_3);
        FUN_00cd7350(param_3,param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]);
        iVar2 = *(int *)((longlong)param_1 + 0x44);
        param_2 = param_2 + iVar2;
        param_3 = param_3 + iVar2;
      }
      if (0 < local_5c) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        FUN_00cd7350(param_2,param_1[10],local_5c,param_3);
        FUN_00cd7350(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]
                    );
      }
    }
    else if (bVar1 == 1) {
      pbVar4 = (byte *)param_1[0xc];
      for (; *(int *)((longlong)param_1 + 0x44) <= local_5c; local_5c = local_5c - iVar2) {
        FUN_00cd7350(param_2,pbVar4,*(int *)((longlong)param_1 + 0x44),param_3);
        (**(code **)(*param_1 + 0x58))(param_1,param_3);
        iVar2 = *(int *)((longlong)param_1 + 0x44);
        param_2 = param_2 + iVar2;
        pbVar4 = param_3;
        param_3 = param_3 + iVar2;
      }
      FUN_00409a70(pbVar4,param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44));
      if (0 < local_5c) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        FUN_00cd7350(param_2,param_1[10],local_5c,param_3);
        FUN_00cd7350(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]
                    );
      }
    }
    else if (bVar1 == 2) {
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        *param_3 = *param_2 ^ *(byte *)param_1[10];
        FUN_00409a70(param_1[0xc] + 1,param_1[0xc],
                     (longlong)(*(int *)((longlong)param_1 + 0x44) + -1));
        *(byte *)(param_1[0xc] + (longlong)(*(int *)((longlong)param_1 + 0x44) + -1)) = *param_3;
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
      }
    }
    else if (bVar1 == 3) {
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
  }
  else if (bVar1 == 5) {
    for (; *(int *)((longlong)param_1 + 0x44) <= local_5c;
        local_5c = local_5c - *(int *)((longlong)param_1 + 0x44)) {
      FUN_00cd7350(param_2,param_1[0xc],*(int *)((longlong)param_1 + 0x44),param_1[10]);
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00cd7350(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]);
      param_2 = param_2 + *(int *)((longlong)param_1 + 0x44);
    }
    if (0 < local_5c) {
      FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00cd7350(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]);
    }
  }
  else if (bVar1 == 6) {
    for (; *(int *)((longlong)param_1 + 0x44) <= local_5c;
        local_5c = local_5c - *(int *)((longlong)param_1 + 0x44)) {
      FUN_00cd7350(param_2,param_1[0xc],*(int *)((longlong)param_1 + 0x44),param_1[10]);
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00409a70(param_1[10],param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44));
      param_2 = param_2 + *(int *)((longlong)param_1 + 0x44);
    }
    if (0 < local_5c) {
      FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00cd7350(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]);
    }
  }
  else if (bVar1 == 7) {
    for (; 0 < param_4; param_4 = param_4 + -1) {
      FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00409a70(param_1[0xc] + 1,param_1[0xc],(longlong)(*(int *)((longlong)param_1 + 0x44) + -1)
                  );
      *(byte *)(param_1[0xc] + (longlong)(*(int *)((longlong)param_1 + 0x44) + -1)) =
           *param_2 ^ *(byte *)param_1[10];
      param_2 = param_2 + 1;
    }
  }
  FUN_004144d0(&local_58);
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  return;
}

