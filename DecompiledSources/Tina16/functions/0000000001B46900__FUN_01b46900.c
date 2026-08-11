/* Ghidra address: 01b46900 */
/* Ghidra symbol: FUN_01b46900 */


longlong FUN_01b46900(longlong param_1,char param_2,int param_3,undefined4 param_4,
                     undefined8 param_5)

{
  char cVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_48 = param_5;
  FUN_00c816f0(local_res8,0,param_3,param_4);
  *(int *)(local_res8 + 0x20) = param_3;
  if (param_3 < -0x132) {
    if (param_3 == -0x133) {
      *(undefined2 *)(local_res8 + 0x28) = 0x3f;
      *(undefined2 *)(local_res8 + 0x2a) = 0x6a;
      *(undefined4 *)(local_res8 + 0x24) = 2;
      goto code_r0x01b46f53;
    }
    if (param_3 < -0x136) {
      if (param_3 == -0x137) {
        *(undefined2 *)(local_res8 + 0x28) = 0x2c;
        *(undefined2 *)(local_res8 + 0x2a) = 0x19d;
        *(undefined2 *)(local_res8 + 0x2c) = 0x19a;
        *(undefined2 *)(local_res8 + 0x2e) = 0x19b;
        *(undefined4 *)(local_res8 + 0x24) = 4;
        goto code_r0x01b46f53;
      }
      if (param_3 == -0x13b) {
        *(undefined2 *)(local_res8 + 0x28) = 0xb3;
        *(undefined2 *)(local_res8 + 0x2a) = 0xb4;
        *(undefined4 *)(local_res8 + 0x24) = 2;
        goto code_r0x01b46f53;
      }
      if (param_3 == -0x13a) {
        *(undefined2 *)(local_res8 + 0x28) = 0xc3;
        *(undefined2 *)(local_res8 + 0x2a) = 0xb6;
        *(undefined2 *)(local_res8 + 0x2c) = 0xc4;
        *(undefined2 *)(local_res8 + 0x2e) = 0xb8;
        *(undefined4 *)(local_res8 + 0x24) = 4;
        goto code_r0x01b46f53;
      }
      if (param_3 == -0x139) {
        *(undefined2 *)(local_res8 + 0x28) = 0xb5;
        *(undefined2 *)(local_res8 + 0x2a) = 0xb7;
        *(undefined4 *)(local_res8 + 0x24) = 2;
        goto code_r0x01b46f53;
      }
      if (param_3 == -0x138) {
        *(undefined2 *)(local_res8 + 0x28) = 0x9f;
        *(undefined2 *)(local_res8 + 0x2a) = 0x9d;
        *(undefined4 *)(local_res8 + 0x24) = 2;
        cVar1 = FUN_01b23030();
        if (cVar1 == '\0') {
          *(undefined2 *)(local_res8 + 0x2c) = 900;
          *(undefined4 *)(local_res8 + 0x24) = 3;
        }
        goto code_r0x01b46f53;
      }
    }
    else {
      if (param_3 == -0x136) {
        *(undefined2 *)(local_res8 + 0x28) = 0xa6;
        *(undefined2 *)(local_res8 + 0x2a) = 0xa7;
        *(undefined4 *)(local_res8 + 0x24) = 2;
        goto code_r0x01b46f53;
      }
      if (param_3 == -0x135) {
        *(undefined2 *)(local_res8 + 0x28) = 0x3e;
        *(undefined2 *)(local_res8 + 0x2a) = 0x66;
        *(undefined4 *)(local_res8 + 0x24) = 2;
        goto code_r0x01b46f53;
      }
      if (param_3 == -0x134) {
        *(undefined2 *)(local_res8 + 0x28) = 0x3d;
        *(undefined2 *)(local_res8 + 0x2a) = 0x65;
        *(undefined4 *)(local_res8 + 0x24) = 2;
        goto code_r0x01b46f53;
      }
    }
  }
  else if (param_3 < -0x12e) {
    if (param_3 == -0x12f) {
      *(undefined2 *)(local_res8 + 0x28) = 0x31;
      *(undefined2 *)(local_res8 + 0x2a) = 0x92;
      *(undefined4 *)(local_res8 + 0x24) = 2;
      goto code_r0x01b46f53;
    }
    if (param_3 == -0x132) {
      *(undefined2 *)(local_res8 + 0x28) = 0x467;
      *(undefined2 *)(local_res8 + 0x2a) = 0x468;
      *(undefined2 *)(local_res8 + 0x2c) = 0x463;
      *(undefined2 *)(local_res8 + 0x2e) = 0x469;
      *(undefined2 *)(local_res8 + 0x30) = 0x46a;
      *(undefined2 *)(local_res8 + 0x32) = 0x46b;
      *(undefined2 *)(local_res8 + 0x34) = 0x46c;
      *(undefined4 *)(local_res8 + 0x24) = 7;
      goto code_r0x01b46f53;
    }
    if (param_3 == -0x131) {
      *(undefined2 *)(local_res8 + 0x28) = 0x76;
      FUN_00414ad0(local_res8 + 0x40,L"ad_da-555/555_timer");
      *(undefined2 *)(local_res8 + 0x2a) = 0x69;
      FUN_00414ad0(local_res8 + 0x48,L"semiconductors/operational_amplifier");
      *(undefined2 *)(local_res8 + 0x2c) = 40000;
      FUN_00414ad0(local_res8 + 0x50,L"gates/and2_gate");
      *(undefined2 *)(local_res8 + 0x2e) = 0x9c41;
      FUN_00414ad0(local_res8 + 0x58,L"gates/nand2_gate");
      *(undefined2 *)(local_res8 + 0x30) = 0x9c42;
      FUN_00414ad0(local_res8 + 0x60,L"gates/or2_gate");
      *(undefined2 *)(local_res8 + 0x32) = 0x9c43;
      FUN_00414ad0(local_res8 + 0x68,L"gates/nor2_gate");
      *(undefined2 *)(local_res8 + 0x34) = 0x9c44;
      FUN_00414ad0(local_res8 + 0x70,L"gates/nor_gate_inverter");
      *(undefined2 *)(local_res8 + 0x36) = 0x9c45;
      FUN_00414ad0(local_res8 + 0x78,L"gates/xor_gate");
      *(undefined2 *)(local_res8 + 0x38) = 0x9c46;
      FUN_00414ad0(local_res8 + 0x80,L"flip-flops/jk_flipflop");
      *(undefined2 *)(local_res8 + 0x3a) = 0x9c47;
      FUN_00414ad0(local_res8 + 0x88,L"flip-flops/d_flipflop");
      *(undefined2 *)(local_res8 + 0x3c) = 0x9c48;
      FUN_00414ad0(local_res8 + 0x90,L"flip-flops/latch");
      *(undefined4 *)(local_res8 + 0x24) = 0xb;
      goto code_r0x01b46f53;
    }
    if (param_3 == -0x130) {
      *(undefined2 *)(local_res8 + 0x28) = 0x14;
      FUN_00414ad0(local_res8 + 0x40,L"sources/u_u");
      *(undefined2 *)(local_res8 + 0x2a) = 0x11;
      FUN_00414ad0(local_res8 + 0x48,L"sources/i_i");
      *(undefined2 *)(local_res8 + 0x2c) = 0x12;
      FUN_00414ad0(local_res8 + 0x50,L"sources/i_u");
      *(undefined2 *)(local_res8 + 0x2e) = 0x13;
      FUN_00414ad0(local_res8 + 0x58,L"sources/u_i");
      *(undefined4 *)(local_res8 + 0x24) = 4;
      cVar1 = FUN_01b23030();
      if (cVar1 == '\0') {
        *(undefined2 *)(local_res8 + 0x30) = 0x85;
        *(undefined2 *)(local_res8 + 0x32) = 0x36;
        *(undefined2 *)(local_res8 + 0x34) = 0x84;
        *(undefined2 *)(local_res8 + 0x36) = 0x37;
        *(undefined4 *)(local_res8 + 0x24) = 8;
        *(undefined2 *)(local_res8 + 0x38) = 0xa1;
        *(undefined4 *)(local_res8 + 0x24) = 9;
      }
      goto code_r0x01b46f53;
    }
  }
  else {
    if (param_3 == -0x12e) {
      *(undefined2 *)(local_res8 + 0x28) = 0x60;
      *(undefined2 *)(local_res8 + 0x2a) = 0x61;
      *(undefined4 *)(local_res8 + 0x24) = 2;
      goto code_r0x01b46f53;
    }
    if (param_3 == -0x12d) {
      *(undefined2 *)(local_res8 + 0x28) = 0xc;
      *(undefined2 *)(local_res8 + 0x2a) = 0x78;
      *(undefined2 *)(local_res8 + 0x2c) = 0x2e;
      *(undefined2 *)(local_res8 + 0x2e) = 0x2f;
      *(undefined2 *)(local_res8 + 0x30) = 0x45;
      *(undefined2 *)(local_res8 + 0x32) = 0x4a;
      *(undefined2 *)(local_res8 + 0x34) = 0x4b;
      *(undefined4 *)(local_res8 + 0x24) = 7;
      goto code_r0x01b46f53;
    }
    if (param_3 == -300) {
      *(undefined2 *)(local_res8 + 0x28) = 0x4c;
      *(undefined2 *)(local_res8 + 0x2a) = 0x4d;
      *(undefined4 *)(local_res8 + 0x24) = 2;
      goto code_r0x01b46f53;
    }
  }
  *(undefined4 *)(local_res8 + 0x24) = 0;
code_r0x01b46f53:
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

