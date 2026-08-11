/* Ghidra address: 00cf0600 */
/* Ghidra symbol: FUN_00cf0600 */


longlong FUN_00cf0600(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined1 *)(local_res8 + 0x2c) = 0;
  FUN_00cf0d70(local_res8,&local_28);
  FUN_00414ad0(local_res8 + 0x18,local_28);
  FUN_00416ba0(local_res8 + 0x20,L"multipart/form-data; boundary=",
               *(undefined8 *)(local_res8 + 0x18));
  uVar2 = FUN_00cf14a0(&PTR_FUN_00cef6c8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

