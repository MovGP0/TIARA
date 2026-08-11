/* Ghidra address: 01503950 */
/* Ghidra symbol: FUN_01503950 */


void FUN_01503950(longlong param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  *param_2 = '\x01';
  if (*(int *)(param_1 + 0x98) == 0) {
    if (*(char *)(param_1 + 0x78) == '\0') {
      FUN_0153bdb0(param_1 + 0x90);
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0x50) + 0x108 + (longlong)*(int *)(param_1 + 0x18) * 8);
      if (lVar1 != 0) {
        uVar3 = FUN_0065b870(lVar1);
        thunk_FUN_041b2403(uVar3,0x534,0,param_1 + 0x10);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      cVar2 = FUN_0153bd90();
      *param_2 = cVar2;
      if (*param_2 != '\0') {
        if (*(longlong *)PTR_DAT_02001440 != 0) {
          FUN_01cc6020(*(undefined8 *)PTR_DAT_02001440);
          *(undefined8 *)PTR_DAT_020027c0 = *(undefined8 *)PTR_DAT_02001440;
        }
        lVar1 = *(longlong *)
                 (*(longlong *)(param_1 + 0x50) + 0x108 + (longlong)*(int *)(param_1 + 0x18) * 8);
        if (lVar1 != 0) {
          uVar3 = FUN_0065b870(lVar1);
          thunk_FUN_041b2403(uVar3,0x536,0,param_1 + 0x10);
        }
      }
    }
  }
  else if ((*param_2 != '\0') &&
          (*(longlong *)
            (*(longlong *)(param_1 + 0x50) + 0x108 + (longlong)*(int *)(param_1 + 0x18) * 8) != 0))
  {
    uVar3 = FUN_0065b870(*(undefined8 *)
                          (*(longlong *)(param_1 + 0x50) + 0x108 +
                          (longlong)*(int *)(param_1 + 0x18) * 8));
    thunk_FUN_041b2403(uVar3,0x536,0,param_1 + 0x10);
  }
  return;
}

