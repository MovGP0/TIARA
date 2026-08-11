/* Ghidra address: 0170a480 */
/* Ghidra symbol: FUN_0170a480 */


longlong FUN_0170a480(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18 [2];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_01709fc0(local_res8 + 8);
  FUN_01709fc0(local_res8 + 0x10);
  FUN_01709fc0(local_res8 + 0x18);
  FUN_01709fc0(local_res8 + 0x20);
  FUN_01709fc0(local_res8 + 0x28);
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar1;
  FUN_004b67b0(uVar1,1);
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar1;
  FUN_004b67b0(uVar1,1);
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar1;
  FUN_004b67b0(uVar1,1);
  FUN_00441640(&local_28,local_res18[0]);
  FUN_00414ad0(local_res8 + 0x458,local_28);
  FUN_01709830(*(undefined8 *)(local_res8 + 0x458),L"*.IND",*(undefined8 *)(local_res8 + 0x30));
  FUN_01709830(*(undefined8 *)(local_res8 + 0x458),L"*.LIB",*(undefined8 *)(local_res8 + 0x38));
  FUN_01709830(*(undefined8 *)(local_res8 + 0x458),L"*.TLD",*(undefined8 *)(local_res8 + 0x40));
  FUN_00414480(&local_28);
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

