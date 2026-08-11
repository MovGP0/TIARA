/* Ghidra address: 015ae9c0 */
/* Ghidra symbol: FUN_015ae9c0 */


void FUN_015ae9c0(longlong *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int local_res20;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  byte *local_28;
  byte *local_20;
  
  local_50[0] = 0;
  local_58 = 0;
  local_70 = 0;
  cVar2 = FUN_015adb00(param_1,1);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_58,PTR_PTR_020030e8);
    FUN_00410ae0(*param_1,&local_70);
    local_68 = local_70;
    local_60 = 0x11;
    FUN_00442f70(local_50,local_58,&local_68,0);
    FUN_015ad900(3,local_50[0]);
  }
  bVar1 = *(byte *)(param_1 + 5);
  local_res20 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      FUN_00409a70(param_2,param_3,(longlong)param_4);
      local_34 = 0;
      if (-1 < param_4 + -1) {
        do {
          local_3c = 0;
          if (*(int *)((longlong)param_1 + 0x74) == *(int *)((longlong)param_1 + 0x44)) {
            local_38 = 0;
            do {
              if (*(char *)(param_1[0x10] + (longlong)local_38) != -1) {
                *(char *)(param_1[0x10] + (longlong)local_38) =
                     *(char *)(param_1[0x10] + (longlong)local_38) + '\x01';
                break;
              }
              *(undefined1 *)(param_1[0x10] + (longlong)local_38) = 0;
              local_38 = local_38 + 1;
            } while (local_38 != 8);
            FUN_00409a70(param_1[0x10],param_1[0xf],(longlong)*(int *)((longlong)param_1 + 0x44));
            (**(code **)(*param_1 + 0x58))(param_1,param_1[0xf]);
            *(undefined4 *)((longlong)param_1 + 0x74) = 0;
          }
          local_3c = *(int *)((longlong)param_1 + 0x74);
          *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
          param_3[local_34] = param_3[local_34] ^ *(byte *)(param_1[0xf] + (longlong)local_3c);
          local_34 = local_34 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else if (bVar1 == 0) {
      for (; *(int *)((longlong)param_1 + 0x44) <= local_res20;
          local_res20 = local_res20 - *(int *)((longlong)param_1 + 0x44)) {
        FUN_015ab570(local_20,param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),local_28);
        (**(code **)(*param_1 + 0x58))(param_1,local_28);
        FUN_015ab570(local_28,param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]);
        local_20 = local_20 + *(int *)((longlong)param_1 + 0x44);
        local_28 = local_28 + *(int *)((longlong)param_1 + 0x44);
      }
      if (0 < local_res20) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        FUN_015ab570(local_20,param_1[10],local_res20,local_28);
        FUN_015ab570(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]
                    );
      }
    }
    else if (bVar1 == 1) {
      local_30 = (byte *)param_1[0xc];
      for (; *(int *)((longlong)param_1 + 0x44) <= local_res20;
          local_res20 = local_res20 - *(int *)((longlong)param_1 + 0x44)) {
        FUN_015ab570(local_20,local_30,*(undefined4 *)((longlong)param_1 + 0x44),local_28);
        (**(code **)(*param_1 + 0x58))(param_1,local_28);
        local_30 = local_28;
        local_20 = local_20 + *(int *)((longlong)param_1 + 0x44);
        local_28 = local_28 + *(int *)((longlong)param_1 + 0x44);
      }
      FUN_00409a70(local_30,param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44));
      if (0 < local_res20) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        FUN_015ab570(local_20,param_1[10],local_res20,local_28);
        FUN_015ab570(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]
                    );
      }
    }
    else if (bVar1 == 2) {
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        *local_28 = *local_20 ^ *(byte *)param_1[10];
        FUN_00409a70(param_1[0xc] + 1,param_1[0xc],
                     (longlong)(*(int *)((longlong)param_1 + 0x44) + -1));
        *(byte *)(param_1[0xc] + (longlong)(*(int *)((longlong)param_1 + 0x44) + -1)) = *local_28;
        local_28 = local_28 + 1;
        local_20 = local_20 + 1;
      }
    }
    else if (bVar1 == 3) {
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
        (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
        *local_28 = *local_20 ^ *(byte *)param_1[10];
        FUN_00409a70(param_1[0xc] + 1,param_1[0xc],
                     (longlong)(*(int *)((longlong)param_1 + 0x44) + -1));
        *(undefined1 *)(param_1[0xc] + (longlong)(*(int *)((longlong)param_1 + 0x44) + -1)) =
             *(undefined1 *)param_1[10];
        local_28 = local_28 + 1;
        local_20 = local_20 + 1;
      }
    }
  }
  else if (bVar1 == 5) {
    if (param_2 != param_3) {
      FUN_00409a70(param_2,param_3,(longlong)param_4);
    }
    for (; *(int *)((longlong)param_1 + 0x44) <= local_res20;
        local_res20 = local_res20 - *(int *)((longlong)param_1 + 0x44)) {
      (**(code **)(*param_1 + 0x58))(param_1,local_28);
      local_28 = local_28 + *(int *)((longlong)param_1 + 0x44);
    }
    if (0 < local_res20) {
      FUN_00409a70(local_28,param_1[10],(longlong)local_res20);
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00409a70(param_1[10],local_28,(longlong)local_res20);
    }
  }
  else if (bVar1 == 6) {
    for (; *(int *)((longlong)param_1 + 0x44) <= local_res20;
        local_res20 = local_res20 - *(int *)((longlong)param_1 + 0x44)) {
      FUN_015ab570(local_20,param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[10]);
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_015ab570(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]);
      local_20 = local_20 + *(int *)((longlong)param_1 + 0x44);
    }
    if (0 < local_res20) {
      FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_015ab570(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]);
    }
  }
  else if (bVar1 == 7) {
    for (; *(int *)((longlong)param_1 + 0x44) <= local_res20;
        local_res20 = local_res20 - *(int *)((longlong)param_1 + 0x44)) {
      FUN_015ab570(local_20,param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[10]);
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00409a70(param_1[10],param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x44));
      local_20 = local_20 + *(int *)((longlong)param_1 + 0x44);
    }
    if (0 < local_res20) {
      FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_015ab570(param_1[10],param_1[0xc],*(undefined4 *)((longlong)param_1 + 0x44),param_1[0xc]);
    }
  }
  else if (bVar1 == 8) {
    for (; 0 < param_4; param_4 = param_4 + -1) {
      FUN_00409a70(param_1[0xc],param_1[10],(longlong)*(int *)((longlong)param_1 + 0x44));
      (**(code **)(*param_1 + 0x58))(param_1,param_1[10]);
      FUN_00409a70(param_1[0xc] + 1,param_1[0xc],(longlong)(*(int *)((longlong)param_1 + 0x44) + -1)
                  );
      *(byte *)(param_1[0xc] + (longlong)(*(int *)((longlong)param_1 + 0x44) + -1)) =
           *local_20 ^ *(byte *)param_1[10];
      local_20 = local_20 + 1;
    }
  }
  FUN_00414480(&local_70);
  FUN_00414560(&local_58,2);
  return;
}

