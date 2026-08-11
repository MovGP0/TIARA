/* Ghidra address: 00801920 */
/* Ghidra symbol: FUN_00801920 */


void FUN_00801920(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_2d0;
  undefined8 local_2c8;
  uint local_2bc;
  undefined8 *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  
  local_2d0 = 0;
  if ((*(char *)(param_1 + 0x4d6) == '\x01') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    if ((*(longlong *)(DAT_02012668 + 0xa8) == 0) ||
       (*(longlong *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x698) == 0)) {
      FUN_0041ddd0(&local_2d0,PTR_PTR_02004d50);
      uVar1 = FUN_0044d490(&PTR_FUN_00472870,1,local_2d0);
      FUN_004134c0(uVar1);
    }
    local_50 = param_2 + 0xf;
    local_48 = *param_2;
    local_40 = PTR_IMAGE_DOS_HEADER_0200c280;
    local_38 = *(undefined4 *)(param_2 + 2);
    local_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    local_30 = *(undefined4 *)(param_2 + 3);
    local_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_28 = *(undefined4 *)(param_2 + 1);
    local_20 = param_2[5];
    uVar1 = FUN_004701a0(*(undefined8 *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x698),0x220,0,
                         &local_50);
    *(undefined8 *)(param_1 + 0x468) = uVar1;
    *(byte *)(param_1 + 0x6a8) = *(byte *)(param_1 + 0x6a8) | 0x10;
  }
  else {
    puVar3 = &local_2c8;
    for (lVar2 = 0x4f; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_2bc = local_2bc & 0xfff7ffff;
    FUN_00655400(param_1,&local_2c8);
    *(byte *)(param_1 + 0x6a8) = *(byte *)(param_1 + 0x6a8) & 0xef;
  }
  FUN_00806770(param_1);
  FUN_00414480(&local_2d0);
  return;
}

