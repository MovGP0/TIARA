/* Ghidra address: 01379be0 */
/* Ghidra symbol: FUN_01379be0 */


void FUN_01379be0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  longlong local_238;
  undefined8 local_230;
  int local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210 [88];
  undefined1 local_1b8 [88];
  undefined1 local_160 [88];
  undefined8 local_108;
  undefined8 local_100 [2];
  undefined1 local_ea [81];
  undefined1 local_99 [81];
  undefined1 local_48 [15];
  undefined1 local_39;
  longlong local_38;
  undefined1 local_30 [7];
  byte local_29 [9];
  
  local_220 = 0;
  local_218 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_238 = param_1;
  local_230 = param_2;
  FUN_00e195a0(param_2,param_1 + 0x23);
  FUN_00e199f0(local_29,&local_38);
  uVar3 = (uint)local_29[0];
  local_224 = 0;
  if (-1 < (int)(uVar3 - 1)) {
    do {
      FUN_004169a0(local_100,local_38 + (longlong)local_224 * 0x29);
      (**(code **)(**(longlong **)(local_238 + 0x80) + 0x78))
                (*(longlong **)(local_238 + 0x80),local_100[0]);
      local_224 = local_224 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_004095f0(local_38,(uint)local_29[0] * 0x29);
  uVar3 = FUN_00e19ae0();
  *(uint *)(local_238 + 0xfc) = uVar3 & 0xff;
  FUN_00e19db0(local_29,&local_38);
  uVar3 = (uint)local_29[0];
  local_224 = 0;
  if (-1 < (int)(uVar3 - 1)) {
    do {
      FUN_004169a0(&local_108,local_38 + (longlong)local_224 * 0x29);
      (**(code **)(**(longlong **)(local_238 + 0x88) + 0x78))
                (*(longlong **)(local_238 + 0x88),local_108);
      local_224 = local_224 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_004095f0(local_38,(uint)local_29[0] * 0x29);
  uVar3 = FUN_00e19ea0();
  *(uint *)(local_238 + 0x100) = uVar3 & 0xff;
  FUN_00e1a2b0(local_29,&local_38);
  uVar3 = (uint)local_29[0];
  local_224 = 0;
  if (-1 < (int)(uVar3 - 1)) {
    do {
      lVar4 = (longlong)local_224;
      FUN_013795a0(auStack_268,local_160,local_38 + lVar4 * 0x29);
      FUN_00415020(local_99,local_160,0x50);
      FUN_013798c0(auStack_268,local_160,local_99);
      FUN_00415020(local_ea,local_160,0x50);
      FUN_00414ff0(local_1b8,&DAT_0137a124);
      FUN_00415110(local_1b8,local_ea,0x52);
      FUN_00414ff0(local_210,local_1b8);
      FUN_00415110(local_210,&LAB_0137a127,0x53);
      FUN_00b90d70(local_210,local_48,&local_39,local_30);
      local_248 = local_ea;
      uVar2 = FUN_01107d10(&DAT_01106a78,1,local_99,local_39);
      FUN_004169a0(&local_218,local_38 + lVar4 * 0x29);
      (**(code **)(**(longlong **)(local_238 + 0x118) + 0x80))
                (*(longlong **)(local_238 + 0x118),local_218,uVar2);
      local_224 = local_224 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*(char *)(local_238 + 0x98) == '\x04') {
    FUN_00e1a330(0);
  }
  else if (*(char *)(local_238 + 0x98) == '\x0f') {
    FUN_00e1a330(1);
  }
  uVar3 = FUN_00e1a3a0();
  *(uint *)(local_238 + 0x104) = uVar3 & 0xff;
  FUN_004095f0(local_38,(uint)local_29[0] * 0x29);
  FUN_00e1a410(local_29,&local_38);
  uVar3 = (uint)local_29[0];
  local_224 = 0;
  if (-1 < (int)(uVar3 - 1)) {
    do {
      FUN_004169a0(&local_220,local_38 + (longlong)local_224 * 0x29);
      (**(code **)(**(longlong **)(local_238 + 0x90) + 0x78))
                (*(longlong **)(local_238 + 0x90),local_220);
      local_224 = local_224 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = FUN_00e1a500();
  *(uint *)(local_238 + 0x108) = uVar3 & 0xff;
  FUN_004095f0(local_38,(uint)local_29[0] * 0x29);
  uVar1 = FUN_00e19cd0();
  *(undefined1 *)(local_238 + 0x99) = uVar1;
  FUN_00e1a020(local_238 + 0xa0,local_238 + 0xa8);
  *(double *)(local_238 + 0xb0) =
       (*(double *)(local_238 + 0xa8) + *(double *)(local_238 + 0xa0)) / 2.0;
  *(double *)(local_238 + 0xb8) = *(double *)(local_238 + 0xa8) - *(double *)(local_238 + 0xa0);
  FUN_00e1a1b0(local_238 + 0xc0,local_238 + 0xcc);
  uVar2 = FUN_00e198e0(local_238 + 0xcd,1);
  *(undefined8 *)(local_238 + 0xd8 + (ulonglong)*(byte *)(local_238 + 0xcd) * 8) = uVar2;
  uVar2 = FUN_00e19c50();
  *(undefined8 *)(local_238 + 0xf0) = uVar2;
  *(undefined4 *)(local_238 + 0xf8) = 0;
  FUN_00414560(&local_220,2);
  FUN_00414560(&local_108,2);
  return;
}

