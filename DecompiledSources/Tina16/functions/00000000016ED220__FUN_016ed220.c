/* Ghidra address: 016ed220 */
/* Ghidra symbol: FUN_016ed220 */


void FUN_016ed220(longlong param_1,byte param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00c43f10(0x47d2ced32a16a1b1,local_res18);
  if (param_4 == 0) {
    if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
      FUN_01b04d70(0x215,&LAB_016ed314,0);
    }
    else {
      pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8);
      if (PTR_DAT_020036b8[(ulonglong)*pbVar1 * 6 + 1] == '\0') {
        FUN_01b04d70(0x214,&LAB_016ed314,0);
      }
      else {
        **(undefined8 **)(pbVar1 + 0x18) = local_res18[0];
      }
    }
  }
  else {
    pbVar1 = *(byte **)(*(longlong *)(param_4 + 0x40) + -8 + (ulonglong)param_2 * 8);
    if (PTR_DAT_020036b8[(ulonglong)*pbVar1 * 6 + 1] == '\0') {
      FUN_01b04d70(0x214,&LAB_016ed314,0);
    }
    else {
      **(undefined8 **)(pbVar1 + 0x18) = local_res18[0];
    }
  }
  return;
}

