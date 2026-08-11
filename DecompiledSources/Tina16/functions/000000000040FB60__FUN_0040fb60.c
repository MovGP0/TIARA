/* Ghidra address: 0040fb60 */
/* Ghidra symbol: FUN_0040fb60 */


longlong FUN_0040fb60(longlong param_1,double param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  double dVar6;
  double local_res10 [3];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  uint local_40;
  char local_3c;
  char local_3b [19];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = param_3;
  if (0xff < param_3) {
    local_68 = 0xff;
  }
  local_res10[0] = param_2;
  cVar1 = FUN_0040a2e0(local_res10);
  if (cVar1 == '\x06') {
    FUN_00417320(&local_58,0x20,local_68 + -4);
    FUN_00416ad0(&local_58,L"+Inf");
    FUN_00416910(param_1,local_58,0xff);
  }
  else if (cVar1 == '\a') {
    FUN_00417320(&local_60,0x20,local_68 + -4);
    FUN_00416ad0(&local_60,L"-Inf");
    FUN_00416910(param_1,local_60,0xff);
  }
  else if (cVar1 == '\b') {
    FUN_00417320(&local_50,0x20,local_68 + -3);
    FUN_00416ad0(&local_50,&DAT_00410098);
    FUN_00416910(param_1,local_50,0xff);
  }
  else {
    local_48 = local_res10[0];
    local_40 = FUN_0040f8d0(&local_48);
    if (((param_4 < 0) ||
        (dVar6 = (double)FUN_0040c850(local_res10[0]), 6.64613997892458e+35 < dVar6)) ||
       (0x23 < (int)((local_40 ^ (int)local_40 >> 0x1f) - ((int)local_40 >> 0x1f)))) {
      if (local_68 < 10) {
        local_68 = 10;
      }
      FUN_0040fa40(local_res10[0],local_68 + -8,&local_3c,&local_40);
      FUN_004153c0(param_1,local_68);
      puVar4 = (undefined1 *)(param_1 + 1);
      if (0x1a < local_68) {
        FUN_0040d200(param_1 + 1,(longlong)(local_68 + -0x1a),0x20);
        puVar4 = (undefined1 *)(param_1 + (local_68 + -0x19));
      }
      if (0.0 <= local_res10[0]) {
        *puVar4 = 0x20;
      }
      else {
        *puVar4 = 0x2d;
      }
      pcVar2 = local_3b;
      if (local_3c == '1') {
        pcVar2 = &local_3c;
        local_40 = local_40 + 1;
      }
      puVar4[1] = *pcVar2;
      puVar4[2] = 0x2e;
      if (local_68 + -9 < 0x11) {
        FUN_00409a70(pcVar2 + 1,puVar4 + 3,(longlong)(local_68 + -9));
      }
      else {
        FUN_00409a70(pcVar2 + 1,puVar4 + 3,0x11);
      }
      *(undefined1 *)(param_1 + (local_68 + -5)) = 0x45;
      if ((int)local_40 < 0) {
        *(undefined1 *)(param_1 + (local_68 + -4)) = 0x2d;
        local_40 = -local_40;
      }
      else {
        *(undefined1 *)(param_1 + (local_68 + -4)) = 0x2b;
      }
      iVar5 = 3;
      do {
        *(char *)(param_1 + (local_68 + iVar5 + -3)) = (char)((int)local_40 % 10) + '0';
        local_40 = (int)local_40 / 10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
    else {
      FUN_0040fa40(local_res10[0],0x12,&local_3c,&local_40);
      pcVar2 = &local_3c;
      if (local_3c == '1') {
        local_40 = local_40 + 1;
      }
      else {
        pcVar2 = local_3b;
      }
      local_64 = param_4;
      if (0xd8 < param_4) {
        local_64 = 0xd8;
      }
      if ((((int)(local_64 + local_40) < 0x12) && (-2 < (int)(local_64 + local_40))) &&
         (cVar1 = FUN_0040f940(pcVar2,local_40 + local_64), cVar1 != '\0')) {
        pcVar2 = pcVar2 + -1;
        local_40 = local_40 + 1;
      }
      iVar5 = 0;
      if (0 < local_64) {
        iVar5 = local_64 + 1;
      }
      if (0 < (int)local_40) {
        iVar5 = iVar5 + local_40;
      }
      iVar3 = iVar5 + 1;
      if (local_res10[0] < 0.0) {
        iVar3 = iVar5 + 2;
      }
      if (local_68 < iVar3) {
        FUN_004153c0(param_1,iVar3);
        puVar4 = (undefined1 *)(param_1 + 1);
      }
      else {
        FUN_004153c0(param_1,local_68);
        FUN_0040d200(param_1 + 1,(longlong)(local_68 - iVar3),0x20);
        puVar4 = (undefined1 *)(param_1 + ((local_68 - iVar3) + 1));
      }
      if (local_res10[0] < 0.0) {
        *puVar4 = 0x2d;
        puVar4 = puVar4 + 1;
      }
      if ((int)local_40 < 0) {
        *puVar4 = 0x30;
      }
      else {
        if ((int)local_40 < 0x12) {
          FUN_00409a70(pcVar2,puVar4,(longlong)(int)(local_40 + 1));
        }
        else {
          FUN_00409a70(pcVar2,puVar4,0x12);
          FUN_0040d200(puVar4 + 0x12,(longlong)(int)(local_40 - 0x11),0x30);
        }
        puVar4 = puVar4 + (int)local_40;
      }
      if (0 < local_64) {
        puVar4[1] = 0x2e;
        puVar4 = puVar4 + 2;
        FUN_0040d200(puVar4,(longlong)(int)(-1 - local_40),0x30);
        if (0 < (int)(-1 - local_40)) {
          puVar4 = puVar4 + (int)(-1 - local_40);
        }
        if ((int)local_40 < 0) {
          iVar5 = 0x12;
        }
        else if ((int)local_40 < 0x12) {
          pcVar2 = pcVar2 + (int)(local_40 + 1);
          iVar5 = 0x11 - local_40;
        }
        else {
          iVar5 = 0;
        }
        if (iVar5 < local_64) {
          FUN_00409a70(pcVar2,puVar4,(longlong)iVar5);
          FUN_0040d200(puVar4 + iVar5,(longlong)(local_64 - iVar5),0x30);
        }
        else {
          FUN_00409a70(pcVar2,puVar4,(longlong)local_64);
        }
      }
    }
  }
  FUN_00414560(&local_60,3);
  return param_1;
}

