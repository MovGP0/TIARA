/* Ghidra address: 0096bbf0 */
/* Ghidra symbol: FUN_0096bbf0 */


undefined1
FUN_0096bbf0(undefined8 param_1,longlong param_2,char *param_3,char *param_4,undefined8 *param_5,
            undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong local_res10 [3];
  undefined1 auStack_88 [40];
  char *local_60;
  char *local_58;
  undefined1 local_4d;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  local_60 = param_3;
  local_58 = param_4;
  FUN_00414650(local_res10);
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  local_4d = 1;
  FUN_00414520(&local_30);
  FUN_00414520(param_7);
  FUN_00414520(param_6);
  *local_58 = '\0';
  FUN_00414520(param_5);
  FUN_00414520(param_8);
  uVar3 = 0;
  if (local_res10[0] != 0) {
    uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
  }
  if (uVar3 == 0) {
    local_4d = 0;
  }
  else {
    local_4c = 1;
    do {
      cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2));
      uVar3 = local_4c;
      if (cVar2 == '\0') goto LAB_0096bd6b;
      local_4c = local_4c + 1;
      uVar3 = 0;
      if (local_res10[0] != 0) {
        uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
      }
    } while ((int)local_4c <= (int)uVar3);
    local_4d = 0;
  }
  goto LAB_0096c258;
  while( true ) {
    local_4c = local_4c + 1;
    uVar4 = 0;
    if (local_res10[0] != 0) {
      uVar4 = *(uint *)(local_res10[0] + -4) >> 1;
    }
    if ((int)uVar4 < (int)local_4c) break;
LAB_0096bd6b:
    cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2));
    if (cVar2 != '\0') {
      FUN_00416430(param_5,local_res10[0],uVar3,local_4c - uVar3);
      goto LAB_0096bdd7;
    }
  }
  local_4d = 0;
  goto LAB_0096c258;
  while( true ) {
    local_4c = local_4c + 1;
    uVar3 = 0;
    if (local_res10[0] != 0) {
      uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
    }
    if ((int)uVar3 < (int)local_4c) break;
LAB_0096bdd7:
    cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2));
    uVar3 = local_4c;
    if (cVar2 == '\0') {
      bVar5 = *(short *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2) == 0x28;
      if (!bVar5) goto LAB_0096be4d;
      *local_60 = '\a';
      goto LAB_0096beff;
    }
  }
  local_4d = 0;
  goto LAB_0096c258;
  while( true ) {
    local_4c = local_4c + 1;
    uVar4 = 0;
    if (local_res10[0] != 0) {
      uVar4 = *(uint *)(local_res10[0] + -4) >> 1;
    }
    if ((int)uVar4 < (int)local_4c) break;
LAB_0096be4d:
    cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2));
    if (cVar2 != '\0') {
      FUN_00416430(local_40,local_res10[0],uVar3,local_4c - uVar3);
      cVar2 = FUN_0096b960(auStack_88,local_40[0],local_60);
      if (cVar2 != '\0') {
        if (*local_60 == '\x01') {
          bVar5 = true;
        }
        goto LAB_0096bee0;
      }
      local_4d = 0;
      goto LAB_0096c258;
    }
  }
  local_4d = 0;
  goto LAB_0096c258;
  while( true ) {
    local_4c = local_4c + 1;
    uVar3 = 0;
    if (local_res10[0] != 0) {
      uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
    }
    if ((int)uVar3 < (int)local_4c) break;
LAB_0096bee0:
    cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2));
    if (cVar2 == '\0') goto LAB_0096beff;
  }
  local_4d = 0;
  goto LAB_0096c258;
