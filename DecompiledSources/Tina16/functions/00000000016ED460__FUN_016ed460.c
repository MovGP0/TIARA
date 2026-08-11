/* Ghidra address: 016ed460 */
/* Ghidra symbol: FUN_016ed460 */


void FUN_016ed460(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,longlong param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00c43f10(0x47d2ced32a16a1b1,&local_res18);
  FUN_00c43ea0(0x49e5e531a0a1c873,&local_res20);
  FUN_00c43f10(0x47d2ced32a16a1b1,&param_5);
  if (param_6 == 0) {
    if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
      FUN_01b04d70(0x215,&LAB_016ed5bc,0);
    }
    else {
      pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8);
      if ((byte)PTR_DAT_020036b8[(ulonglong)*pbVar1 * 6 + 1] < 3) {
        FUN_01b04d70(0x214,&LAB_016ed5bc,0);
      }
      else {
        puVar2 = *(undefined8 **)(pbVar1 + 0x18);
        *puVar2 = local_res18;
        puVar2[1] = local_res20;
        puVar2[2] = param_5;
      }
    }
  }
  else {
    pbVar1 = *(byte **)(*(longlong *)(param_6 + 0x40) + -8 + (ulonglong)param_2 * 8);
    if ((byte)PTR_DAT_020036b8[(ulonglong)*pbVar1 * 6 + 1] < 3) {
      FUN_01b04d70(0x214,&LAB_016ed5bc,0);
    }
    else {
      puVar2 = *(undefined8 **)(pbVar1 + 0x18);
      *puVar2 = local_res18;
      puVar2[1] = local_res20;
      puVar2[2] = param_5;
    }
  }
  return;
}

