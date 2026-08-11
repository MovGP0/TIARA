/* Ghidra address: 00b33080 */
/* Ghidra symbol: FUN_00b33080 */


void FUN_00b33080(longlong param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_30;
  undefined1 local_25;
  int local_24;
  longlong local_20;
  
  local_30 = 0;
  local_25 = 0;
  local_24 = 1;
  FUN_004144d0();
  do {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
    }
    if (iVar2 < local_24) goto LAB_00b334b2;
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x10) + -1 + (longlong)local_24);
    local_20 = FUN_00418560(0x17,&DAT_00b30138);
    *(byte *)(local_20 + 1) = bVar1;
    *(undefined1 *)(local_20 + 0x16) = 0;
    uVar3 = (ulonglong)bVar1;
    if (uVar3 < 0x3c) {
      if (uVar3 == 0x3b) {
LAB_00b333d9:
        FUN_00b32320();
      }
      else {
        if (0x21 < uVar3) {
          if (uVar3 < 0x2a) {
            if (uVar3 == 0x29) {
              FUN_00b33000();
              goto LAB_00b3342f;
            }
            if (uVar3 == 0x22) goto LAB_00b33380;
            if (uVar3 == 0x23) goto LAB_00b333e3;
            if (uVar3 == 0x24) goto LAB_00b333a7;
            if (uVar3 == 0x25) goto LAB_00b333bb;
          }
          else {
            if (uVar3 == 0x2c) goto LAB_00b333b1;
            if (uVar3 == 0x2d) goto LAB_00b333c5;
            if (uVar3 == 0x39) goto LAB_00b333ed;
            if (uVar3 == 0x3a) goto LAB_00b333cf;
          }
LAB_00b3341f:
          *(undefined4 *)(param_1 + 8) = 0xffffffff;
          goto LAB_00b334b2;
        }
        if (uVar3 == 0x21) goto LAB_00b3338d;
        if (uVar3 < 0x18) {
          if (uVar3 == 0x17) {
            FUN_00b32dd0();
          }
          else {
            if (uVar3 < 0x12) {
              if (((uVar3 != 0x11) && (3 < uVar3 - 3)) && (6 < uVar3 - 8)) goto LAB_00b3341f;
            }
            else if (uVar3 != 0x15) {
              if (uVar3 != 0x16) goto LAB_00b3341f;
              FUN_00b33040();
              goto LAB_00b3342f;
            }
            FUN_00b31290();
          }
        }
        else if (uVar3 == 0x19) {
          FUN_00b32f50();
        }
        else if (uVar3 == 0x1d) {
          FUN_00b32c00();
        }
        else if (uVar3 == 0x1e) {
          FUN_00b32b30();
        }
        else {
          if (uVar3 != 0x1f) goto LAB_00b3341f;
          FUN_00b32cc0();
        }
      }
    }
    else if (uVar3 < 0x62) {
      if (uVar3 != 0x61) {
        if (uVar3 < 0x4d) {
          if (uVar3 == 0x4c) goto LAB_00b333b1;
          if (uVar3 < 0x44) {
            if (uVar3 == 0x43) goto LAB_00b333e3;
            if (uVar3 == 0x41) goto LAB_00b3338d;
            if (uVar3 == 0x42) goto LAB_00b33380;
          }
          else {
            if (uVar3 == 0x44) {
LAB_00b333a7:
              FUN_00b317f0();
              goto LAB_00b3342f;
            }
            if (uVar3 == 0x45) {
LAB_00b333bb:
              FUN_00b31a80();
              goto LAB_00b3342f;
            }
          }
        }
        else {
          if (uVar3 == 0x4d) goto LAB_00b333c5;
          if (uVar3 == 0x59) goto LAB_00b333ed;
          if (uVar3 == 0x5a) goto LAB_00b333cf;
          if (uVar3 == 0x5b) goto LAB_00b333d9;
        }
        goto LAB_00b3341f;
      }
LAB_00b3338d:
      FUN_00b316c0();
    }
    else if (uVar3 < 0x6d) {
      if (uVar3 == 0x6c) {
LAB_00b333b1:
        FUN_00b31a50();
      }
      else if (uVar3 == 0x62) {
LAB_00b33380:
        FUN_00b31570();
      }
      else {
        if (uVar3 != 99) {
          if (uVar3 == 100) goto LAB_00b333a7;
          if (uVar3 == 0x65) goto LAB_00b333bb;
          goto LAB_00b3341f;
        }
LAB_00b333e3:
        FUN_00b328a0();
      }
    }
    else if (uVar3 == 0x6d) {
LAB_00b333c5:
      FUN_00b31f90();
    }
    else if (uVar3 == 0x79) {
LAB_00b333ed:
      FUN_00b329d0();
    }
    else {
      if (uVar3 != 0x7a) {
        if (uVar3 == 0x7b) goto LAB_00b333d9;
        goto LAB_00b3341f;
      }
LAB_00b333cf:
      FUN_00b31fc0();
    }
LAB_00b3342f:
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00418590(local_20,&DAT_00b30138);
LAB_00b334b2:
      FUN_004144d0(&local_30);
      return;
    }
    iVar2 = 0;
    if (*(longlong *)(local_20 + 2) != 0) {
      iVar2 = *(int *)(*(longlong *)(local_20 + 2) + -4);
    }
    local_24 = local_24 + iVar2 + 1;
    if (*(char *)(local_20 + 0x16) == '\0') {
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),local_20);
    }
    else {
      FUN_00418590(local_20,&DAT_00b30138);
    }
  } while( true );
}

