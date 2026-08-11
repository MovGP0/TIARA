/* Ghidra address: 01c2bdb0 */
/* Ghidra symbol: FUN_01c2bdb0 */


void FUN_01c2bdb0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_1188 [32];
  undefined *local_1168;
  undefined8 local_1160;
  longlong *local_1158;
  int local_114c;
  int local_1148;
  int local_1144;
  char *local_1140;
  undefined1 *local_1138;
  char *local_1130;
  undefined1 *local_1128;
  undefined1 *local_1120;
  char *local_1118;
  char *local_1110;
  undefined8 local_1108;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined8 local_10f0;
  undefined8 local_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  undefined8 local_10d0;
  undefined8 local_10c8;
  undefined8 local_10c0;
  undefined8 local_10b8;
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined8 local_1090;
  undefined8 local_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  char local_1068 [64];
  undefined1 local_1028 [3744];
  undefined1 local_188;
  
  local_188 = 0;
  local_1188[0] = 0;
  local_1100 = 0;
  local_1108 = 0;
  local_10d0 = 0;
  local_10d8 = 0;
  local_10e8 = 0;
  local_10f0 = 0;
  local_10f8 = 0;
  local_10e0 = 0;
  local_10c8 = 0;
  local_10b8 = 0;
  local_10c0 = 0;
  local_1088 = 0;
  local_1090 = 0;
  local_10a0 = 0;
  local_10a8 = 0;
  local_10b0 = 0;
  local_1098 = 0;
  local_1080 = 0;
  local_1070 = 0;
  local_1078 = 0;
  local_1158 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if (-1 < iVar2 + -1) {
    pcVar4 = local_1068;
    do {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(*local_1158 + 0x28))();
  local_114c = 0;
  if (-1 < iVar2 + -1) {
    local_1128 = local_1028;
    local_1118 = local_1068;
    do {
      iVar3 = (**(code **)(*local_1158 + 0x28))(local_1158);
      local_1148 = local_114c + 1;
      if (local_1148 <= iVar3 + -1) {
        iVar3 = ((iVar3 + -1) - local_1148) + 1;
        local_1120 = local_1128 + local_1148;
        local_1110 = local_1068 + local_1148;
        do {
          (**(code **)(*local_1158 + 0x18))(local_1158,&local_1070,local_114c);
          (**(code **)(*local_1158 + 0x18))(local_1158,&local_1078,local_1148);
          cVar1 = FUN_01c2bce0(local_1188,local_1070,local_1078);
          if (cVar1 == '\0') {
            *local_1120 = 0;
          }
          else {
            *local_1120 = 1;
            *local_1118 = '\x01';
            *local_1110 = '\x01';
          }
          local_1148 = local_1148 + 1;
          local_1110 = local_1110 + 1;
          local_1120 = local_1120 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_114c = local_114c + 1;
      local_1118 = local_1118 + 1;
      local_1128 = local_1128 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(*local_1158 + 0x28))();
  local_114c = 0;
  if (-1 < iVar2 + -1) {
    local_1140 = local_1068;
    local_1138 = local_1028;
    do {
      if (*local_1140 != '\0') {
        local_1144 = 1;
        (**(code **)(*local_1158 + 0x18))(local_1158,&local_1080,local_114c);
        cVar1 = FUN_01c28940(local_1080);
        if (cVar1 == '\0') {
          (**(code **)(*local_1158 + 0x18))(local_1158,&local_10b8,local_114c);
          FUN_0043f750(&local_10c0,local_1144);
          FUN_00416ad0(&local_10b8,local_10c0);
          (**(code **)(*local_1158 + 0x40))(local_1158,local_114c,local_10b8);
        }
        else {
          (**(code **)(*local_1158 + 0x18))(local_1158,&local_1098,local_114c);
          FUN_01c287a0(&local_1090,local_1098);
          FUN_0043f750(&local_10a0,local_1144);
          (**(code **)(*local_1158 + 0x18))(local_1158,&local_10b0,local_114c);
          FUN_01c28860(&local_10a8,local_10b0);
          local_1168 = &DAT_01c2c3fc;
          local_1160 = local_10a8;
          FUN_00416cd0(&local_1088,4,local_1090,local_10a0);
          (**(code **)(*local_1158 + 0x40))(local_1158,local_114c,local_1088);
        }
        iVar3 = (**(code **)(*local_1158 + 0x28))(local_1158);
        local_1148 = local_114c + 1;
        if (local_1148 <= iVar3 + -1) {
          iVar3 = ((iVar3 + -1) - local_1148) + 1;
          local_1130 = local_1138 + local_1148;
          pcVar4 = local_1068 + local_1148;
          do {
            if (*local_1130 != '\0') {
              local_1144 = local_1144 + 1;
              (**(code **)(*local_1158 + 0x18))(local_1158,&local_10c8,local_1148);
              cVar1 = FUN_01c28940(local_10c8);
              if (cVar1 == '\0') {
                (**(code **)(*local_1158 + 0x18))(local_1158,&local_1100,local_1148);
                FUN_0043f750(&local_1108,local_1144);
                FUN_00416ad0(&local_1100,local_1108);
                (**(code **)(*local_1158 + 0x40))(local_1158,local_1148,local_1100);
              }
              else {
                (**(code **)(*local_1158 + 0x18))(local_1158,&local_10e0,local_1148);
                FUN_01c287a0(&local_10d8,local_10e0);
                FUN_0043f750(&local_10e8,local_1144);
                (**(code **)(*local_1158 + 0x18))(local_1158,&local_10f8,local_1148);
                FUN_01c28860(&local_10f0,local_10f8);
                local_1168 = &DAT_01c2c3fc;
                local_1160 = local_10f0;
                FUN_00416cd0(&local_10d0,4,local_10d8,local_10e8);
                (**(code **)(*local_1158 + 0x40))(local_1158,local_1148,local_10d0);
              }
              *pcVar4 = '\0';
            }
            local_1148 = local_1148 + 1;
            pcVar4 = pcVar4 + 1;
            local_1130 = local_1130 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_114c = local_114c + 1;
      local_1138 = local_1138 + 0x40;
      local_1140 = local_1140 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_1108,0x14);
  return;
}

