/* Ghidra address: 010e8310 */
/* Ghidra symbol: FUN_010e8310 */


undefined1
FUN_010e8310(longlong param_1,char param_2,undefined1 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_121;
  undefined1 local_120 [256];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_2 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xf8);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xf0);
  }
  if (lVar2 == 0) {
    local_121 = 0;
    *param_3 = 0;
    *param_6 = 0;
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    if (*(longlong *)(lVar2 + 0x58) == 0) {
      *param_3 = 0;
    }
    else {
      uVar1 = FUN_01abdb20(*(longlong *)(lVar2 + 0x58));
      FUN_01cc0ae0(uVar1,local_20);
      FUN_00416910(local_120,local_20[0],0xff);
      FUN_00415020(param_3,local_120,0x50);
    }
    *param_6 = *(undefined8 *)(lVar2 + 0x70);
    *param_4 = *(undefined8 *)(lVar2 + 0x78);
    *param_5 = *(undefined8 *)(lVar2 + 0x80);
    local_121 = 1;
  }
  FUN_00414480(local_20);
  return local_121;
}

