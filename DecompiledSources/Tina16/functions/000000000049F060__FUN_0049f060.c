/* Ghidra address: 0049f060 */
/* Ghidra symbol: FUN_0049f060 */


void FUN_0049f060(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_50 = auStack_78;
  local_40 = (code *)*param_2;
  local_38 = param_2[1];
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar2 = FUN_004e6a70(*(longlong *)(param_1 + 8));
    local_30 = (longlong *)FUN_004e7090(uVar2);
    while( true ) {
      cVar1 = thunk_FUN_004e7203(local_30);
      if (cVar1 == '\0') break;
      local_48 = FUN_004e70e0(local_30);
      (*local_40)(local_38,local_48);
    }
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + -0x20))(local_30,1);
    }
  }
  return;
}

