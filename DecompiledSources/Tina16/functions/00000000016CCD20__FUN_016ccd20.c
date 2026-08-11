/* Ghidra address: 016ccd20 */
/* Ghidra symbol: FUN_016ccd20 */


void FUN_016ccd20(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1e8 [32];
  undefined *local_1c8;
  undefined4 local_1b0 [2];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  longlong local_160;
  longlong local_150;
  int local_144;
  undefined1 local_140;
  char local_13f;
  longlong local_40;
  int local_2c;
  
  local_170 = auStack_1e8;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_188 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  FUN_00414480(param_3);
  if ((char)param_2[6] == '\0') {
    local_150 = FUN_016b97f0(&DAT_016b45f0,1,0);
    FUN_016a3690(*(undefined8 *)(local_150 + 0x10),&DAT_016cd248);
    *(undefined8 *)(local_150 + 0x20) = 0x2800130100000200;
    *(undefined8 *)(local_150 + 0x28) = 0;
    *(undefined8 *)(local_150 + 0x30) = 0;
    *(undefined8 *)(local_150 + 0x38) = 0;
    FUN_004144d0(local_150 + 0xd90);
    iVar1 = (**(code **)(**(longlong **)(param_2 + 4) + 0x28))();
    local_2c = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(param_2 + 4) + 0x18))
                  (*(longlong **)(param_2 + 4),&local_180,local_2c);
        FUN_0043e130(&local_178,local_180);
        FUN_00416910(&local_140,local_178,0xff);
        FUN_004154b0(&local_190,&local_140,0);
        FUN_016b9120(&local_188,local_190);
        FUN_00415560(&local_140,local_188,0xff);
        if (local_13f != '*') {
          FUN_004169a0(&local_198,&local_140);
          iVar2 = FUN_004170c0(&DAT_016cd294,local_198,1);
          if (0 < iVar2) {
            FUN_004169a0(&local_1a0,&local_140);
            uVar3 = FUN_004170c0(&DAT_016cd294,local_1a0,1);
            FUN_00415260(&local_140,0xff,uVar3,local_140);
          }
          FUN_004154b0(&local_1a8,&local_140,0);
          local_1c8 = &DAT_016cd2a4;
          FUN_00415980(local_150 + 0xd90,3,*(undefined8 *)(local_150 + 0xd90),local_1a8);
        }
        local_2c = local_2c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_40 = FUN_016bcb30(&PTR_FUN_016b3308,1,&DAT_016cd2a6);
    uVar4 = FUN_01d34560(&PTR_FUN_016a1b98,1,25000,25000);
    *(undefined8 *)(local_150 + 0xa40) = uVar4;
    *(undefined8 *)(local_40 + 0x40) = uVar4;
    local_1b0[0] = 0x4c575003;
    uVar4 = FUN_00b95c80(local_1b0);
    *(undefined8 *)(local_40 + 0x18) = uVar4;
    *(undefined4 *)(local_150 + 0x990) = 1;
    FUN_016b9d20(local_150);
    FUN_016b9d80(local_150);
    local_1b0[0] = 0x4c575003;
    FUN_016be470(local_150,local_1b0,0);
    FUN_016c9620(local_150,local_40,param_1);
    local_2c = 1;
    *param_2 = *(int *)(*(longlong *)(local_40 + 0x40) + 0x34);
    param_2[1] = *(int *)(*(longlong *)(local_40 + 0x40) + 0x30);
    *(undefined1 *)(param_2 + 6) = 1;
    if (*(longlong *)(param_2 + 2) != 0) {
      FUN_004095f0(*(longlong *)(param_2 + 2));
    }
    uVar4 = FUN_00409570((longlong)(*param_2 << 4));
    *(undefined8 *)(param_2 + 2) = uVar4;
    local_160 = *(longlong *)(local_40 + 0x40);
    iVar1 = *(int *)(local_160 + 0x10);
    local_144 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar4 = FUN_01d347d0(local_160,local_144);
        FUN_016ccca0(auStack_1e8,uVar4);
        local_144 = local_144 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(local_40);
    FUN_00410f20(local_150);
  }
  FUN_004144d0(&local_1a8);
  FUN_00414560(&local_1a0,2);
  FUN_00414590(&local_190,2);
  FUN_00414560(&local_180,2);
  return;
}

