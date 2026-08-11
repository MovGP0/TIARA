/* Ghidra address: 01454080 */
/* Ghidra symbol: FUN_01454080 */


void FUN_01454080(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [24];
  
  iVar1 = FUN_0040c770(*(undefined8 *)(param_2 + 0xd8));
  if (0 < iVar1) {
    lVar2 = param_1 + 400;
    do {
      iVar4 = 6;
      lVar3 = lVar2;
      do {
        FUN_01449400(lVar3,0,0);
        lVar3 = lVar3 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar2 = lVar2 + 0x60;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_0040c770(*(undefined8 *)(param_2 + 0xd8));
  if (0 < iVar1) {
    local_90 = (undefined8 *)(param_1 + 0x1f90);
    local_88 = param_1 + 0x1a0;
    local_80 = param_1 + 0x24a0;
    local_78 = (undefined8 *)(param_1 + 0x1a90);
    local_70 = (undefined8 *)(param_1 + 0x1590);
    local_68 = (undefined8 *)(param_1 + 0x1090);
    local_60 = param_1 + 0x2210;
    local_58 = param_1 + 0x1d10;
    local_50 = param_1 + 0x1810;
    lVar2 = param_1 + 0x1310;
    param_1 = param_1 + 0x3390;
    do {
      FUN_01449400(local_48,*local_90,local_90[1]);
      FUN_00c444b0(local_88,local_48,local_88);
      FUN_01449560(local_48,local_80,local_48,param_2);
      FUN_00c444b0(local_88 + 0x10,local_48,local_88 + 0x10);
      FUN_01449560(local_48,local_80 + 0x10,local_48,param_2);
      FUN_00c444b0(local_88 + 0x20,local_48,local_88 + 0x20);
      FUN_01449560(local_48,local_80 + 0x20,local_48,param_2);
      FUN_00c444b0(local_88 + 0x30,local_48,local_88 + 0x30);
      FUN_01449560(local_48,local_80 + 0x30,local_48,param_2);
      FUN_00c444b0(local_88 + 0x40,local_48,local_88 + 0x40);
      FUN_01449400(local_48,*local_78,local_78[1]);
      FUN_00c444b0(local_88 + 0x20,local_48,local_88 + 0x20);
      FUN_01449560(local_48,local_80 + 0x20,local_48,param_2);
      FUN_00c444b0(local_88 + 0x30,local_48,local_88 + 0x30);
      FUN_01449560(local_48,local_80 + 0x30,local_48,param_2);
      FUN_00c444b0(local_88 + 0x40,local_48,local_88 + 0x40);
      FUN_01449560(local_48,local_80 + 0x40,local_48,param_2);
      FUN_00c444b0(local_88 + -0x10,local_48,local_88 + -0x10);
      FUN_01449560(local_48,local_80 + -0x10,local_48,param_2);
      FUN_00c444b0(local_88,local_48,local_88);
      FUN_01449400(local_48,*local_70,local_70[1]);
      FUN_00c444b0(local_88 + 0x30,local_48,local_88 + 0x30);
      FUN_01449560(local_48,local_80 + 0x30,local_48,param_2);
      FUN_00c444b0(local_88 + 0x40,local_48,local_88 + 0x40);
      FUN_01449560(local_48,local_80 + 0x40,local_48,param_2);
      FUN_00c444b0(local_88 + -0x10,local_48,local_88 + -0x10);
      FUN_01449560(local_48,local_80 + -0x10,local_48,param_2);
      FUN_00c444b0(local_88,local_48,local_88);
      FUN_01449560(local_48,local_80,local_48,param_2);
      FUN_00c444b0(local_88 + 0x10,local_48,local_88 + 0x10);
      FUN_01449400(local_48,*local_68,local_68[1]);
      FUN_00c444b0(local_88 + -0x10,local_48,local_88 + -0x10);
      FUN_01449560(local_48,local_80 + -0x10,local_48,param_2);
      FUN_00c444b0(local_88,local_48,local_88);
      FUN_01449560(local_48,local_80,local_48,param_2);
      FUN_00c444b0(local_88 + 0x10,local_48,local_88 + 0x10);
      FUN_01449560(local_48,local_80 + 0x10,local_48,param_2);
      FUN_00c444b0(local_88 + 0x20,local_48,local_88 + 0x20);
      FUN_01449560(local_48,local_80 + 0x20,local_48,param_2);
      FUN_00c444b0(local_88 + 0x30,local_48,local_88 + 0x30);
      FUN_00c444b0(local_88 + -0x10,local_60,local_88 + -0x10);
      FUN_00c444b0(local_88 + 0x10,local_58,local_88 + 0x10);
      FUN_00c444b0(local_88 + 0x20,local_50,local_88 + 0x20);
      FUN_00c444b0(local_88 + 0x40,lVar2,local_88 + 0x40);
      iVar4 = 6;
      lVar3 = local_88 + -0x10;
      do {
        FUN_01449560(lVar3,param_1,lVar3,param_2);
        lVar3 = lVar3 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      param_1 = param_1 + 0x10;
      lVar2 = lVar2 + 0x10;
      local_50 = local_50 + 0x10;
      local_58 = local_58 + 0x10;
      local_60 = local_60 + 0x10;
      local_68 = local_68 + 2;
      local_70 = local_70 + 2;
      local_78 = local_78 + 2;
      local_80 = local_80 + 0x60;
      local_88 = local_88 + 0x60;
      local_90 = local_90 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

