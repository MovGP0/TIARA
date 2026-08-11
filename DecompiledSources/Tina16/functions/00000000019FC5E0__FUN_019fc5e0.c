/* Ghidra address: 019fc5e0 */
/* Ghidra symbol: FUN_019fc5e0 */


void FUN_019fc5e0(longlong param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_res18 [2];
  undefined4 uVar5;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  char local_22;
  char local_21;
  undefined8 local_20 [2];
  
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_78 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar3 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
  FUN_019f29b0(param_1,local_20,local_res18[0],param_2,uVar3,param_4);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    cVar1 = FUN_01a0c930(param_1,param_2,*(undefined8 *)(param_1 + 0x58),&local_22);
    if (cVar1 != '\0') {
      sVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
      if (sVar2 == 0x2b) {
        FUN_00414b50(&local_38,L" ZENER_DIODE ");
      }
      else {
        FUN_00414b50(&local_38,L" DIODE_SPICE ");
      }
      if ((byte)(local_22 - 1U) < 2) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                  (*(longlong **)(param_1 + 0x58),&local_88);
        FUN_019ee820(param_1,&local_80,0x15,local_88,CONCAT44(uVar5,0xb));
        FUN_019f0400(param_1,&local_90,0,0);
        FUN_019f0400(param_1,&local_98,1,0);
        FUN_019ed1f0(param_1,&local_a0,1,1);
        FUN_019ed1f0(param_1,&local_a8,1,2);
        FUN_019ed1f0(param_1,&local_b0,1,6);
        FUN_00416cd0(&local_78,0xd,local_80,&DAT_019fcd1c,local_90,&DAT_019fcd1c,local_98,local_38,
                     L"VARS:",L" IS=",local_a0,&DAT_019fcdc0,local_a8,L" RS=",local_b0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_78);
        sVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                          (*(longlong **)(param_1 + 0x58));
        if (sVar2 == 0x2b) {
          FUN_019ed1f0(param_1,&local_c0,1,3);
          FUN_019ed1f0(param_1,&local_c8,1,4);
          FUN_00416cd0(&local_b8,4,L" VZ=",local_c0,L" RZ=",local_c8);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),local_b8);
        }
      }
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_60)
    ;
    FUN_019ee820(param_1,&local_58,param_2,local_60,CONCAT44(uVar5,0xb));
    FUN_019f0400(param_1,&local_68,0,0);
    FUN_019f0400(param_1,&local_70,1,0);
    FUN_00416cd0(local_50,8,local_58,&DAT_019fcd1c,local_68,&DAT_019fcd1c,local_70,&DAT_019fcd2c,
                 local_20[0],&DAT_019fcd1c);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
              (*(longlong **)(param_1 + 0x20),local_50[0]);
  }
  if (*(char *)(param_1 + 0xc0) != '\x04') {
    dVar4 = (double)FUN_019ed670(param_1,4,0,&local_39,&local_30);
    if (dVar4 != 1.0) {
      FUN_00416ba0(&local_d0,local_30,&DAT_019fcd1c);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_d0)
      ;
    }
    local_21 = FUN_019edff0(param_1,5,0);
    if (local_21 == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),L"OFF ");
    }
    FUN_019edd90(param_1,6,0,&local_21,&local_30);
    if (local_21 == '\0') {
      FUN_00416cd0(&local_d8,3,&LAB_019fce34,local_30,&DAT_019fcd1c);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_d8)
      ;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),0);
  FUN_00414560(&local_d8,0x12);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return;
}

