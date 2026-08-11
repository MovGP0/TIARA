/* Ghidra address: 01772fb0 */
/* Ghidra symbol: FUN_01772fb0 */


void FUN_01772fb0(longlong param_1,undefined8 *param_2,undefined2 param_3,ushort param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  char local_41;
  undefined8 local_40;
  undefined8 local_38 [2];
  longlong local_28;
  int local_20 [4];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_38[0] = 0;
  local_68 = param_5;
  FUN_017690a0(param_1,param_2,param_3,param_4);
  if (param_4 < 0x29) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xd) = 1;
  }
  iVar1 = FUN_01d31a40(*param_2);
  if (iVar1 == 0) {
    local_41 = '\x01';
    if (0x3d < param_4) {
      FUN_01d30f00(*param_2,&local_41,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0));
    if (local_41 == '\0') {
      *(undefined1 *)(param_1 + 0x62) = 1;
      FUN_01768520(&local_58,*(undefined8 *)(param_1 + 0x48),0);
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xd8))(*(longlong **)(param_1 + 0xb0),local_58)
      ;
      FUN_01d30f00(*param_2,param_1 + 0x120,4);
      FUN_01d30f00(*param_2,param_1 + 0x124,4);
      FUN_01d30f00(*param_2,param_1 + 0x128,4);
      FUN_01d312f0(*param_2,param_1 + 0x148);
      FUN_01d312f0(*param_2,param_1 + 0x150);
    }
    else {
      if (param_4 < 0x33) {
        FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0xb0));
      }
      else {
        FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xb0));
      }
      if (0x29 < param_4) {
        (**(code **)(**(longlong **)(param_1 + 200) + 0x90))(*(longlong **)(param_1 + 200));
        if (param_4 < 0x33) {
          FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 200));
        }
        else {
          FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 200));
        }
        (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x90))(*(longlong **)(param_1 + 0xd0));
        if (param_4 < 0x33) {
          FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0xd0));
        }
        else {
          FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xd0));
        }
        FUN_01d312f0(*param_2,param_1 + 0x130);
        FUN_01d312f0(*param_2,param_1 + 0x138);
        if (0x2a < param_4) {
          FUN_01d30f00(*param_2,param_1 + 0x100,4);
          (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x90))(*(longlong **)(param_1 + 0xd8));
          if (param_4 < 0x33) {
            FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0xd8));
          }
          else {
            FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xd8));
          }
          FUN_01d312f0(*param_2,param_1 + 0x140);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))(*(longlong **)(param_1 + 0x170));
      FUN_01d30f00(*param_2,local_20,4);
      local_20[1] = 0;
      iVar1 = local_20[0];
      if (-1 < local_20[0] + -1) {
        do {
          local_28 = FUN_0153c260(&DAT_0153c0f8,1);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x170),local_28);
          FUN_01d312f0(*param_2,local_28 + 0x10);
          FUN_01d32040(*param_2,*(undefined8 *)(local_28 + 8));
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (0x2b < param_4) {
        (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x90))(*(longlong **)(param_1 + 0xe8));
        FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0xe8));
        FUN_01d30f00(*param_2,param_1 + 0x104,4);
      }
      *(undefined4 *)(param_1 + 0x120) = 3;
      *(undefined8 *)(param_1 + 0x108) = 0x412e848000000000;
      if (0x2c < param_4) {
        FUN_01d30f00(*param_2,param_1 + 0x108,8);
      }
      if (0x2d < param_4) {
        FUN_01d30f00(*param_2,param_1 + 0x120,4);
        FUN_01d30f00(*param_2,param_1 + 0x124,4);
        FUN_01d30f00(*param_2,param_1 + 0x128,4);
      }
      if (0x2e < param_4) {
        FUN_01d312f0(*param_2,param_1 + 0x148);
        FUN_01d312f0(*param_2,param_1 + 0x150);
      }
      if (0x30 < param_4) {
        FUN_01d30f00(*param_2,local_20,4);
        FUN_01d32710(*param_2,*(undefined8 *)(param_1 + 0xf8),local_20[0]);
      }
      if (0x31 < param_4) {
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x90))(*(longlong **)(param_1 + 0xf0));
        if (param_4 < 0x33) {
          FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0xf0));
        }
        else {
          FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xf0));
        }
      }
      if (param_4 == 0x34) {
        local_40 = FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_01d32380(*param_2,local_40);
        FUN_01d312f0(*param_2,local_38);
        FUN_01d312f0(*param_2,local_38);
        FUN_00410f20(local_40);
      }
      else if ((0x34 < param_4) &&
              (FUN_010b38a0(*(undefined8 *)(param_1 + 0x110),param_2,param_4), 0x39 < param_4)) {
        FUN_010b40e0(*(undefined8 *)(param_1 + 0x118),param_2,param_4);
      }
    }
    if (0x3c < param_4) {
      FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0x1a0));
    }
  }
  FUN_00414480(&local_58);
  FUN_00414480(local_38);
  return;
}

