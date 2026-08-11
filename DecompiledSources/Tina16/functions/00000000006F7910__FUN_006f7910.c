/* Ghidra address: 006f7910 */
/* Ghidra symbol: FUN_006f7910 */


void FUN_006f7910(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_c0;
  uint local_bc;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  uint local_94;
  uint local_90;
  undefined1 *local_88;
  undefined1 *local_68;
  undefined1 *local_58;
  int local_4c;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    FUN_0040d200(&local_c0,0x98,0);
    lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
    uVar3 = FUN_0065b870(param_1);
    lVar4 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
    thunk_FUN_041b2403(uVar3,0x1096,(longlong)*(int *)(lVar4 + 0x28),0);
    local_bc = 0xd;
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      local_bc = 0xf;
    }
    local_90 = 0;
    local_c0 = 0x98;
    if ((*(char *)(lVar2 + 0x2e) == '\x02') && (-1 < *(int *)(lVar2 + 0x48))) {
      local_b8 = &LAB_006f7c34;
      local_88 = &LAB_006f7c34;
      local_68 = (undefined1 *)FUN_00416740(*(undefined8 *)(lVar2 + 0x18));
      local_58 = (undefined1 *)FUN_00416740(*(undefined8 *)(lVar2 + 0x30));
    }
    else {
      local_b8 = (undefined1 *)FUN_00416740(*(undefined8 *)(lVar2 + 0x18));
      local_88 = (undefined1 *)FUN_00416740(*(undefined8 *)(lVar2 + 0x30));
      local_68 = &LAB_006f7c34;
      local_58 = &LAB_006f7c34;
    }
    local_a8 = FUN_00416740(*(undefined8 *)(lVar2 + 0x20));
    local_98 = 0;
    local_94 = 0;
    FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
    lVar4 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
    if ((*(ushort *)(lVar4 + 0x2c) & 2) != 0) {
      local_94 = local_94 | 2;
    }
    cVar1 = FUN_0044f0c0(6,0);
    if (cVar1 != '\0') {
      lVar4 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
      if ((*(ushort *)(lVar4 + 0x2c) & 8) != 0) {
        local_94 = local_94 | 4;
      }
      lVar4 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
      if ((*(ushort *)(lVar4 + 0x2c) & 0x10) != 0) {
        local_94 = local_94 | 8;
      }
      lVar4 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
      if ((*(ushort *)(lVar4 + 0x2c) & 4) != 0) {
        local_94 = local_94 | 1;
      }
      lVar4 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
      if ((*(ushort *)(lVar4 + 0x2c) & 0x20) != 0) {
        local_94 = local_94 | 0x10;
      }
      lVar4 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
      if ((*(ushort *)(lVar4 + 0x2c) & 0x40) != 0) {
        local_94 = local_94 | 0x20;
      }
      local_4c = *(int *)(lVar2 + 0x48);
      if (-1 < local_4c) {
        local_bc = local_bc | 0x1000;
      }
      if ((*(char *)(lVar2 + 0x2e) == '\x02') && (-1 < *(int *)(lVar2 + 0x48))) {
        local_bc = local_bc | 0x400;
      }
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        if ((*(char *)(lVar2 + 0x2e) == '\x02') && (-1 < *(int *)(lVar2 + 0x48))) {
          local_bc = local_bc | 0x900;
        }
        else {
          local_bc = local_bc | 0x100;
        }
      }
      cVar1 = *(char *)(lVar2 + 0x2f);
      if (cVar1 == '\0') {
        local_90 = local_90 | 8;
      }
      else if (cVar1 == '\x01') {
        local_90 = local_90 | 0x20;
      }
      else if (cVar1 == '\x02') {
        local_90 = local_90 | 0x10;
      }
    }
    cVar1 = *(char *)(lVar2 + 0x2e);
    if (cVar1 == '\0') {
      local_90 = local_90 | 1;
    }
    else if (cVar1 == '\x01') {
      local_90 = local_90 | 4;
    }
    else if (cVar1 == '\x02') {
      local_90 = local_90 | 2;
    }
    local_bc = local_bc | 0x10;
    lVar2 = FUN_00707cd0(*(undefined8 *)(param_1 + 0x770),param_2);
    local_9c = *(undefined4 *)(lVar2 + 0x28);
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar3,0x1091,(longlong)param_2,&local_c0);
  }
  return;
}

