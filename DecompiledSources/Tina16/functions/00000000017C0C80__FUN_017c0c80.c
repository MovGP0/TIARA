/* Ghidra address: 017c0c80 */
/* Ghidra symbol: FUN_017c0c80 */


undefined1 FUN_017c0c80(longlong param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined1 *local_60;
  undefined2 *local_58;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  short local_26;
  short local_24;
  undefined1 local_21;
  undefined8 local_20;
  
  local_60 = auStack_98;
  local_68 = 0;
  local_48 = 0;
  local_21 = 0;
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    local_78 = 0xffffffff;
    cVar1 = FUN_01cf0620(param_1,param_2,0,0);
    if (cVar1 == '\0') {
      FUN_01d30f00(*param_2,&local_24,2);
      *(int *)(param_1 + 0x90) = (int)local_24;
      FUN_01d30f00(*param_2,&local_24,2);
      *(int *)(param_1 + 0x94) = (int)local_24;
      if (param_4 < 0x11) {
        local_34 = CONCAT22(*(undefined2 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0xc));
        local_38 = CONCAT22(*(undefined2 *)(param_1 + 0x94),*(undefined2 *)(param_1 + 0x90));
        FUN_017c2cc0(param_1,0,local_34);
        FUN_017c2cc0(param_1,0xffffffff,local_38);
      }
      else {
        FUN_01d30f00(*param_2,&local_26,2);
        local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        iVar2 = (int)local_26;
        local_2c = 0;
        if (-1 < iVar2 + -1) {
          do {
            FUN_01d30f00(*param_2,&local_3c,4);
            uVar3 = FUN_00b95a80(local_3c);
            FUN_004ae7e0(local_20,uVar3);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_017c2de0(param_1);
        FUN_017c2e00(param_1,local_20);
        FUN_017c2bc0(param_1);
        FUN_00410f20(local_20);
      }
      if (0x11 < param_4) {
        FUN_01d30f00(*param_2,param_1 + 0x24,2);
        FUN_01d30f00(*param_2,param_1 + 0x50,2);
        if (param_4 < 0x14) {
          FUN_01d30f00(*param_2,param_1 + 0x26,0x16);
        }
        else {
          FUN_01d31760(*param_2,&local_30);
          FUN_01d30f00(*param_2,param_1 + 0x26,local_30 * 2);
          local_2c = local_30;
          if (local_30 < 0x14) {
            local_58 = (undefined2 *)(param_1 + 0x26 + (longlong)local_30 * 2);
            do {
              *local_58 = 0xffff;
              local_2c = local_2c + 1;
              local_58 = local_58 + 1;
            } while (local_2c != 0x14);
          }
        }
        FUN_01d30f00(*param_2,&local_24,2);
        if (-1 < local_24) {
          uVar3 = FUN_017c4f60(&DAT_017bfed0,1,(longlong)local_24,0);
          *(undefined8 *)(param_1 + 0x3f0) = uVar3;
        }
      }
      if (0x15 < param_4) {
        FUN_01d312f0(*param_2,&local_48);
        uVar3 = FUN_00414480(param_1 + 0x60);
        FUN_01b24160(&local_68,local_48,uVar3);
        FUN_00414ad0(param_1 + 0x58,local_68);
      }
      if (param_4 < 0x13) {
        *(undefined1 *)(param_1 + 0x2d8) = 0;
        *(undefined1 *)(param_1 + 0x3d8) = 1;
        *(undefined1 *)(param_1 + 0x3da) = 0;
        *(undefined1 *)(param_1 + 0x3db) = 0;
        *(undefined1 *)(param_1 + 0x3d9) = 0;
      }
      else {
        FUN_01d312b0(*param_2,param_1 + 0x2d8,0xff);
        FUN_01d30f00(*param_2,param_1 + 0x3d8,1);
        FUN_01d30f00(*param_2,param_1 + 0x3da,1);
        FUN_01d30f00(*param_2,param_1 + 0x3db,1);
        FUN_01d30f00(*param_2,param_1 + 0x3d9,1);
      }
      if (param_4 < 0x15) {
        *(undefined1 *)(param_1 + 0x3f8) = 0;
      }
      else {
        FUN_01d30f00(*param_2,param_1 + 0x3f8,1);
      }
      if (param_4 < 0x17) {
        *(undefined1 *)(param_1 + 0x3dc) = 0;
        *(undefined1 *)(param_1 + 0x3f9) = 0;
      }
      else {
        FUN_01d30f00(*param_2,param_1 + 0x3dc,1);
        FUN_01d30f00(*param_2,param_1 + 0x3f9,1);
      }
      if (0x17 < param_4) {
        FUN_01d316c0(*param_2,param_1 + 0x400);
      }
    }
    else {
      local_21 = 1;
    }
  }
  else {
    local_21 = 1;
  }
  FUN_00414480(&local_68);
  FUN_00414480(&local_48);
  return local_21;
}

