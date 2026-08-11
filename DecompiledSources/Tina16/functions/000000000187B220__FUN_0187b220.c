/* Ghidra address: 0187b220 */
/* Ghidra symbol: FUN_0187b220 */


longlong FUN_0187b220(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_20;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  uVar2 = FUN_0041b800(&local_10);
  cVar1 = FUN_00452370(param_2,&DAT_0187b2d8,uVar2);
  if (cVar1 == '\0') {
    for (local_20 = *(longlong *)(param_2 + 0xf0); local_20 != 0;
        local_20 = *(longlong *)(local_20 + 0xf0)) {
      cVar1 = FUN_004113d0(local_20,&PTR_FUN_0192c3a0);
      if (cVar1 != '\0') break;
    }
  }
  else {
    local_20 = (**(code **)(*local_10 + 0x18))(local_10);
  }
  FUN_0041b800(&local_10);
  return local_20;
}

