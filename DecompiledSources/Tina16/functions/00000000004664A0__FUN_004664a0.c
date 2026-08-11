/* Ghidra address: 004664a0 */
/* Ghidra symbol: FUN_004664a0 */


void FUN_004664a0(longlong param_1,undefined8 param_2,ushort *param_3)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *param_3 & 0xbfff;
  if (uVar2 < 0xd) {
    if (uVar2 == 0xc) {
      FUN_00466730(param_2,*(undefined8 *)(param_3 + 4),0);
      return;
    }
    if (uVar2 < 7) {
      if (uVar2 == 6) {
        FUN_00466220(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
      if (uVar2 == 2) {
        FUN_00465fb0(param_1,param_2,(longlong)**(short **)(param_3 + 4));
        return;
      }
      if (uVar2 == 3) {
        FUN_00465fb0(param_1,param_2,**(undefined4 **)(param_3 + 4));
        return;
      }
      if (uVar2 == 4) {
        FUN_00466170(param_1,param_2,(double)**(float **)(param_3 + 4));
        return;
      }
      if (uVar2 == 5) {
        FUN_00466170(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
    }
    else {
      if (uVar2 == 7) {
        FUN_00466290(param_1,param_2,**(undefined8 **)(param_3 + 4));
        return;
      }
      if (uVar2 == 8) {
        lVar1 = **(longlong **)(param_3 + 4);
        uVar3 = 0;
        if (lVar1 != 0) {
          uVar3 = *(uint *)(lVar1 + -4) >> 1;
        }
        FUN_004173c0(param_2,lVar1,uVar3,*(undefined2 *)(param_1 + 0x60));
        return;
      }
      if (uVar2 == 0xb) {
        FUN_00415dd0(param_2,*(undefined8 *)
                              (&DAT_02010988 +
                              (ulonglong)DAT_01dc4379 * 8 +
                              (ulonglong)(**(short **)(param_3 + 4) != 0) * 0x18),0);
        return;
      }
    }
  }
  else if (uVar2 < 0x15) {
    if (uVar2 == 0x14) {
      FUN_00466090(param_1,param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
    if (uVar2 == 0x10) {
      FUN_00465fb0(param_1,param_2,(longlong)**(char **)(param_3 + 4));
      return;
    }
    if (uVar2 == 0x11) {
      FUN_00466020(param_1,param_2,**(undefined1 **)(param_3 + 4));
      return;
    }
    if (uVar2 == 0x12) {
      FUN_00466020(param_1,param_2,**(undefined2 **)(param_3 + 4));
      return;
    }
    if (uVar2 == 0x13) {
      FUN_00466020(param_1,param_2,**(undefined4 **)(param_3 + 4));
      return;
    }
  }
  else {
    if (uVar2 == 0x15) {
      FUN_00466100(param_1,param_2,**(undefined8 **)(param_3 + 4));
      return;
    }
    if (uVar2 == 0x100) {
      FUN_00415430(param_2,**(undefined8 **)(param_3 + 4),0);
      return;
    }
    if (uVar2 == 0x102) {
      FUN_00415460(param_2,**(undefined8 **)(param_3 + 4),0);
      return;
    }
  }
  FUN_00466300(param_1,param_2);
  return;
}

