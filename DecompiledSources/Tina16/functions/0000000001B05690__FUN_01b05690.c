/* Ghidra address: 01b05690 */
/* Ghidra symbol: FUN_01b05690 */


int FUN_01b05690(longlong param_1,byte param_2,byte param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar2 = 0;
  if (((param_2 == 0) || (lVar2 = 0, *(byte *)(param_1 + 4) < param_2)) ||
     (lVar2 = *(longlong *)(param_1 + 0x40), *(longlong *)(lVar2 + -8 + (ulonglong)param_2 * 8) == 0
     )) {
    FUN_01b04d70(CONCAT62((int6)((ulonglong)lVar2 >> 0x10),0x215),&LAB_01b057b4,0);
  }
  else {
    pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8);
    if (param_3 != 0) {
      if (param_3 <= (byte)(&DAT_02110ace)[(ulonglong)*pbVar1 * 6]) {
        local_24 = *(int *)(param_1 + 0x7c) +
                   (uint)*(byte *)(*(longlong *)(pbVar1 + 0x28) + -1 + (ulonglong)param_3);
        goto code_r0x01b0577c;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x288))
              (*(longlong **)(param_1 + 0x128),local_20);
    FUN_01b04d70(0x217,&LAB_01b057b4,local_20[0]);
  }
code_r0x01b0577c:
  FUN_00414480(local_20);
  return local_24;
}

