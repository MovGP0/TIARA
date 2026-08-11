/* Ghidra address: 00c1b640 */
/* Ghidra symbol: FUN_00c1b640 */


longlong FUN_00c1b640(longlong param_1,char param_2,undefined8 param_3,byte param_4,int param_5,
                     int param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar2 = FUN_00c1b460(local_res8,0,param_3,param_4);
  if (param_4 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_4 & 0x1f) & 0x48U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    FUN_0041ddd0(&local_28,PTR_PTR_02002738);
    FUN_00c1a320(local_28);
  }
  if ((param_5 == 0) || (param_6 == 0)) {
    FUN_0041ddd0(&local_30,PTR_PTR_02004c88);
    FUN_00c1a320(local_30);
  }
  *(int *)(local_res8 + 0x38) = param_6;
  *(int *)(local_res8 + 0x3c) = param_5;
  *(undefined8 *)(local_res8 + 0x30) = param_7;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  FUN_00414560(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

