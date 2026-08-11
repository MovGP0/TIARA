/* Ghidra address: 004239d0 */
/* Ghidra symbol: FUN_004239d0 */


ulonglong FUN_004239d0(undefined8 *param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 unaff_R13;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *(undefined8 *)param_2;
  local_30 = *(undefined8 *)(param_2 + 2);
  if (*param_2 < *param_3) {
    uVar1 = (ulonglong)local_38 >> 0x20;
    local_38 = CONCAT44((int)uVar1,*param_3);
  }
  if (param_2[1] < param_3[1]) {
    local_38 = CONCAT44(param_3[1],(undefined4)local_38);
  }
  if (param_3[2] < param_2[2]) {
    uVar1 = (ulonglong)local_30 >> 0x20;
    local_30 = CONCAT44((int)uVar1,param_3[2]);
  }
  if (param_3[3] < param_2[3]) {
    local_30 = CONCAT44(param_3[3],(undefined4)local_30);
  }
  cVar2 = FUN_00423b30(&local_38);
  if (cVar2 != '\0') {
    FUN_0040d200(&local_38,0x10,0);
  }
  *param_1 = local_38;
  param_1[1] = local_30;
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),cVar2 == '\0') & 0xffffffff;
}

