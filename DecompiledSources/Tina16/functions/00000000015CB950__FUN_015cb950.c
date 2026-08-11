/* Ghidra address: 015cb950 */
/* Ghidra symbol: FUN_015cb950 */


undefined1
FUN_015cb950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            ulonglong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined1 local_1a0;
  ulonglong *local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined1 local_139;
  undefined8 local_138;
  undefined2 local_12e;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  bool local_10a;
  undefined1 local_109;
  undefined8 *local_108;
  undefined4 local_f4;
  ulonglong local_f0 [8];
  longlong local_b0;
  uint local_80;
  
  local_139 = 1;
  puVar3 = param_4;
  puVar4 = &local_138;
  for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
  *(undefined2 *)((longlong)puVar4 + 4) = *(undefined2 *)((longlong)puVar3 + 4);
  FUN_004b6dc0(param_2,0);
  local_f0[0] = 0;
  local_b0 = 0;
  local_80 = 0xffffffff;
  local_109 = *(undefined1 *)((longlong)param_4 + 0x8d);
  local_f4 = FUN_015c0b40(local_109);
  local_10a = *(longlong *)((longlong)param_4 + 0x6d) != 0;
  if (((local_10a) && (*(char *)(param_1 + 0x85) != '\0')) &&
     ((*(char *)(param_1 + 0x243) == '\x01' ||
      ((*(char *)(param_1 + 0x243) == '\x02' || (*(char *)(param_1 + 0x243) == '\x03')))))) {
    local_108 = (undefined8 *)FUN_004095c0(8);
    if (*(char *)(param_1 + 0x243) == '\x01') {
      local_1b8 = CONCAT22(local_1b8._2_2_,*(undefined2 *)((longlong)param_4 + 0x8b));
      uVar1 = FUN_015e31d0(&PTR_FUN_015bdbf0,1,0x80,2);
      *local_108 = uVar1;
    }
    else if (*(char *)(param_1 + 0x243) == '\x02') {
      local_1b8 = CONCAT22(local_1b8._2_2_,*(undefined2 *)((longlong)param_4 + 0x8b));
      uVar1 = FUN_015e31d0(&PTR_FUN_015bdbf0,1,0xc0,2);
      *local_108 = uVar1;
    }
    else {
      local_1b8 = CONCAT22(local_1b8._2_2_,*(undefined2 *)((longlong)param_4 + 0x8b));
      uVar1 = FUN_015e31d0(&PTR_FUN_015bdbf0,1,0x100,2);
      *local_108 = uVar1;
    }
    local_12e = 99;
    *(undefined1 *)((longlong)param_4 + 0x4e) = *(undefined1 *)(param_1 + 0x243);
  }
  if (*(char *)(param_1 + 0x85) != '\0') {
    FUN_015caef0(auStack_1d8,param_4);
  }
  if ((local_f0[0] == param_5) ||
     (((longlong)param_5 < 0 && ((param_5 & 0xffffffff) == local_f0[0])))) {
    local_139 = 1;
    if ((local_b0 < 0xffffffff) && (*(char *)(param_1 + 600) != '\x02')) {
      local_124 = (undefined4)local_b0;
    }
    else {
      *(undefined1 *)((longlong)param_4 + 0x4f) = 1;
      local_124 = 0xffffffff;
      param_4[0xb] = local_b0;
    }
    if (((longlong)param_5 < 0xffffffff) && (*(char *)(param_1 + 600) != '\x02')) {
      local_120 = (undefined4)param_5;
    }
    else {
      *(undefined1 *)((longlong)param_4 + 0x4f) = 1;
      local_120 = 0xffffffff;
      param_4[10] = param_5;
    }
    local_128 = ~local_80;
    if ((*(char *)((longlong)param_4 + 0x4f) != '\0') && (*(char *)(param_1 + 600) == '\0')) {
      local_188 = *(undefined8 *)((longlong)param_4 + 0x83);
      local_180 = 0x11;
      local_1b8 = 0;
      local_1b0 = param_1;
      uVar1 = FUN_015b5d20(&PTR_FUN_015b5818,1,0x29,&local_188);
      FUN_004134c0(uVar1);
    }
    if ((param_5 == 0) && (*(char *)(param_1 + 0x85) != '\0')) {
      *(undefined2 *)((longlong)param_4 + 0x8b) = 0;
      local_12e = 0;
    }
  }
  else if (*(char *)(param_1 + 0x100) == '\0') {
    local_1a8 = &param_5;
    local_1a0 = 0x10;
    local_198 = local_f0;
    local_190 = 0x10;
    local_1b8 = 1;
    local_1b0 = param_1;
    uVar1 = FUN_015b5d20(&PTR_FUN_015b5818,1,0x22,&local_1a8);
    FUN_004134c0(uVar1);
  }
  else {
    local_139 = 0;
  }
  puVar3 = &local_138;
  for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_4 = *puVar3;
    puVar3 = puVar3 + 1;
    param_4 = param_4 + 1;
  }
  *(undefined4 *)param_4 = *(undefined4 *)puVar3;
  *(undefined2 *)((longlong)param_4 + 4) = *(undefined2 *)((longlong)puVar3 + 4);
  if ((((local_10a != false) && (*(char *)(param_1 + 0x85) != '\0')) &&
      ((*(char *)(param_1 + 0x243) == '\x01' ||
       ((*(char *)(param_1 + 0x243) == '\x02' || (*(char *)(param_1 + 0x243) == '\x03')))))) &&
     (local_108 != (undefined8 *)0x0)) {
    (**(code **)(*(longlong *)*local_108 + -0x20))((longlong *)*local_108,1);
    FUN_004095f0(local_108);
  }
  return local_139;
}

