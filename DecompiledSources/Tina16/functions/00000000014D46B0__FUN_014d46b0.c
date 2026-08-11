/* Ghidra address: 014d46b0 */
/* Ghidra symbol: FUN_014d46b0 */


void FUN_014d46b0(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 in_RAX;
  int unaff_R13D;
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  ulonglong in_stack_ffffffffffffff70;
  undefined1 local_62;
  byte local_61;
  double local_60;
  double local_58;
  double local_50 [5];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) && ((*(byte *)(param_3 + 0x88) & 0x80) == 0)) {
        if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
          dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                       param_1[0xd],0);
          if (*(double *)(param_1 + 0x20) != 0.0) {
            unaff_R13D = FUN_014cfd80(param_2,param_3,dVar3,*(undefined8 *)(param_1 + 0x38),
                                      *(undefined8 *)(param_1 + 0x20),param_1[2] + '\x01');
          }
        }
        else {
          dVar3 = *(double *)(param_1 + 0x38);
          if (*(double *)(param_1 + 0x20) != 0.0) {
            unaff_R13D = FUN_014cfd10(param_2,param_3,0,local_61,param_1[2] + '\x01');
          }
        }
      }
      else {
        dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],
                                     param_1[0xd],0);
        if (*(double *)(param_1 + 0x20) != 0.0) {
          unaff_R13D = FUN_014cfc00(param_2,param_3,dVar3,*(undefined8 *)(param_1 + 0x38),
                                    *(undefined8 *)(param_1 + 0x20),param_1[2] + '\x01');
        }
      }
      if (*(double *)(param_1 + 0x20) == 0.0) {
        dVar4 = *(double *)(param_1 + 0x38);
      }
      else if (unaff_R13D == 0) {
        dVar4 = *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x20);
      }
      else {
        dVar4 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
      }
      local_50[0] = *(double *)(param_1 + 0x48) * (dVar3 - dVar4) + *(double *)(param_1 + 0x40);
      if (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x30) <= 0.0) {
        local_60 = 1.0;
      }
      else {
        FUN_00daa090(local_50[0],*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)(param_1 + 0x28),
                     (*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x30)) / 100.0,local_50,
                     &local_60,&local_58,&local_62);
        FUN_016e9f80(param_2,param_3,local_62,0x10);
        *(double *)(param_1 + 0x58) = local_58;
      }
      local_60 = local_60 * *(double *)(param_1 + 0x48);
      local_50[0] = local_50[0] -
                    local_60 *
                    ((local_58 - *(double *)(param_1 + 0x40)) / *(double *)(param_1 + 0x48) + dVar4)
      ;
      FUN_016ed320(param_2,*param_1 + '\x01',local_50[0],*(undefined8 *)(param_1 + 0x50),0);
      FUN_016ed220(param_2,*param_1 + '\x02',local_60,0);
    }
    else if (*(double *)(param_1 + 0x20) != 0.0) {
      uVar2 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[0xc],param_1[0xd],0);
      FUN_014cfb80(param_2,param_3,uVar2,*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x20),in_stack_ffffffffffffff70 & 0xffffffffffffff00,
                   &local_61,param_1[2] + '\x01');
    }
  }
  return;
}

