/* Ghidra address: 01b23a40 */
/* Ghidra symbol: FUN_01b23a40 */


void FUN_01b23a40(undefined2 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined2 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  int local_1b0;
  int local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_191;
  undefined2 local_190 [128];
  undefined8 *local_90;
  undefined1 local_88 [8];
  undefined1 *local_80;
  undefined8 local_78;
  undefined2 local_70;
  short local_6e;
  undefined1 local_6c [2];
  undefined1 local_6a [2];
  undefined2 local_68;
  undefined1 local_65;
  undefined8 local_64;
  undefined1 *local_5c;
  undefined2 local_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_1c0 = auStack_208;
  local_1c8 = (undefined1 *)0x0;
  local_1a8 = 0;
  local_70 = FUN_01d39f20(param_1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_1e8 = *(undefined1 **)PTR_DAT_02001f18;
  local_1e0 = (undefined2 *)((ulonglong)local_1e0 & 0xffffffffffffff00);
  local_38 = FUN_0172bb90(&PTR_FUN_01729478,1,local_70,0);
  FUN_0172c930(local_38,0,local_30,&local_6e);
  local_1e8 = local_88;
  local_1e0 = &local_68;
  local_1d8 = local_6a;
  local_1d0 = local_6c;
  FUN_0172cfa0(local_38,0,&local_78,&local_80);
  local_64 = local_78;
  local_5c = local_80;
  local_44 = local_68;
  local_1b0 = 1;
  if (0 < param_2) {
    do {
      iVar2 = (**(code **)(*local_30 + 0x28))();
      local_1ac = 0;
      if (-1 < iVar2 + -1) {
        do {
          local_1e8 = local_80;
          local_1e0 = local_190;
          local_1d8 = (undefined1 *)CONCAT44(local_1d8._4_4_,0xff);
          FUN_0172cc40(local_38,(short)local_1ac + local_6e,local_68,local_78);
          uVar4 = local_1b0 - 1;
          if (*(uint *)(DAT_02110ce8 + 0x10) <= uVar4) {
            FUN_00594f90();
          }
          local_40 = *(undefined8 *)(*(longlong *)(DAT_02110ce8 + 8) + (longlong)(int)uVar4 * 8);
          local_90 = (undefined8 *)
                     FUN_01b059b0(&local_65,
                                  CONCAT62((int6)((ulonglong)local_40 >> 0x10),
                                           (char)local_1b0 * 0x16) & 0xffffffff,&local_191);
          local_1a0 = *local_90;
          uVar3 = FUN_00414480(&local_1a8);
          cVar1 = FUN_01b27220(local_40,local_1a0,uVar3);
          if (cVar1 == '\0') {
            (**(code **)(*local_30 + 0x18))(local_30,&local_1a8,local_1ac);
          }
          else {
            (**(code **)(*local_30 + 0x18))(local_30,&local_1c8,local_1ac);
            local_1e8 = local_1c8;
            FUN_00416cd0(&local_1a8,3,local_1a8,&LAB_01b23da4);
          }
          FUN_01b272a0(local_40,local_1a0,local_1a8);
          local_1ac = local_1ac + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_1b0 = local_1b0 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414480(&local_1c8);
  FUN_00414480(&local_1a8);
  return;
}

