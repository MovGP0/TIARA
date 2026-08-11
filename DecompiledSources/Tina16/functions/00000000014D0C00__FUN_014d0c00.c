/* Ghidra address: 014d0c00 */
/* Ghidra symbol: FUN_014d0c00 */


void FUN_014d0c00(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 in_RAX;
  int unaff_R13D;
  bool bVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong in_stack_ffffffffffffff40;
  byte local_82;
  undefined1 local_81;
  double local_80;
  double local_78;
  double local_70 [9];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) && ((*(byte *)(param_3 + 0x88) & 0x80) == 0)) {
        if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
          dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                       param_1[0xd],0);
          local_70[0] = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0x10],
                                             param_1[0xe],0);
          local_78 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xe],
                                          param_1[0x11],0);
          if (*(double *)(param_1 + 0x20) != 0.0) {
            unaff_R13D = FUN_014cfd80(param_2,param_3,dVar6,*(undefined8 *)(param_1 + 0x38),
                                      *(undefined8 *)(param_1 + 0x20),param_1[2] + '\x01');
          }
        }
        else {
          dVar6 = 0.0;
          local_70[0] = *(double *)(param_1 + 0x88);
          local_78 = *(double *)(param_1 + 0x90);
          if (*(double *)(param_1 + 0x20) != 0.0) {
            unaff_R13D = FUN_014cfd10(param_2,param_3,0,local_82,param_1[2] + '\x01');
          }
        }
      }
      else {
        dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                     param_1[0xd],0);
        local_70[0] = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0x10],
                                           param_1[0xe],0);
        local_78 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xe],
                                        param_1[0x11],0);
        if (*(double *)(param_1 + 0x20) != 0.0) {
          dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                       param_1[0xd],0);
          unaff_R13D = FUN_014cfc00(param_2,param_3,dVar6,*(undefined8 *)(param_1 + 0x38),
                                    *(undefined8 *)(param_1 + 0x20),param_1[2] + '\x01');
        }
      }
      if (*(double *)(param_1 + 0x20) == 0.0) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
      }
      else if (unaff_R13D == 0) {
        *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x20);
      }
      else {
        *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
      }
      *(double *)(param_1 + 0x68) =
           *(double *)(param_1 + 0x60) * (dVar6 - *(double *)(param_1 + 0x18)) +
           *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x40);
      FUN_00daa090(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x80),
                   *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),
                   (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x50)) * 0.01,param_1 + 0x68
                   ,param_1 + 0x98,&local_80,&local_81);
      FUN_016e9f80(param_2,param_3,local_81,4);
      *(double *)(param_1 + 0x80) = local_80;
      *(double *)(param_1 + 0x98) = *(double *)(param_1 + 0x98) * *(double *)(param_1 + 0x60);
      dVar6 = *(double *)(param_1 + 0x58);
      dVar1 = *(double *)(param_1 + 0x40);
      dVar2 = *(double *)(param_1 + 0x60);
      dVar3 = *(double *)(param_1 + 0x18);
      dVar7 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x28));
      dVar7 = dVar7 * 0.1;
      if (dVar7 < 0.01) {
        dVar7 = 0.01;
      }
      dVar8 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x30));
      dVar8 = dVar8 * 0.1;
      if (dVar8 < 0.01) {
        dVar8 = 0.01;
      }
      uVar5 = FUN_0040c850(*(double *)(param_1 + 0x48) / dVar7);
      uVar9 = FUN_0040c850(*(double *)(param_1 + 0x50) / dVar8);
      uVar10 = FUN_00b90620(uVar5,uVar9);
      FUN_00daa3d0(local_70[0],*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x28),0,
                   dVar7,uVar10 ^ 0x8000000000000000,0,param_1 + 0x70,param_1 + 0xa0,local_70,
                   &local_81);
      *(double *)(param_1 + 0x88) = local_70[0];
      FUN_016e9f80(param_2,param_3,local_81,5);
      FUN_00daa3d0(local_78,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x30),0,dVar8,
                   uVar10 ^ 0x8000000000000000,0,param_1 + 0x78,param_1 + 0xa8,&local_78,&local_81);
      *(double *)(param_1 + 0x90) = local_78;
      FUN_016e9f80(param_2,param_3,local_81,6);
      FUN_016ed320(param_2,*param_1 + '\x01',
                   ((((*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x70)) +
                     *(double *)(param_1 + 0x78)) -
                    *(double *)(param_1 + 0x98) * ((local_80 - dVar6 * dVar1) / dVar2 + dVar3)) +
                   *(double *)(param_1 + 0xa0) * local_70[0]) -
                   *(double *)(param_1 + 0xa8) * local_78,*(undefined8 *)(param_1 + 0x58),0);
      FUN_016ed220(param_2,*param_1 + '\x02',*(undefined8 *)(param_1 + 0x98),0);
      FUN_016ed220(param_2,*param_1 + '\x03',*(ulonglong *)(param_1 + 0xa0) ^ 0x8000000000000000,0);
      FUN_016ed220(param_2,*param_1 + '\x04',*(undefined8 *)(param_1 + 0xa8),0);
    }
    else if (*(double *)(param_1 + 0x20) != 0.0) {
      uVar5 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],param_1[0xd],0);
      FUN_014cfb80(param_2,param_3,uVar5,*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x20),in_stack_ffffffffffffff40 & 0xffffffffffffff00,
                   &local_82,param_1[2] + '\x01');
    }
  }
  return;
}

