/* Ghidra address: 0154f930 */
/* Ghidra symbol: FUN_0154f930 */


undefined4 FUN_0154f930(longlong param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [12];
  undefined1 local_cc [124];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c [3];
  
  local_e8 = 0;
  local_e0 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  cVar1 = FUN_01d3d530(*(undefined2 *)(param_2 + 8));
  if ((((cVar1 != '\0') || (*(int *)(param_2 + 8) == 0x45d)) || (*(int *)(param_2 + 8) == 0x45e)) ||
     (*(int *)(param_2 + 8) == 0x2903)) {
    if (param_3 < param_4 + -1) {
      local_ec = 1;
    }
    else {
      local_ec = 2;
    }
    goto code_r0x0154fb34;
  }
  FUN_015502b0(param_1,&local_40,param_2);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x528);
  if (lVar6 == 0) {
LAB_0154fa47:
    uVar4 = *(uint *)(param_2 + 8);
  }
  else {
    uVar3 = FUN_01d03160(lVar6);
    cVar1 = FUN_01d3d5c0(uVar3);
    if (cVar1 == '\0') goto LAB_0154fa47;
    uVar2 = FUN_01d03160(lVar6);
    uVar4 = (uint)uVar2;
  }
  FUN_0154b550(local_cc,uVar4);
  FUN_0154fc70(param_1,&local_50,local_40);
  FUN_00415dd0(&local_e0,local_50,0);
  lVar6 = FUN_015f9d10(*(undefined8 *)(param_1 + 0xa20),0,local_e0,&DAT_0154fbb4);
  if (lVar6 == 0) {
    FUN_00416ba0(&local_e8,local_50,L": component name not found!");
    FUN_015fcf20(local_e8,0,0,0);
  }
  iVar5 = FUN_0154f8e0(param_1,local_cc,param_3 + 1);
  if (iVar5 == -1) {
    FUN_015fcf20(L"Internal error: TConvertVHDL.get_port_typ, idx=-1",0,0,0);
  }
  else {
    FUN_015f9ec0(*(undefined8 *)(param_1 + 0xa20),lVar6,iVar5 + -1,local_d8,local_1c);
    local_ec = local_1c[0];
  }
code_r0x0154fb34:
  FUN_00414480(&local_e8);
  FUN_004144d0(&local_e0);
  FUN_00414560(&local_50,6);
  return local_ec;
}

