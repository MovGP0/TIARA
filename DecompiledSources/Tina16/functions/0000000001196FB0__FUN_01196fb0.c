/* Ghidra address: 01196fb0 */
/* Ghidra symbol: FUN_01196fb0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01196fb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar8;
  undefined8 uVar7;
  int local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  FUN_005fdab0(DAT_020420a8[0x10],0x1fffffff);
  uVar7 = CONCAT44(uVar8,400);
  (**(code **)(*DAT_020420a8 + 0xf8))(DAT_020420a8,0x140,100,500,uVar7);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  (**(code **)(*DAT_020420a8 + 200))(DAT_020420a8,100,100);
  (**(code **)(*DAT_020420a8 + 0xc0))(DAT_020420a8,600,600);
  FUN_005fdab0(DAT_020420a8[0x10],0xff);
  uVar7 = CONCAT44(uVar8,0x140);
  (**(code **)(*DAT_020420a8 + 0x80))(DAT_020420a8,0x15e,0x78,0x1d6,uVar7,0x186,0x8c,0x1a4,200);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  FUN_005fdab0(DAT_020420a8[0x10],0x8000);
  (**(code **)(*DAT_020420a8 + 0xf8))(DAT_020420a8,0x14a,0x6e,0x1ea,CONCAT44(uVar8,0x140));
  local_54 = 0x140;
  local_58 = 0x154;
  local_4c = 400;
  local_50 = 0x208;
  FUN_005fdab0(DAT_020420a8[0x10],0xff);
  uVar8 = 0;
  (**(code **)(*DAT_020420a8 + 0x130))(DAT_020420a8,&local_58,10,10,L"Hello, world!");
  FUN_005fdab0(DAT_020420a8[0x10],0);
  (**(code **)(*DAT_020420a8 + 0xb8))(DAT_020420a8,&local_58);
  FUN_005fdab0(DAT_020420a8[0x10],0xff);
  (**(code **)(*DAT_020420a8 + 0x60))
            (DAT_020420a8,0x15e,0x78,0x1c2,CONCAT44(uVar8,0xdc),0x15e,0xaa,0x15e,0xaa);
  if ((DAT_01f29ce8 == 0) && (DAT_01f29ce4 == 0)) {
    DAT_01f29ce8 = 0;
    FUN_005fd4e0(param_2[0xf],0xff);
    FUN_005fdab0(param_2[0x10],0xc0c0c0);
    local_48 = 4;
    local_44 = 0x2d;
    local_40 = 0x144;
    local_3c = 0x16d;
    (**(code **)(*param_2 + 0xa8))(param_2,&local_48);
  }
  else if ((0x14 < DAT_01f29ce4) && (0x14 < DAT_01f29ce8)) {
    iVar1 = DAT_01f29ce4 + -0x14;
    if (iVar1 <= DAT_01f29ce8 + -1) {
      iVar6 = ((DAT_01f29ce8 + -1) - iVar1) + 1;
      puVar2 = &DAT_01f29a88 + iVar1;
      puVar3 = &DAT_01f29c18 + iVar1;
      puVar5 = &DAT_01f299c0 + iVar1;
      local_60 = iVar1;
      do {
        iVar4 = local_60 - iVar1;
        FUN_00414ad0(&DAT_01f29a88 + iVar4,*puVar2);
        (&DAT_01f29c18)[iVar4] = *puVar3;
        (&DAT_01f299c0)[iVar4] = *puVar5;
        local_60 = local_60 + 1;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    DAT_01f29ce8 = DAT_01f29ce8 - iVar1;
    FUN_005fd4e0(param_2[0xf],0xff);
    local_48 = 4;
    local_44 = 0x2a;
    local_40 = 0x194;
    local_3c = 0x188;
    (**(code **)(*param_2 + 0xa8))(param_2,&local_48);
  }
  DAT_01f29ce4 = 0;
  DAT_01f29cec = 0;
  while ((DAT_01f29ce4 < DAT_01f29ce8 && (DAT_01f29ce0 == '\0'))) {
    FUN_005fce30(param_2[0xe],(&DAT_01f299c0)[DAT_01f29ce4]);
    FUN_005fc860(param_2[0xe],(&DAT_01f29c18)[DAT_01f29ce4]);
    (**(code **)(*param_2 + 0x120))
              (param_2,10,DAT_01f29cec + _DAT_01f29cf0 + 0x34,(&DAT_01f29a88)[DAT_01f29ce4]);
    DAT_01f29cec = DAT_01f29cec + (&DAT_01f299c0)[DAT_01f29ce4] +
                   (int)(&DAT_01f299c0)[DAT_01f29ce4] / 2 + 4;
    DAT_01f29ce4 = DAT_01f29ce4 + 1;
  }
  DAT_01f299bc = 0;
  return;
}

