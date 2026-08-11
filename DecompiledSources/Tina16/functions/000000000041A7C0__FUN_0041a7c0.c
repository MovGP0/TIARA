/* Ghidra address: 0041a7c0 */
/* Ghidra symbol: FUN_0041a7c0 */


short * FUN_0041a7c0(undefined8 param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  short *psVar5;
  ulonglong uVar6;
  short *psVar7;
  longlong lVar8;
  undefined2 local_492;
  undefined1 auStack_490 [520];
  undefined1 local_288 [44];
  undefined1 local_25c [556];
  
  lVar3 = FUN_00406f00(L"kernel32.dll");
  if (((lVar3 == 0) ||
      (pcVar4 = (code *)thunk_FUN_041aa1c3(lVar3,"GetLongPathNameW"), pcVar4 == (code *)0x0)) ||
     (iVar1 = (*pcVar4)(param_2,&local_492,0x105), iVar1 == 0)) {
    if (*param_2 == 0x5c) {
      if (param_2[1] != 0x5c) {
        return param_2;
      }
      psVar5 = (short *)FUN_0041a790(param_1,param_2 + 2);
      if (*psVar5 == 0) {
        return param_2;
      }
      psVar5 = (short *)FUN_0041a790(param_1,psVar5 + 1);
      if (*psVar5 == 0) {
        return param_2;
      }
    }
    else {
      psVar5 = param_2 + 2;
    }
    uVar6 = ((longlong)psVar5 - (longlong)param_2) / 2;
    iVar1 = (int)uVar6 + 1;
    if (iVar1 < 0x106) {
      FUN_00419fa0(&local_492,iVar1,param_2);
      while (*psVar5 != 0) {
        psVar7 = (short *)FUN_0041a790(param_1,psVar5 + 1);
        iVar1 = (int)uVar6;
        if (0x105 < (longlong)iVar1 + 1 + ((longlong)psVar7 - (longlong)psVar5) / 2) {
          return param_2;
        }
        lVar8 = (longlong)iVar1;
        FUN_00419fa0(&local_492 + lVar8,(int)(((longlong)psVar7 - (longlong)psVar5) / 2) + 1,psVar5)
        ;
        lVar3 = thunk_FUN_041460a9(&local_492,local_288);
        if (lVar3 == -1) {
          return param_2;
        }
        thunk_FUN_03b19720(lVar3);
        iVar2 = thunk_FUN_039d80d3(local_25c);
        if (0x105 < iVar1 + iVar2 + 2) {
          return param_2;
        }
        (&local_492)[lVar8] = 0x5c;
        FUN_00419fa0(auStack_490 + lVar8 * 2,0x104 - iVar1,local_25c);
        iVar2 = thunk_FUN_039d80d3(local_25c);
        uVar6 = (ulonglong)(iVar1 + iVar2 + 1);
        psVar5 = psVar7;
      }
      FUN_00419fa0(param_2,param_3,&local_492);
    }
  }
  else {
    FUN_00419fa0(param_2,param_3,&local_492);
  }
  return param_2;
}

