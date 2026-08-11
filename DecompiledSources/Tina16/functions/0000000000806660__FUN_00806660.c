/* Ghidra address: 00806660 */
/* Ghidra symbol: FUN_00806660 */


undefined1 FUN_00806660(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  undefined1 auStack_48 [47];
  char local_19;
  
  local_19 = '\0';
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    (**(code **)(param_1 + 0x5f0))(*(undefined8 *)(param_1 + 0x5f8),param_2,&local_19);
  }
  if (local_19 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x500);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x88) != 0)) {
      pcVar3 = (code *)FUN_00411550(lVar1,0xffee);
      cVar2 = (*pcVar3)(lVar1,param_2);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    cVar2 = FUN_008065b0(auStack_48,param_1);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

