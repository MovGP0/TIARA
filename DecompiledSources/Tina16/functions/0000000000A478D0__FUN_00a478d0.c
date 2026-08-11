/* Ghidra address: 00a478d0 */
/* Ghidra symbol: FUN_00a478d0 */


void FUN_00a478d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (**(longlong **)(param_1 + 0xc0) == 0) {
    plVar1 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar2 = FUN_00608880(*(undefined8 *)PTR_DAT_020036e8);
    (**(code **)(*plVar1 + 0x78))(plVar1,uVar2);
    (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined4 *)(param_1 + 0x54));
    (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined4 *)(param_1 + 0x50));
    uVar2 = FUN_00609e10(plVar1);
    uVar2 = FUN_005ffa40(uVar2);
    thunk_FUN_04161b78(uVar2,0,0,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                       0x42);
    if (**(char **)(param_1 + 200) == '\0') {
      plVar3 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060b9b0(plVar3,1);
      (**(code **)(*plVar3 + 0x70))(plVar3,*(undefined4 *)(param_1 + 0x54));
      (**(code **)(*plVar3 + 0x88))(plVar3,*(undefined4 *)(param_1 + 0x50));
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x20))(*(longlong **)(param_1 + 0xa0));
      if (lVar4 == 0) {
        uVar2 = FUN_00609e10(plVar3);
        uVar2 = FUN_005ffa40(uVar2);
        thunk_FUN_04161b78(uVar2,0,0,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54)
                           ,0xff0062);
      }
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    uVar2 = FUN_00a47ee0(&PTR_FUN_00a432a0,1,plVar1,plVar3,
                         *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x10),1,1);
    **(undefined8 **)(param_1 + 0xc0) = uVar2;
  }
  return;
}

