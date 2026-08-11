/* Ghidra address: 01976f30 */
/* Ghidra symbol: FUN_01976f30 */


longlong FUN_01976f30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = param_1;
  local_18 = FUN_019537d0(param_1,param_2);
  if (local_18 == 0) {
    cVar1 = FUN_01950810(local_20);
    if ((cVar1 != '\0') && (*(char *)(*(longlong *)(local_20 + 0x1a8) + 0x31) == '\0')) {
      iVar2 = FUN_004b2060(*(undefined8 *)(local_20 + 0x198));
      if (0 < iVar2) {
        FUN_01976ec0(auStack_48,&local_10);
        local_18 = FUN_01953bb0(local_20,0,local_10);
      }
    }
  }
  FUN_00414480(&local_10);
  return local_18;
}

