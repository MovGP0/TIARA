/* Ghidra address: 00d98a60 */
/* Ghidra symbol: FUN_00d98a60 */


longlong FUN_00d98a60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong local_20;
  
  lVar2 = FUN_00d8f010(&PTR_FUN_00d4dd08,1);
  cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x180) + 0x50))
                    (*(longlong **)(lVar2 + 0x180),param_2);
  local_20 = lVar2;
  if (cVar1 == '\0') {
    local_20 = 0;
    FUN_00410f20(lVar2);
  }
  return local_20;
}

