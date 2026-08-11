/* Ghidra address: 00461960 */
/* Ghidra symbol: FUN_00461960 */


void FUN_00461960(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = *param_2 & 0xbfff;
  if (uVar1 < 0xc) {
    if (uVar1 == 0xb) {
      FUN_00468820(param_1,**(short **)(param_2 + 4) != 0);
      goto code_r0x00461c37;
    }
    if (uVar1 < 7) {
      if (uVar1 == 6) {
        FUN_004688e0(param_1,**(undefined8 **)(param_2 + 4));
        goto code_r0x00461c37;
      }
      if (uVar1 == 2) {
        FUN_00468530(param_1,(longlong)**(short **)(param_2 + 4),0xfffffffffffffffe);
        goto code_r0x00461c37;
      }
      if (uVar1 == 3) {
        FUN_00468530(param_1,**(undefined4 **)(param_2 + 4),0xfffffffffffffffc);
        goto code_r0x00461c37;
      }
      if (uVar1 == 4) {
        FUN_00468860(param_1,(double)**(float **)(param_2 + 4));
        goto code_r0x00461c37;
      }
      if (uVar1 == 5) {
        FUN_00468860(param_1,**(undefined8 **)(param_2 + 4));
        goto code_r0x00461c37;
      }
    }
    else {
      if (uVar1 == 7) {
        FUN_00468860(param_1,**(undefined8 **)(param_2 + 4));
        goto code_r0x00461c37;
      }
      if (uVar1 == 8) {
        FUN_004618e0(&local_10,param_2);
        FUN_004689d0(param_1,local_10);
        goto code_r0x00461c37;
      }
      if (uVar1 == 9) goto LAB_00461bfd;
    }
  }
  else if (uVar1 < 0x13) {
    if (uVar1 == 0x12) {
      FUN_00468530(param_1,**(undefined2 **)(param_2 + 4),2);
      goto code_r0x00461c37;
    }
    if (uVar1 == 0xc) {
      FUN_00461c70(param_1,*(undefined8 *)(param_2 + 4));
      goto code_r0x00461c37;
    }
    if (uVar1 == 0xd) {
LAB_00461bfd:
      FUN_004618a0(param_1,param_2);
      goto code_r0x00461c37;
    }
    if (uVar1 == 0x10) {
      FUN_00468530(param_1,(longlong)**(char **)(param_2 + 4),0xffffffffffffffff);
      goto code_r0x00461c37;
    }
    if (uVar1 == 0x11) {
      FUN_00468530(param_1,**(undefined1 **)(param_2 + 4),1);
      goto code_r0x00461c37;
    }
  }
  else {
    if (uVar1 == 0x13) {
      FUN_00468530(param_1,**(undefined4 **)(param_2 + 4),4);
      goto code_r0x00461c37;
    }
    if (uVar1 == 0x14) {
      FUN_00468700(param_1,**(undefined8 **)(param_2 + 4));
      goto code_r0x00461c37;
    }
    if (uVar1 == 0x15) {
      FUN_00468670(param_1,**(undefined8 **)(param_2 + 4));
      goto code_r0x00461c37;
    }
  }
  if ((*param_2 & 0x2000) == 0) {
    FUN_00461910(param_1,param_2);
  }
  else {
    FUN_00461520(param_1,param_2,FUN_00461900);
  }
code_r0x00461c37:
  FUN_00414520(&local_10);
  return;
}

