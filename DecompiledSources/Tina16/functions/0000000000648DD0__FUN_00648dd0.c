/* Ghidra address: 00648dd0 */
/* Ghidra symbol: FUN_00648dd0 */


longlong FUN_00648dd0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_2c [3];
  
  lVar5 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x10) == 1) {
      plVar2 = (longlong *)FUN_004aeac0(param_1,0);
      lVar5 = *plVar2;
    }
    else {
      uVar3 = thunk_FUN_0417695f();
      lVar4 = thunk_FUN_03e54ad7(uVar3);
      while ((lVar5 == 0 && (lVar4 != 0))) {
        cVar1 = FUN_00648c40(param_1,lVar4,local_2c);
        if (cVar1 == '\0') {
          lVar4 = thunk_FUN_03f32902(lVar4,2);
        }
        else {
          lVar5 = **(longlong **)(*(longlong *)(param_1 + 8) + (longlong)local_2c[0] * 8);
        }
      }
    }
  }
  return lVar5;
}

