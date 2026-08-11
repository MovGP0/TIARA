/* Ghidra address: 0055b140 */
/* Ghidra symbol: FUN_0055b140 */


void FUN_0055b140(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  longlong *plVar4;
  bool bVar5;
  
  plVar4 = param_2;
  if ((char)param_2[1] == '\0') {
    uVar1 = FUN_0055aea0(*param_2);
    if ((int)uVar1 < 0) {
      uVar1 = 8;
    }
  }
  else {
    uVar1 = 8;
  }
  if (uVar1 < 0x10) {
    bVar5 = ((int)CONCAT62((int6)((ulonglong)plVar4 >> 0x10),1) << ((byte)uVar1 & 0x1f) & 0x116U) !=
            0;
  }
  else {
    bVar5 = false;
  }
  if ((!bVar5) || (iVar2 = FUN_00535740(param_1 + 0x7c), iVar2 == 0)) {
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x78);
    iVar2 = FUN_00535770(uVar1);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + iVar2;
    return;
  }
  if (((char)param_2[1] == '\0') && ((*param_2 != 0 && (*(char *)*param_2 == '\x04')))) {
    pbVar3 = (byte *)FUN_00587f10(*param_2);
    if (*pbVar3 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)pbVar3 >> 8),1) << (*pbVar3 & 0x1f) & 7U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      if (iVar2 == 1) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0xfffffffb;
        return;
      }
      if (iVar2 == 2) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0xfffffffa;
        return;
      }
      if (iVar2 == 4) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0xfffffff9;
        return;
      }
      if (iVar2 != 8) {
        return;
      }
      *(undefined4 *)((longlong)param_2 + 0xc) = 0xfffffff8;
      return;
    }
  }
  if (iVar2 == 1) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
    return;
  }
  if (iVar2 == 2) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xfffffffe;
    return;
  }
  if (iVar2 == 4) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xfffffffd;
    return;
  }
  if (iVar2 != 8) {
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0xfffffffc;
  return;
}

