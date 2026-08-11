/* Ghidra address: 007fb150 */
/* Ghidra symbol: FUN_007fb150 */


void FUN_007fb150(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(char *)(param_1 + 0x4a8) == '\0') {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x4a8) = 1;
      cVar1 = FUN_007fa170(*(undefined8 *)(param_1 + 0x4b0));
      if (cVar1 == '\0') {
        cVar1 = FUN_007fa170(*(undefined8 *)(param_1 + 0x498));
        if (cVar1 == '\0') {
          FUN_007faa30(*(undefined8 *)(param_1 + 0x4b0),0,0);
          FUN_007faa30(*(undefined8 *)(param_1 + 0x498),1,0);
        }
        else {
          FUN_007faa30(*(undefined8 *)(param_1 + 0x4b0),0,1);
          FUN_007faa30(*(undefined8 *)(param_1 + 0x498),1,0);
        }
      }
      else {
        FUN_007faa30(*(undefined8 *)(param_1 + 0x498),0,1);
        FUN_007faa30(*(undefined8 *)(param_1 + 0x4b0),1,0);
      }
      *(undefined1 *)(param_1 + 0x4a8) = 0;
      plVar2 = (longlong *)FUN_00781840();
      uVar3 = (**(code **)(*plVar2 + 600))(plVar2);
      if ((uVar3 & 1) != 0) {
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar4,0x85,0,0);
      }
    }
  }
  return;
}

