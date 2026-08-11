/* Ghidra address: 0177fdb0 */
/* Ghidra symbol: FUN_0177fdb0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0177fdb0(longlong param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  short *local_res10 [3];
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = *(char *)(param_1 + 0xc6b + (ulonglong)*(byte *)(param_1 + 0x621));
  if (cVar1 == '\0') {
    if ((int)*(short *)(param_1 + 10) % 16000 == 0) {
      uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x630),uVar5);
      *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 1;
    }
    plVar3 = (longlong *)
             FUN_004aeac0(*(undefined8 *)(param_1 + 0x630),*(short *)(param_1 + 0xe) + -1);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_res10[0]);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
    if (*(char *)(param_1 + 0x621) == '\x01') {
      FUN_0177f210(local_30,local_res10[0]);
      FUN_00414ad0(param_1 + 0x618,local_30[0]);
      FUN_0177f2d0(&local_38,*(undefined8 *)(param_1 + 0x618));
      FUN_00414ad0(param_1 + 0x618,local_38);
      FUN_0177f180(param_1 + 0x618);
      plVar3 = (longlong *)
               FUN_004aeac0(*(undefined8 *)(param_1 + 0x630),*(short *)(param_1 + 0xe) + -1);
      FUN_00416cd0(&local_40,4,&DAT_0178064c,*(undefined8 *)(param_1 + 0x610),L".DDB|",
                   *(undefined8 *)(param_1 + 0x618));
      (**(code **)(*plVar3 + 0x78))(plVar3,local_40);
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
      uVar5 = FUN_00c3d400(&LAB_00c3a6d0,1);
      *(undefined8 *)(param_1 + 0xc90) = uVar5;
      FUN_00414ad0(*(longlong *)(param_1 + 0xc90) + 0x10,*(undefined8 *)(param_1 + 0x618));
      lVar4 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
      *(longlong *)(param_1 + 0xc98) = lVar4;
      *(undefined4 *)(lVar4 + 8) = 0;
    }
    if (*(char *)(param_1 + 0x621) == '\x02') {
      if (*(longlong *)(param_1 + 0xc90) != 0) {
        FUN_01780f10(param_1,*(longlong *)(param_1 + 0xc90),&DAT_02110078);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc88) + 0xd18);
        (**(code **)(*plVar3 + 0x80))(plVar3,*(undefined8 *)(DAT_02110078 + 0x10),DAT_02110078);
        FUN_00410f20(*(undefined8 *)(param_1 + 0xc90));
      }
      *(undefined8 *)(param_1 + 0xc90) = 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (*(byte *)(param_1 + 0x621) == 0x14) {
      FUN_0177fc20(local_res10[0],&DAT_02110080,&DAT_02110010);
    }
    else {
      FUN_0177fa80(local_res10[0],&DAT_0211001c,&DAT_02110044);
    }
    if ((local_res10[0] != (short *)0x0) && (*local_res10[0] != 0x2a)) {
      if (*(char *)(param_1 + 0x621) == '\x05') {
        *(undefined4 *)(*(longlong *)(param_1 + 0xc90) + 8) = DAT_0211001c;
        lVar4 = *(longlong *)(param_1 + 0xc98);
        *(undefined2 *)(lVar4 + 0x24) = 0x50;
        *(undefined2 *)(lVar4 + 0x26) = 0x50;
        *(undefined2 *)(lVar4 + 0x28) = DAT_02110020;
        *(undefined2 *)(lVar4 + 0x2a) = DAT_02110024;
        _DAT_0211004c = CONCAT44(_DAT_02110024,_DAT_02110020);
        DAT_02110070 = -1;
      }
      if (*(char *)(param_1 + 0x621) == '\x06') {
        lVar4 = *(longlong *)(param_1 + 0xc98);
        *(undefined2 *)(lVar4 + 0x2c) = DAT_02110020;
        *(undefined2 *)(lVar4 + 0x2e) = DAT_02110024;
      }
      if (*(char *)(param_1 + 0x621) == '\v') {
        lVar4 = *(longlong *)(param_1 + 0xc98);
        *(undefined2 *)(lVar4 + 0x14) = (undefined2)DAT_0211001c;
        *(undefined2 *)(lVar4 + 0x16) = DAT_02110020;
      }
      if (*(char *)(param_1 + 0x621) == '\f') {
        lVar4 = *(longlong *)(param_1 + 0xc98);
        *(undefined2 *)(lVar4 + 0x18) = (undefined2)DAT_0211001c;
        *(undefined2 *)(lVar4 + 0x1a) = DAT_02110020;
      }
      if (*(char *)(param_1 + 0x621) == '\x10') {
        if (_DAT_02110024 == 0) {
          DAT_02110048 = 0;
        }
        if (_DAT_02110024 == 1) {
          DAT_02110048 = 3;
        }
        local_48 = FUN_00498310(0,0);
        uVar5 = FUN_017b02a0(&PTR_FUN_017a79c0,1,0,0,in_stack_ffffffffffffff58 & 0xffffffffffff0000,
                             4,0,DAT_02110048,DAT_0211001c,_DAT_02110020,0,&local_48,
                             0x4020000000000000,0x80);
        *(undefined8 *)(param_1 + 0xca0) = uVar5;
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xc98) + 0x30),
                     *(undefined8 *)(param_1 + 0xca0));
        *(undefined8 *)(param_1 + 0xca0) = 0;
      }
      if (*(char *)(param_1 + 0x621) == '\x12') {
        DAT_0211005c = (char)DAT_0211001c;
        if ((char)DAT_0211001c == '\x02') {
          FUN_017809e0(param_1,*(undefined8 *)(param_1 + 0xc98),&DAT_02110060);
          FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xc90) + 0x38),
                       *(undefined8 *)(param_1 + 0xc98));
          uVar5 = FUN_00c3ca20(DAT_02110060);
          *(undefined8 *)(param_1 + 0xc98) = uVar5;
          FUN_01780c70(param_1,DAT_02110060,param_1 + 0xc98);
          FUN_00410f20(DAT_02110060);
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc98) + 0x38);
          (**(code **)(*plVar3 + 0x10))(plVar3);
          *(undefined4 *)(*(longlong *)(param_1 + 0xc98) + 8) = 1;
          _DAT_0211004c = FUN_00b95af0(*(undefined4 *)(*(longlong *)(param_1 + 0xc98) + 0x28));
          goto LAB_017805d3;
        }
        if ((char)DAT_0211001c == '\x01') {
          DAT_0211004c = DAT_0211004c + _DAT_02110020;
          _DAT_0211004c = CONCAT44(DAT_02110050 + _DAT_02110024,DAT_0211004c);
        }
        if ((char)DAT_0211001c == '\0') {
          DAT_02110054._0_4_ = DAT_0211004c + _DAT_02110020;
          DAT_02110054._4_4_ = DAT_02110050 + _DAT_02110024;
          uVar5 = FUN_017b1980(&PTR_FUN_017a8d10,1,&DAT_0211004c,FUN_00808000,1);
          *(undefined8 *)(param_1 + 0xca8) = uVar5;
          FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xc98) + 0x38),
                       *(undefined8 *)(param_1 + 0xca8));
          _DAT_0211004c = CONCAT44(DAT_02110054._4_4_,(int)DAT_02110054);
          *(undefined8 *)(param_1 + 0xca8) = 0;
        }
      }
      if (*(char *)(param_1 + 0x621) == '\x13') {
        if (*(longlong *)(param_1 + 0xc98) != 0) {
          FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xc90) + 0x38),
                       *(undefined8 *)(param_1 + 0xc98));
        }
        *(undefined8 *)(param_1 + 0xc98) = 0;
      }
      if (*(char *)(param_1 + 0x621) == '\x14') {
        DAT_02110070 = DAT_02110070 + 1;
        lVar4 = *(longlong *)(param_1 + 0xc90);
        iVar7 = *(int *)(*(longlong *)(lVar4 + 0x38) + 0x10);
        DAT_02110018 = 0;
        if (-1 < iVar7 + -1) {
          do {
            DAT_02110068 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x38),DAT_02110018);
            lVar6 = FUN_004aeac0(*(undefined8 *)(DAT_02110068 + 0x30),DAT_02110070);
            FUN_00416910(lVar6 + 0x40,DAT_02110010,0xff);
            lVar6 = FUN_004aeac0(*(undefined8 *)(DAT_02110068 + 0x30),DAT_02110070);
            *(undefined1 *)(lVar6 + 0x140) = 1;
            iVar2 = FUN_004170c0(&DAT_01780678,DAT_02110010,1);
            if (0 < iVar2) {
              lVar6 = FUN_004aeac0(*(undefined8 *)(DAT_02110068 + 0x30),DAT_02110070);
              *(undefined1 *)(lVar6 + 0x145) = 0x42;
            }
            if (DAT_02110080 == 0) {
              DAT_02110084 = 0;
            }
            if (DAT_02110080 == 1) {
              DAT_02110084 = 2;
            }
            lVar6 = FUN_004aeac0(*(undefined8 *)(DAT_02110068 + 0x30),DAT_02110070);
            *(undefined1 *)(lVar6 + 0x147) = DAT_02110084;
            DAT_02110018 = DAT_02110018 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
    }
  }
LAB_017805d3:
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res10);
  return;
}