LAB_0096beff:
  uVar3 = local_4c;
  if (bVar5) {
    if (*(short *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2) == 0x28) {
      do {
        if (*(short *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2) == 0x29) {
          FUN_00416430(param_6,local_res10[0],uVar3,(local_4c - uVar3) + 1);
          local_4c = local_4c + 1;
          cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2));
          if (cVar2 != '\0') goto LAB_0096bfeb;
          local_4d = 0;
          goto LAB_0096c258;
        }
        local_4c = local_4c + 1;
        uVar4 = 0;
        if (local_res10[0] != 0) {
          uVar4 = *(uint *)(local_res10[0] + -4) >> 1;
        }
      } while ((int)local_4c < (int)uVar4);
      local_4d = 0;
    }
    else {
      local_4d = 0;
    }
  }
  else {
LAB_0096c00a:
    uVar3 = local_4c;
    bVar5 = *(short *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2) != 0x23;
    if (!bVar5) {
      do {
        cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2));
        if (cVar2 != '\0') break;
        local_4c = local_4c + 1;
        uVar4 = 0;
        if (local_res10[0] != 0) {
          uVar4 = *(uint *)(local_res10[0] + -4) >> 1;
        }
      } while ((int)local_4c <= (int)uVar4);
      FUN_00416430(&local_48,local_res10[0],uVar3,local_4c - uVar3);
      cVar2 = FUN_0096bb40(auStack_88,local_48,local_58);
      if (cVar2 == '\0') {
        local_4d = 0;
        goto LAB_0096c258;
      }
      if (*local_58 == '\x01') {
        bVar5 = true;
        uVar3 = 0;
        if (local_res10[0] != 0) {
          uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
        }
        if ((int)uVar3 < (int)local_4c) {
          local_4d = 0;
        }
        else {
          do {
            cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2))
            ;
            uVar3 = local_4c;
            if (cVar2 == '\0') goto LAB_0096c13d;
            local_4c = local_4c + 1;
            uVar3 = 0;
            if (local_res10[0] != 0) {
              uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
            }
          } while ((int)local_4c <= (int)uVar3);
          local_4d = 0;
        }
        goto LAB_0096c258;
      }
    }
LAB_0096c13d:
    if (bVar5) {
      uVar4 = 0;
      if (local_res10[0] != 0) {
        uVar4 = *(uint *)(local_res10[0] + -4) >> 1;
      }
      if (local_4c == uVar4) {
        local_4d = 0;
      }
      else {
        sVar1 = *(short *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2);
        if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
          local_4c = local_4c + 1;
          do {
            if (*(short *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2) == sVar1) {
              FUN_00416430(param_7,local_res10[0],uVar3 + 1,(local_4c - uVar3) + -1);
              local_4c = local_4c + 1;
              goto LAB_0096c21a;
            }
            local_4c = local_4c + 1;
            uVar4 = 0;
            if (local_res10[0] != 0) {
              uVar4 = *(uint *)(local_res10[0] + -4) >> 1;
            }
          } while ((int)local_4c <= (int)uVar4);
          local_4d = 0;
        }
        else {
          local_4d = 0;
        }
      }
    }
    else {
LAB_0096c21a:
      uVar3 = 0;
      if (local_res10[0] != 0) {
        uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
      }
      FUN_00416430(param_8,local_res10[0],local_4c,(uVar3 - local_4c) + 1);
    }
  }
  goto LAB_0096c258;
  while( true ) {
    local_4c = local_4c + 1;
    uVar3 = 0;
    if (local_res10[0] != 0) {
      uVar3 = *(uint *)(local_res10[0] + -4) >> 1;
    }
    if ((int)uVar3 < (int)local_4c) break;
LAB_0096bfeb:
    cVar2 = FUN_008ff300(*(undefined2 *)(local_res10[0] + -2 + (longlong)(int)local_4c * 2));
    if (cVar2 == '\0') goto LAB_0096c00a;
  }
  local_4d = 0;
LAB_0096c258:
  FUN_004145c0(&local_48,2);
  FUN_00414520(&local_30);
  FUN_00414520(local_res10);
  return local_4d;
}

