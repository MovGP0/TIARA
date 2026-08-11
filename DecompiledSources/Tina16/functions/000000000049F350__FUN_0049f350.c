/* Ghidra address: 0049f350 */
/* Ghidra symbol: FUN_0049f350 */


void FUN_0049f350(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 *local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  FUN_00417580(&local_38,&DAT_004990d8);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_20 = (longlong *)FUN_004e6aa0(*(longlong *)(param_1 + 8));
    do {
      cVar1 = thunk_FUN_004e7393(local_20);
      if (cVar1 == '\0') goto code_r0x0049f3cb;
      FUN_004e7230(local_20,&local_38);
    } while (local_30 != param_2);
    FUN_004e6590(*(undefined8 *)(param_1 + 8),local_38);
code_r0x0049f3cb:
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    while (cVar1 = FUN_004e6930(*(undefined8 *)(param_1 + 0x10),param_2), cVar1 != '\0') {
      local_28 = (longlong *)FUN_004e6aa0(*(undefined8 *)(param_1 + 0x10));
      do {
        cVar1 = thunk_FUN_004e7393(local_28);
        if (cVar1 == '\0') goto code_r0x0049f43c;
        FUN_004e7230(local_28,&local_38);
      } while (local_30 != param_2);
      FUN_004e6590(*(undefined8 *)(param_1 + 0x10),local_38);
code_r0x0049f43c:
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + -0x20))(local_28,1);
      }
    }
  }
  FUN_00417740(&local_38,&DAT_004990d8);
  return;
}

