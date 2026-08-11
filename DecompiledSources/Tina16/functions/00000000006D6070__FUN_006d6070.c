/* Ghidra address: 006d6070 */
/* Ghidra symbol: FUN_006d6070 */


ulonglong FUN_006d6070(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  
  uVar4 = 0;
  (**(code **)(*param_1 + 0xe0))(param_1,&local_54);
  local_6c = local_54;
  uStack_64 = uStack_4c;
  local_5c = param_2;
  local_58 = param_3;
  cVar1 = FUN_00423210(&local_6c,&local_5c);
  if (cVar1 != '\0') {
    local_44 = param_2;
    local_40 = param_3;
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_041b2403(uVar3,0x130d,0,&local_44);
    if (iVar2 == -1) {
      uVar4 = 4;
    }
    else {
      if ((local_3c & 1) != 0) {
        uVar4 = 4;
      }
      if ((local_3c & 6) == 6) {
        uVar4 = uVar4 | 8;
      }
      else {
        if ((local_3c & 6) != 0) {
          uVar4 = uVar4 | 8;
        }
        if ((local_3c & 2) != 0) {
          uVar4 = uVar4 | 0x20;
        }
        if ((local_3c & 4) != 0) {
          uVar4 = uVar4 | 0x80;
        }
      }
    }
  }
  return uVar4;
}

