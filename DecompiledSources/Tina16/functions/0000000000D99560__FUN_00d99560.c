/* Ghidra address: 00d99560 */
/* Ghidra symbol: FUN_00d99560 */


void FUN_00d99560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)FUN_00da0ec0(DAT_0201a188);
  do {
    cVar1 = thunk_FUN_00da1773(local_20);
    if (cVar1 == '\0') {
      if (local_20 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_20 + -0x20))(local_20,1);
      return;
    }
    FUN_00da1620(local_20,&local_30);
    cVar1 = FUN_004113d0(local_30,param_2);
  } while ((cVar1 == '\0') || (cVar1 = FUN_004113d0(local_28,param_3), cVar1 == '\0'));
  uVar2 = FUN_007810f0();
  FUN_00782920(&DAT_0075cd78,uVar2);
  FUN_00d99610(0,local_40);
  return;
}

