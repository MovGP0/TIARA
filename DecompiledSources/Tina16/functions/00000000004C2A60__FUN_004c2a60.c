/* Ghidra address: 004c2a60 */
/* Ghidra symbol: FUN_004c2a60 */


void FUN_004c2a60(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  uVar2 = FUN_004bea50(param_1);
  uVar2 = uVar2 & 0xff;
  if (uVar2 < 0xd) {
    if (uVar2 == 0xc) {
LAB_004c2c35:
      FUN_004c2a00(auStack_38,1);
      goto code_r0x004c2cd4;
    }
    if (uVar2 < 7) {
      if (uVar2 == 6) {
        FUN_004c1ed0(param_1,&local_10);
        FUN_004c81b0(param_2,local_10);
        goto code_r0x004c2cd4;
      }
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 - 2 < 3) {
            uVar1 = FUN_004c06c0(param_1);
            FUN_004c57a0(param_2,uVar1);
          }
          else if (uVar2 - 2 == 3) {
            uVar3 = FUN_004c02a0(param_1);
            FUN_004c5490(param_2,uVar3);
          }
          goto code_r0x004c2cd4;
        }
        goto LAB_004c2bb6;
      }
    }
    else {
      if (uVar2 == 7) {
        FUN_004c0450(param_1,&local_18);
        FUN_004c55e0(param_2,local_18);
        goto code_r0x004c2cd4;
      }
      if (1 < uVar2 - 8) {
        if (uVar2 != 10) {
          if (uVar2 == 0xb) {
            FUN_004c2810(auStack_38);
          }
          goto code_r0x004c2cd4;
        }
        goto LAB_004c2c35;
      }
    }
  }
  else {
    if (0x11 < uVar2) {
      if (uVar2 == 0x12) {
        FUN_004c2a00(auStack_38,2);
        goto code_r0x004c2cd4;
      }
      if (uVar2 == 0x13) {
        uVar3 = FUN_004c0750(param_1);
        FUN_004c5830(param_2,uVar3);
        goto code_r0x004c2cd4;
      }
      if (uVar2 != 0x14) {
        if (uVar2 == 0x15) {
          uVar3 = FUN_004c02f0(param_1);
          FUN_004c5520(param_2,uVar3);
        }
        goto code_r0x004c2cd4;
      }
      goto LAB_004c2c35;
    }
    if (uVar2 == 0x11) {
      uVar3 = FUN_004c0400(param_1);
      FUN_004c55a0(param_2,uVar3);
      goto code_r0x004c2cd4;
    }
    if (uVar2 != 0xd) {
      if (uVar2 != 0xe) {
        if (uVar2 == 0xf) {
          uVar3 = FUN_004c0350(param_1);
          FUN_004c54e0(param_2,uVar3);
        }
        else if (uVar2 == 0x10) {
          uVar3 = FUN_004c03b0(param_1);
          FUN_004c5560(param_2,uVar3);
        }
        goto code_r0x004c2cd4;
      }
LAB_004c2bb6:
      FUN_004c28a0(auStack_38);
      goto code_r0x004c2cd4;
    }
  }
  uVar1 = FUN_004c23c0(param_1);
  FUN_004c8510(param_2,uVar1);
code_r0x004c2cd4:
  FUN_00414560(&local_18,2);
  return;
}

