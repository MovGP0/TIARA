/* Ghidra address: 0074dc90 */
/* Ghidra symbol: FUN_0074dc90 */


void FUN_0074dc90(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = *param_2;
  if (iVar2 == 0x11) {
    param_2[6] = 1;
    param_2[7] = 0;
  }
  else if (iVar2 == 0x16) {
    if (param_2[2] != 0) {
      FUN_0074e130(param_1,2);
    }
  }
  else if (iVar2 == 0x401) {
    iVar2 = param_2[4];
    if (iVar2 < 0x207) {
      if (iVar2 != 0x206) {
        if (0x203 < iVar2) {
          if (iVar2 == 0x204) {
            if (*(longlong *)(param_1 + 0x108) == 0) {
              return;
            }
            uVar5 = FUN_0074dc30(auStack_68);
            thunk_FUN_03cc0d62(&local_30);
            local_48 = local_30;
            local_40 = local_2c;
            (**(code **)(param_1 + 0x108))(*(undefined8 *)(param_1 + 0x110),param_1,1,uVar5 | 0x10);
            return;
          }
          if (iVar2 != 0x205) {
            return;
          }
          uVar5 = FUN_0074dc30(auStack_68);
          thunk_FUN_03cc0d62(&local_30);
          if (*(longlong *)(param_1 + 0x128) != 0) {
            local_48 = local_30;
            local_40 = local_2c;
            (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),param_1,1,uVar5 | 0x10);
          }
          if (*(longlong *)(param_1 + 0xb8) == 0) {
            return;
          }
          thunk_FUN_039c4287(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          plVar3 = *(longlong **)(param_1 + 0xb8);
          *(undefined1 *)((longlong)plVar3 + 0xd1) = 0;
          plVar3[0x1b] = *(longlong *)(param_1 + 8);
          (**(code **)(*plVar3 + 0xa8))(plVar3,local_30,local_2c);
          return;
        }
        if (iVar2 != 0x203) {
          if (iVar2 == 0x200) {
            if (*(longlong *)(param_1 + 0x118) == 0) {
              return;
            }
            uVar4 = FUN_0074dc30(auStack_68);
            thunk_FUN_03cc0d62(&local_30);
            local_48 = local_2c;
            (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120),param_1,uVar4,local_30);
            return;
          }
          if (iVar2 == 0x201) {
            if (*(longlong *)(param_1 + 0x108) != 0) {
              uVar5 = FUN_0074dc30(auStack_68);
              thunk_FUN_03cc0d62(&local_30);
              local_48 = local_30;
              local_40 = local_2c;
              (**(code **)(param_1 + 0x108))(*(undefined8 *)(param_1 + 0x110),param_1,0,uVar5 | 8);
            }
            *(undefined1 *)(param_1 + 0x91) = 1;
            return;
          }
          if (iVar2 != 0x202) {
            return;
          }
          uVar5 = FUN_0074dc30(auStack_68);
          thunk_FUN_03cc0d62(&local_30);
          if ((*(char *)(param_1 + 0x91) != '\0') && (*(longlong *)(param_1 + 0xe8) != 0)) {
            (**(code **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0xf0),param_1);
            *(undefined1 *)(param_1 + 0x91) = 0;
          }
          if (*(longlong *)(param_1 + 0x128) == 0) {
            return;
          }
          local_48 = local_30;
          local_40 = local_2c;
          (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),param_1,0,uVar5 | 8);
          return;
        }
      }
    }
    else {
      if (0x209 < iVar2) {
        if (iVar2 - 0x403U < 2) {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + 0x14);
          *puVar1 = *puVar1 & 0xffffffef;
          return;
        }
        if (iVar2 != 0x405) {
          return;
        }
        if (*(longlong *)(param_1 + 0xd8) == 0) {
          return;
        }
        (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xe0),param_1);
        return;
      }
      if (iVar2 != 0x209) {
        if (iVar2 == 0x207) {
          if (*(longlong *)(param_1 + 0x108) == 0) {
            return;
          }
          uVar5 = FUN_0074dc30(auStack_68);
          thunk_FUN_03cc0d62(&local_30);
          local_48 = local_30;
          local_40 = local_2c;
          (**(code **)(param_1 + 0x108))(*(undefined8 *)(param_1 + 0x110),param_1,2,uVar5 | 0x20);
          return;
        }
        if (iVar2 != 0x208) {
          return;
        }
        if (*(longlong *)(param_1 + 0x128) == 0) {
          return;
        }
        uVar5 = FUN_0074dc30(auStack_68);
        thunk_FUN_03cc0d62(&local_30);
        local_48 = local_30;
        local_40 = local_2c;
        (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),param_1,2,uVar5 | 0x20);
        return;
      }
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      (**(code **)(param_1 + 0xf8))(*(undefined8 *)(param_1 + 0x100),param_1);
    }
  }
  else if ((*param_2 == DAT_02012518) && (*(char *)(param_1 + 0xd4) != '\0')) {
    FUN_0074e130(param_1,0);
  }
  return;
}

