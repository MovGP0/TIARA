/* Ghidra address: 00460450 */
/* Ghidra symbol: FUN_00460450 */


void FUN_00460450(int param_1)

{
  undefined8 uVar1;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = 0;
  local_88 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (param_1 < -0x7ffdfff5) {
    if (param_1 == -0x7ffdfff6) {
      FUN_0041ddd0(&local_18,PTR_PTR_02001a90);
      uVar1 = FUN_0044d490(&PTR_FUN_0045f268,1,local_18);
      FUN_004134c0(uVar1);
      goto code_r0x00460784;
    }
    if (param_1 < -0x7ffdfffa) {
      if (param_1 == -0x7ffdfffb) {
        FUN_004600a0();
        goto code_r0x00460784;
      }
      if (param_1 == -0x7fffbfff) {
        FUN_0041ddd0(&local_30,PTR_PTR_02003b80);
        uVar1 = FUN_0044d490(&PTR_FUN_0045fa18,1,local_30);
        FUN_004134c0(uVar1);
        goto code_r0x00460784;
      }
      if (param_1 == -0x7fff0001) {
        FUN_0041ddd0(&local_48,PTR_PTR_02001a88);
        uVar1 = FUN_0044d490(&PTR_FUN_0045fca0,1,local_48);
        FUN_004134c0(uVar1);
        goto code_r0x00460784;
      }
    }
    else {
      if (param_1 == -0x7ffdfff8) {
        FUN_0041ddd0(&local_10,PTR_PTR_02005210);
        uVar1 = FUN_0044d490(&PTR_FUN_0045f4f8,1,local_10);
        FUN_004134c0(uVar1);
        goto code_r0x00460784;
      }
      if (param_1 == -0x7ffdfff7) {
        FUN_00460210();
        goto code_r0x00460784;
      }
    }
  }
  else {
    if (param_1 == -0x7ffdfff5) {
      FUN_0041ddd0(&local_20,PTR_PTR_020047f8);
      uVar1 = FUN_0044d490(&PTR_FUN_0045f640,1,local_20);
      FUN_004134c0(uVar1);
      goto code_r0x00460784;
    }
    if (param_1 == -0x7ffdfff3) {
      FUN_0041ddd0(&local_28,PTR_PTR_02005a08);
      uVar1 = FUN_0044d490(&PTR_FUN_0045f788,1,local_28);
      FUN_004134c0(uVar1);
      goto code_r0x00460784;
    }
    if (param_1 == -0x7ff8fff2) {
      FUN_0041ddd0(&local_38,PTR_PTR_02002230);
      uVar1 = FUN_0044d490(&PTR_FUN_0045fb58,1,local_38);
      FUN_004134c0(uVar1);
      goto code_r0x00460784;
    }
    if (param_1 == -0x7ff8ffa9) {
      FUN_0041ddd0(&local_40,PTR_PTR_02002308);
      uVar1 = FUN_0044d490(&PTR_FUN_0045f3b0,1,local_40);
      FUN_004134c0(uVar1);
      goto code_r0x00460784;
    }
  }
  FUN_0041ddd0(&local_50,PTR_PTR_02002ea0);
  local_80 = *(undefined8 *)PTR_PTR_02005288;
  local_78 = 0x11;
  local_68 = 0;
  local_70 = param_1;
  FUN_0044b630(&local_88,param_1,0);
  local_60 = local_88;
  local_58 = 0x11;
  uVar1 = FUN_0044d530(&PTR_FUN_00436680,1,local_50,&local_80,2);
  FUN_004134c0(uVar1);
code_r0x00460784:
  FUN_00414480(&local_88);
  FUN_00414560(&local_50,9);
  return;
}

