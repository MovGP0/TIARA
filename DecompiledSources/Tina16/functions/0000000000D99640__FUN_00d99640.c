/* Ghidra address: 00d99640 */
/* Ghidra symbol: FUN_00d99640 */


void FUN_00d99640(void)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_30 [8];
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)FUN_00da0ec0(DAT_0201a188);
  while( true ) {
    cVar1 = thunk_FUN_00da1773(local_20);
    if (cVar1 == '\0') break;
    FUN_00da1620(local_20,local_30);
    FUN_00410f20(local_28);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00da0a50(DAT_0201a188);
  return;
}

