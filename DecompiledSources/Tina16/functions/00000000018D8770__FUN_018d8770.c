/* Ghidra address: 018d8770 */
/* Ghidra symbol: FUN_018d8770 */


void FUN_018d8770(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,double param_8,double param_9,undefined8 param_10,undefined8 param_11)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_00414650(&param_10);
  FUN_00414630(param_11);
  cVar1 = FUN_005fcf90(*(undefined8 *)(param_2 + 0x70));
  if ((cVar1 == '\x01') || (*(char *)(param_1 + 0xac) != '\0')) {
    iVar2 = FUN_0044f060();
    if (iVar2 == 2) {
      if (*(char *)(param_1 + 0xaa) == '\0') {
        uVar4 = FUN_005ffa40(param_2);
        iVar2 = FUN_0040c770((double)param_5 * param_9);
        iVar3 = FUN_0040c770((double)param_5 * param_8);
        lVar5 = FUN_00415f70(param_10);
        thunk_FUN_03e58493(uVar4,param_3 + iVar2,param_4 + iVar3,*(undefined4 *)(param_1 + 0x48),
                           param_1 + 0x80,lVar5 + (longlong)param_7 * 2,param_6 - param_7,0);
      }
      else {
        uVar4 = FUN_005ffa40(param_2);
        iVar2 = FUN_0040c770((double)param_5 * param_9);
        iVar3 = FUN_0040c770((double)param_5 * param_8);
        lVar5 = FUN_00415f70(param_10);
        lVar6 = (longlong)param_7;
        thunk_FUN_03e58493(uVar4,param_3 + iVar2,param_4 + iVar3,*(undefined4 *)(param_1 + 0x48),
                           param_1 + 0x80,lVar5 + lVar6 * 2,param_6 - param_7,
                           *(longlong *)(param_1 + 0x20) + lVar6 * 4);
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          FUN_01852c50(*(longlong *)(param_1 + 0xb0),param_3 + iVar2,param_4 + iVar3,
                       *(undefined4 *)(param_1 + 0x48),param_1 + 0x80,lVar5 + lVar6 * 2,
                       param_6 - param_7,*(longlong *)(param_1 + 0x20) + lVar6 * 4);
        }
      }
      goto code_r0x018d8b7a;
    }
  }
  if (*(char *)(param_1 + 0xaa) == '\0') {
    uVar4 = FUN_005ffa40(param_2);
    iVar2 = FUN_0040c770((double)param_5 * param_9);
    iVar3 = FUN_0040c770((double)param_5 * param_8);
    lVar5 = FUN_00415ab0(param_11);
    thunk_FUN_041e601f(uVar4,param_3 + iVar2,param_4 + iVar3,*(undefined4 *)(param_1 + 0x48),
                       param_1 + 0x80,lVar5 + param_7,param_6 - param_7,0);
  }
  else {
    uVar4 = FUN_005ffa40(param_2);
    iVar2 = FUN_0040c770((double)param_5 * param_9);
    iVar3 = FUN_0040c770((double)param_5 * param_8);
    lVar5 = FUN_00415ab0(param_11);
    lVar6 = (longlong)param_7;
    thunk_FUN_041e601f(uVar4,param_3 + iVar2,param_4 + iVar3,*(undefined4 *)(param_1 + 0x48),
                       param_1 + 0x80,lVar5 + lVar6,param_6 - param_7,
                       *(longlong *)(param_1 + 0x20) + lVar6 * 4);
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_01852be0(*(longlong *)(param_1 + 0xb0),param_3 + iVar2,param_4 + iVar3,
                   *(undefined4 *)(param_1 + 0x48),param_1 + 0x80,lVar5 + lVar6,param_6 - param_7,
                   *(longlong *)(param_1 + 0x20) + lVar6 * 4);
    }
  }
code_r0x018d8b7a:
  FUN_00414520(&param_10);
  FUN_004144d0(&param_11);
  return;
}

