/* Ghidra address: 00c60350 */
/* Ghidra symbol: FUN_00c60350 */


undefined1 FUN_00c60350(longlong *param_1)

{
  char cVar1;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined1 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_28;
  undefined1 local_21;
  
  local_50 = auStack_98;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_21 = 0;
  local_48 = param_1[2];
  FUN_017956f0(local_48);
  local_78 = &local_2c;
  FUN_017954b0(local_48,in_stack_00000028,in_stack_00000030,&local_28);
  if (*(char *)(*(longlong *)(param_1[2] + 0x990) + 0x328) != '\0') {
    local_28 = ((local_28 + 2) / 4) * 4;
    local_2c = ((local_2c + 2) / 4) * 4;
  }
  FUN_00724420(*(undefined8 *)(local_48 + 0xc40),*(undefined8 *)(local_48 + 0xd38));
  cVar1 = (**(code **)(**(longlong **)(local_48 + 0xc40) + 0xa8))(*(longlong **)(local_48 + 0xc40));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(local_48 + 0xc40),&local_60);
    FUN_00441640(&local_58,local_60);
    FUN_00414ad0(local_48 + 0xd38,local_58);
    FUN_00724270(*(undefined8 *)(local_48 + 0xc40),&local_68);
    local_78 = (int *)local_68;
    local_70 = *(int *)(local_48 + 0xcb0) == 2;
    local_38 = FUN_017b7320(&PTR_FUN_017ac7a0,1,local_28,local_2c);
    FUN_004ae7e0(*(undefined8 *)(local_48 + 0xd10),local_38);
    local_78 = (int *)((ulonglong)local_78 & 0xffffffffffffff00);
    local_40 = FUN_00c5c220(&DAT_00c5bba8,1,*(undefined8 *)(local_48 + 0xd10),local_38);
    FUN_00c5c790(*(undefined8 *)(local_48 + 0xd50),local_40);
    FUN_017afd00(local_38,1);
  }
  (**(code **)(**(longlong **)(local_48 + 0x948) + 0x180))(*(longlong **)(local_48 + 0x948));
  (**(code **)(*param_1 + 8))(param_1);
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_58);
  return local_21;
}

