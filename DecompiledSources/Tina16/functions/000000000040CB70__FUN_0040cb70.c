/* Ghidra address: 0040cb70 */
/* Ghidra symbol: FUN_0040cb70 */


undefined4 FUN_0040cb70(longlong *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  int local_1c;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  sVar1 = (short)param_1[1];
  if (sVar1 == -0x284f) {
    uVar4 = 0x80000000;
    uVar7 = 3;
    param_1[5] = (longlong)FUN_0040ca40;
  }
  else if (sVar1 == -0x284e) {
    uVar4 = 0x40000000;
    uVar7 = 2;
    param_1[5] = (longlong)FUN_0040caa0;
  }
  else {
    if (sVar1 != -0x284d) {
      return 0;
    }
    uVar4 = 0xc0000000;
    uVar7 = 3;
    param_1[5] = (longlong)FUN_0040caa0;
  }
  param_1[6] = (longlong)FUN_0040ca90;
  if ((short)param_1[0xc] == 0) {
    if (param_1[3] == 0) {
      param_1[3] = (longlong)(param_1 + 0x4d);
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x80;
    }
    param_1[7] = (longlong)FUN_0040ca90;
    if ((short)param_1[1] == -0x284e) {
      if (param_1 == (longlong *)&DAT_020066a8) {
        uVar4 = 0xfffffff4;
      }
      else {
        uVar4 = 0xfffffff5;
      }
      lVar6 = thunk_FUN_0415ef6d(uVar4);
      *param_1 = lVar6;
    }
    else {
      lVar6 = thunk_FUN_0415ef6d(0xfffffff6);
      *param_1 = lVar6;
    }
    if ((short)param_1[0x5d] == 0) {
      iVar3 = thunk_FUN_03a85d0b(*param_1);
      if (iVar3 == 2) {
        if ((short)param_1[1] == -0x284e) {
          uVar2 = thunk_FUN_0411985b();
          *(undefined2 *)(param_1 + 0x5d) = uVar2;
        }
        else {
          uVar2 = thunk_FUN_0399a907();
          *(undefined2 *)(param_1 + 0x5d) = uVar2;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x5d) = DAT_02006a28;
      }
    }
  }
  else {
    param_1[7] = (longlong)FUN_0040cb10;
    lVar6 = thunk_FUN_041ac412(param_1 + 0xc,uVar4,1,0,uVar7,0x80,0);
    if (lVar6 == -1) {
      *(undefined2 *)(param_1 + 1) = 0xd7b0;
      uVar4 = thunk_FUN_03ce33a6();
      return uVar4;
    }
    *param_1 = lVar6;
    if ((short)param_1[1] == -0x284d) {
      *(undefined2 *)(param_1 + 1) = 0xd7b2;
      iVar3 = thunk_FUN_0414a8e7(*param_1,0);
      if (iVar3 == -1) {
        uVar4 = FUN_0040cb40(param_1);
        return uVar4;
      }
      iVar3 = iVar3 + -0x80;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar3 = thunk_FUN_041d1ccf(*param_1,iVar3,0,0);
      if ((iVar3 == -1) ||
         (iVar3 = thunk_FUN_0411366f(*param_1,param_1 + 0x4d,0x80,&local_1c,0), iVar3 == 0)) {
        uVar4 = FUN_0040cb40(param_1);
        return uVar4;
      }
      if (((*(ushort *)((longlong)param_1 + 10) & 1) != 0) && (local_1c != 0)) {
        iVar5 = 0;
        plVar8 = param_1 + 0x4d;
        iVar3 = local_1c;
        do {
          if ((char)*plVar8 == '\x1a') {
            iVar3 = thunk_FUN_041d1ccf(*param_1,iVar5 - local_1c,0,2);
            if ((iVar3 == -1) || (iVar3 = thunk_FUN_0417131b(*param_1), iVar3 == 0)) {
              uVar4 = FUN_0040cb40(param_1);
              return uVar4;
            }
            break;
          }
          iVar5 = iVar5 + 1;
          plVar8 = (longlong *)((longlong)plVar8 + 1);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if ((short)param_1[0x5d] == 0) {
      *(undefined2 *)(param_1 + 0x5d) = DAT_02006a28;
    }
  }
  uVar4 = 0;
  if ((short)param_1[1] != -0x284f) {
    iVar3 = thunk_FUN_03a85d0b(*param_1);
    if (iVar3 == 0) {
      FUN_0040cb40(param_1);
      uVar4 = 0x69;
    }
    else if (iVar3 == 2) {
      param_1[6] = (longlong)FUN_0040caa0;
      uVar4 = 0;
    }
  }
  return uVar4;
}

