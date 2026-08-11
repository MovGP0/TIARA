/* Ghidra address: 00693b00 */
/* Ghidra symbol: FUN_00693b00 */


longlong FUN_00693b00(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_68 [4];
  int local_64;
  int local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  FUN_00693850(param_1,param_2);
  FUN_006939a0(param_1,local_68);
  *(int *)(param_2 + 4) = local_5c;
  FUN_00693910(param_1,local_68);
  *(int *)(param_2 + 0xc) = local_64;
  iVar2 = local_64 - *(int *)(param_2 + 4);
  iVar3 = thunk_FUN_041b2403(param_1[0xd],0x18e,0,0);
  iVar4 = thunk_FUN_041b2403(param_1[0xd],0x18b,0,0);
  if (iVar4 * iVar2 != 0) {
    iVar5 = FUN_0040c770(((double)iVar3 / (double)iVar4) * (double)iVar2);
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + iVar5;
    local_74 = 1;
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_00693810(param_1,local_48);
    iVar6 = FUN_004230c0(local_48);
    iVar7 = thunk_FUN_041b2403(param_1[0xd],0x1a1,0,0);
    local_78 = 0;
    iVar5 = iVar4;
    if (-1 < iVar4 + -1) {
      do {
        local_74 = local_74 + iVar7;
        if ((iVar6 < local_74) && ((int)param_1[0xb] == 0)) {
          *(int *)(param_1 + 0xb) = iVar4 - local_78;
        }
        local_78 = local_78 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_70 = 0;
    local_78 = iVar3;
    if (iVar3 <= iVar4 + -1) {
      iVar5 = ((iVar4 + -1) - iVar3) + 1;
      do {
        local_70 = local_70 + iVar7;
        cVar1 = FUN_006927d0(param_1);
        if (cVar1 == '\x01') {
          iVar6 = 4;
        }
        else {
          iVar6 = 2;
        }
        FUN_00693810(param_1,local_58);
        iVar8 = FUN_004230c0(local_58);
        if (iVar8 - iVar6 <= local_70) break;
        local_78 = local_78 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = FUN_0040c770(((double)local_70 / (double)local_74) * (double)iVar2);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 4) + iVar5;
    iVar5 = (**(code **)(*param_1 + 0x48))(param_1,10);
    iVar6 = iVar5 / 2;
    iVar5 = FUN_004230c0(param_2,(longlong)iVar5 % 2 & 0xffffffff);
    if (iVar5 < iVar6) {
      iVar5 = FUN_004230c0(param_2);
      FUN_006939a0(param_1,local_68);
      iVar2 = FUN_0040c770(((double)iVar3 / (double)iVar4) *
                           (double)((iVar2 - (iVar6 - iVar5)) + -1));
      *(int *)(param_2 + 4) = local_5c + iVar2;
      *(int *)(param_2 + 0xc) = local_5c + iVar2 + iVar6;
    }
    if ((local_78 == iVar4 + -1) &&
       (FUN_00693910(param_1,local_68), *(int *)(param_2 + 0xc) != local_64)) {
      iVar2 = FUN_004230c0(param_2);
      FUN_00693910(param_1,local_68);
      *(int *)(param_2 + 0xc) = local_64;
      *(int *)(param_2 + 4) = local_64 - iVar2;
    }
    uVar9 = FUN_004230c0(param_2);
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar9;
  }
  return param_2;
}

