/* Ghidra address: 00423a60 */
/* Ghidra symbol: FUN_00423a60 */


ulonglong FUN_00423a60(undefined8 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = *(undefined8 *)param_2;
  local_40 = *(undefined8 *)(param_2 + 2);
  cVar1 = FUN_00423b30(param_3);
  if (cVar1 == '\0') {
    if (*param_3 < *param_2) {
      local_48 = CONCAT44(local_48._4_4_,*param_3);
    }
    if (param_3[1] < param_2[1]) {
      local_48 = CONCAT44(param_3[1],(undefined4)local_48);
    }
    if (param_2[2] < param_3[2]) {
      local_40 = CONCAT44(local_40._4_4_,param_3[2]);
    }
    if (param_2[3] < param_3[3]) {
      local_40 = CONCAT44(param_3[3],(undefined4)local_40);
    }
  }
  cVar1 = FUN_00423b30(&local_48);
  if (cVar1 != '\0') {
    FUN_0040d200(&local_48,0x10,0);
  }
  *param_1 = local_48;
  param_1[1] = local_40;
  return CONCAT71((int7)((ulonglong)param_2 >> 8),cVar1 == '\0') & 0xffffffff;
}

