/* Ghidra address: 00462cd0 */
/* Ghidra symbol: FUN_00462cd0 */


undefined1 FUN_00462cd0(short *param_1)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  sVar1 = *param_1;
  if (sVar1 == 0) {
    local_9 = 0;
  }
  else if (sVar1 == 1) {
    if (DAT_01dc436a != '\0') {
      FUN_00460110(1,0x10);
    }
    local_9 = 0;
  }
  else if (sVar1 == 0xb) {
    local_9 = (undefined1)param_1[4];
  }
  else if (sVar1 == 0x10) {
    local_9 = (undefined1)param_1[4];
  }
  else {
    local_20 = auStack_48;
    iVar2 = FUN_00462650(param_1);
    if (0xff < iVar2 + 0x80U) {
      iVar2 = FUN_00410a90();
    }
    local_9 = (undefined1)iVar2;
  }
  return local_9;
}

