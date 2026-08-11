/* Ghidra address: 0172bb90 */
/* Ghidra symbol: FUN_0172bb90 */


longlong FUN_0172bb90(longlong param_1,char param_2,undefined2 param_3,byte param_4,
                     undefined8 param_5,char param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  uVar4 = FUN_0172a2b0(&DAT_01728b68,1,param_5);
  *(undefined8 *)(local_res8 + 8) = uVar4;
  lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,param_3);
  lVar5 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,*(short *)(lVar5 + 0x9e) + (ushort)param_4);
  uVar1 = *(undefined4 *)(lVar5 + 0x34);
  *(undefined4 *)(local_res8 + 0x10) = uVar1;
  FUN_0172a910(*(undefined8 *)(local_res8 + 8),uVar1);
  FUN_0172a920(*(undefined8 *)(local_res8 + 8),local_res8 + 0x18,1);
  iVar3 = FUN_0172a950(*(undefined8 *)(local_res8 + 8));
  iVar3 = iVar3 + (uint)*(byte *)(local_res8 + 0x18) * 0x1b;
  *(int *)(local_res8 + 0x14) = iVar3;
  FUN_0172a910(*(undefined8 *)(local_res8 + 8),iVar3);
  FUN_0172a920(*(undefined8 *)(local_res8 + 8),local_res8 + 0x1a,2);
  if (param_6 != '\0') {
    uVar2 = FUN_0172bf70(local_res8,local_res8 + 0x16a,local_res8 + 0x169);
    *(undefined1 *)(local_res8 + 0x16c) = uVar2;
  }
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

