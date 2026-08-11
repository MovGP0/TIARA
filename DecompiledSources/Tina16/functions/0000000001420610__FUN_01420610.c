/* Ghidra address: 01420610 */
/* Ghidra symbol: FUN_01420610 */


void FUN_01420610(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  cVar1 = (char)param_3;
  FUN_016ed320(param_1,4,0,0,0);
  FUN_016ed320(param_1,6,0,0,0);
  FUN_016ed320(param_1,8,0,0,0);
  FUN_016ed320(param_1,10,0,0,0);
  FUN_016ed320(param_1,0x10,0,0,0);
  FUN_016ed320(param_1,0xe,0,0,0);
  FUN_016ed320(param_1,0xc,0,0,0);
  FUN_016ed320(param_1,0x11,0,0,0);
  FUN_016ed320(param_1,0x14,0,0,0);
  FUN_016ed320(param_1,0x19,0,0,0);
  FUN_016ed320(param_1,0x1b,0,0,0);
  FUN_016ed320(param_1,0x17,0,0,0);
  FUN_016ed320(param_1,0x12,0,0,0);
  FUN_016ed320(param_1,0x15,0,0,0);
  FUN_016ed320(param_1,0x1e,0,0,0);
  FUN_016ed320(param_1,0x22,0,0,0);
  FUN_016ed320(param_1,0x20,0,0,0);
  FUN_016ed320(param_1,0x1c,0,0,0);
  if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
    pdVar3 = (double *)FUN_016eae40(param_1,1);
    local_38 = *pdVar3;
    lVar2 = FUN_016eae40(param_1,1);
    local_30 = *(double *)(lVar2 + 8);
    pdVar3 = (double *)FUN_016eae40(param_1,2);
    local_48 = *pdVar3;
    lVar2 = FUN_016eae40(param_1,2);
    local_40 = *(double *)(lVar2 + 8);
    pdVar3 = (double *)FUN_016eae40(param_1,3);
    local_58 = *pdVar3;
    lVar2 = FUN_016eae40(param_1,3);
    local_50 = *(double *)(lVar2 + 8);
    pdVar3 = (double *)FUN_016eae40(param_1,4);
    local_68 = *pdVar3;
    lVar2 = FUN_016eae40(param_1,4);
    local_60 = *(double *)(lVar2 + 8);
  }
  else if ((byte)(cVar1 - 7U) < 2) {
    lVar2 = FUN_016eae40(param_1,1);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    local_38 = (double)FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,1);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    local_30 = (double)FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,2);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    local_48 = (double)FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,2);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    local_40 = (double)FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,3);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    local_58 = (double)FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,3);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    local_50 = (double)FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,4);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    local_68 = (double)FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar4);
    lVar2 = FUN_016eae40(param_1,4);
    uVar4 = FUN_016ed7f0(param_2,param_3);
    local_60 = (double)FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar4);
  }
  if ((local_38 == 0.0) && (local_30 == 0.0)) {
    if ((local_48 == 0.0) && (local_40 == 0.0)) {
      if ((local_58 == 0.0) && (local_50 == 0.0)) {
        if ((local_68 != 0.0) || (local_60 != 0.0)) {
          FUN_00c44790(&local_48,&local_68,&local_78);
          FUN_00c44a50(local_c8,&local_38,&local_68);
          FUN_00c44a50(local_d8,&local_48,&local_58);
          FUN_00c44b10(local_b8,local_c8,local_d8);
          FUN_00c44790(local_b8,&local_68,&local_88);
          FUN_00c44460(local_b8,0x3ff0000000000000,0);
          FUN_00c44790(local_b8,&local_68,&local_98);
          FUN_00c44460(local_c8,0xbff0000000000000,0);
          FUN_00c44a50(local_b8,local_c8,&local_58);
          FUN_00c44790(local_b8,&local_68,&local_a8);
          FUN_016ed320(param_1,0x12,0x41cdcd6500000000,0x41cdcd6500000000,0);
          FUN_016ed320(param_1,0x15,0x41cdcd6500000000,0x41cdcd6500000000,0);
          FUN_016ed320(param_1,0x11,*(undefined8 *)(param_2 + 0x430),
                       *(undefined8 *)(param_2 + 0x430),0);
          if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
            FUN_016ed320(param_1,0x1e,local_78,0,0);
            FUN_016ed320(param_1,0x22,local_88,0,0);
            FUN_016ed320(param_1,0xc,local_a8,0,0);
            FUN_016ed320(param_1,0x20,local_98,0,0);
          }
          else if ((byte)(cVar1 - 7U) < 2) {
            FUN_016ed320(param_1,0x1e,local_78,local_70,0);
            FUN_016ed320(param_1,0x22,local_88,local_80,0);
            FUN_016ed320(param_1,0xc,local_a8,local_a0,0);
            FUN_016ed320(param_1,0x20,local_98,local_90,0);
          }
        }
      }
      else {
        FUN_00c44790(&local_38,&local_58,&local_78);
        FUN_00c44a50(local_c8,&local_48,&local_58);
        FUN_00c44a50(local_d8,&local_38,&local_68);
        FUN_00c44b10(local_b8,local_c8,local_d8);
        FUN_00c44790(local_b8,&local_58,&local_88);
        FUN_00c44460(local_b8,0x3ff0000000000000,0);
        FUN_00c44790(local_b8,&local_58,&local_98);
        FUN_00c44460(local_c8,0xbff0000000000000,0);
        FUN_00c44a50(local_b8,local_c8,&local_68);
        FUN_00c44790(local_b8,&local_58,&local_a8);
        FUN_016ed320(param_1,0x1c,0x41cdcd6500000000,0x41cdcd6500000000,0);
        FUN_016ed320(param_1,0x11,*(undefined8 *)(param_2 + 0x430),*(undefined8 *)(param_2 + 0x430),
                     0);
        if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
          FUN_016ed320(param_1,0x14,local_78,0,0);
          FUN_016ed320(param_1,0x19,local_88,0,0);
          FUN_016ed320(param_1,0x17,local_a8,0,0);
          FUN_016ed320(param_1,0x1b,local_98,0,0);
        }
        else if ((byte)(cVar1 - 7U) < 2) {
          FUN_016ed320(param_1,0x14,local_78,local_70,0);
          FUN_016ed320(param_1,0x19,local_88,local_80,0);
          FUN_016ed320(param_1,0x17,local_a8,local_a0,0);
          FUN_016ed320(param_1,0x1b,local_98,local_90,0);
        }
      }
    }
    else {
      FUN_00c44790(&local_68,&local_48,&local_78);
      FUN_00c44a50(local_c8,&local_48,&local_58);
      FUN_00c44a50(local_d8,&local_38,&local_68);
      FUN_00c44b10(local_b8,local_c8,local_d8);
      FUN_00c44790(local_b8,&local_48,&local_88);
      FUN_00c44460(local_b8,0x3ff0000000000000,0);
      FUN_00c44790(local_b8,&local_48,&local_98);
      FUN_00c44460(local_c8,0xbff0000000000000,0);
      FUN_00c44a50(local_b8,local_c8,&local_38);
      FUN_00c44790(local_b8,&local_48,&local_a8);
      FUN_016ed320(param_1,0x11,*(undefined8 *)(param_2 + 0x430),*(undefined8 *)(param_2 + 0x430),0)
      ;
      FUN_016ed320(param_1,0x12,0x41cdcd6500000000,0x41cdcd6500000000,0);
      FUN_016ed320(param_1,0x15,0x41cdcd6500000000,0x41cdcd6500000000,0);
      FUN_016ed320(param_1,0x1c,0x41cdcd6500000000,0x41cdcd6500000000,0);
      if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
        FUN_016ed320(param_1,4,local_78,0,0);
        FUN_016ed320(param_1,0x10,local_88,0,0);
        FUN_016ed320(param_1,0xc,local_a8,0,0);
        FUN_016ed320(param_1,0xe,local_98,0,0);
      }
      else if ((byte)(cVar1 - 7U) < 2) {
        FUN_016ed320(param_1,4,local_78,local_70,0);
        FUN_016ed320(param_1,0x10,local_88,local_80,0);
        FUN_016ed320(param_1,0xc,local_a8,local_a0,0);
        FUN_016ed320(param_1,0xe,local_98,local_90,0);
      }
    }
  }
  else {
    FUN_00c44790(&local_58,&local_38,&local_78);
    FUN_00c44a50(local_c8,&local_38,&local_68);
    FUN_00c44a50(local_d8,&local_48,&local_58);
    FUN_00c44b10(local_b8,local_c8,local_d8);
    FUN_00c44790(local_b8,&local_38,&local_88);
    FUN_00c44460(local_b8,0x3ff0000000000000,0);
    FUN_00c44790(local_b8,&local_38,&local_98);
    FUN_00c44460(local_c8,0xbff0000000000000,0);
    FUN_00c44a50(local_b8,local_c8,&local_48);
    FUN_00c44790(local_b8,&local_38,&local_a8);
    FUN_016ed320(param_1,0x11,0x412e848000000000,0x412e848000000000,0);
    FUN_016ed320(param_1,0x12,0x41cdcd6500000000,0x41cdcd6500000000,0);
    FUN_016ed320(param_1,0x15,0x41cdcd6500000000,0x41cdcd6500000000,0);
    FUN_016ed320(param_1,0x1c,0x41cdcd6500000000,0x41cdcd6500000000,0);
    if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
      FUN_016ed320(param_1,4,local_78,0,0);
      FUN_016ed320(param_1,6,local_88,0,0);
      FUN_016ed320(param_1,8,local_a8,0,0);
      FUN_016ed320(param_1,10,local_98,0,0);
    }
    else if ((byte)(cVar1 - 7U) < 2) {
      FUN_016ed320(param_1,4,local_78,local_70,0);
      FUN_016ed320(param_1,6,local_88,local_80,0);
      FUN_016ed320(param_1,7,local_a8,local_a0,0);
      FUN_016ed320(param_1,10,local_98,local_90,0);
    }
  }
  return;
}

