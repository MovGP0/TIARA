/* Ghidra address: 01a34530 */
/* Ghidra symbol: FUN_01a34530 */


void FUN_01a34530(undefined8 param_1,longlong *param_2,uint param_3,char param_4,undefined8 param_5,
                 longlong param_6)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_74;
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *local_40 [3];
  
  local_40[0] = (undefined8 *)0x0;
  FUN_00414610(param_6);
  local_74 = param_3;
  if ((int)param_3 < 0) {
    uVar2 = FUN_01d03160(param_2);
    local_74 = (uint)uVar2;
  }
  (**(code **)(*param_2 + 0x288))(param_2,local_40);
  local_60 = 0;
  if (param_6 == 0) {
    FUN_00414b50(&param_6,local_40[0]);
  }
  cVar1 = FUN_01a32b00(local_74);
  if (cVar1 == '\0') {
    cVar1 = FUN_01a32aa0(local_74);
    if (cVar1 == '\0') {
      cVar1 = FUN_01a32a70(local_74,1);
      if (cVar1 == '\0') goto code_r0x01a34753;
    }
  }
  uVar3 = (**(code **)(*param_2 + 0x210))(param_2,0);
  uVar4 = (**(code **)(*param_2 + 0x210))(param_2,1);
  uVar9 = 0;
  cVar1 = FUN_01a32aa0(local_74);
  if (cVar1 == '\0') {
    uVar9 = FUN_01a31ec0(param_2,0,1);
  }
  uVar5 = local_74 - 8;
  if (uVar5 < 0xd8) {
    bVar8 = ((byte)(&DAT_01a347b8)[(longlong)(int)uVar5 >> 3] >> (uVar5 & 7) & 1) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    cVar1 = FUN_01cfd030(param_2,1);
    if (cVar1 == '\x05') {
      FUN_01a320e0(param_2,&local_60);
    }
  }
  lVar7 = FUN_01a32700(&DAT_01a30bb0,1,0);
  *(undefined8 *)(lVar7 + 8) = uVar9;
  FUN_00414ad0(lVar7 + 0x18,local_40[0]);
  *(uint *)(lVar7 + 0x28) = local_74;
  *(longlong **)(lVar7 + 0x30) = param_2;
  iVar6 = FUN_00416db0(local_40[0],L"Rshortxxx");
  if (iVar6 == 0) {
    *(undefined4 *)(lVar7 + 0x2c) = 2;
  }
  else {
    *(undefined4 *)(lVar7 + 0x2c) = 1;
  }
  *(undefined4 *)(lVar7 + 0x10) = uVar3;
  *(undefined4 *)(lVar7 + 0x14) = uVar4;
  if (local_60 == 1) {
    *(ulonglong *)(lVar7 + 0x38) = CONCAT44(uStack_5c,1);
    *(undefined8 *)(lVar7 + 0x40) = uStack_58;
    *(undefined8 *)(lVar7 + 0x48) = uStack_50;
    *(undefined8 *)(lVar7 + 0x50) = uStack_48;
  }
  if (param_4 == '\0') {
    FUN_004ae7e0(param_5,lVar7);
  }
  else {
    FUN_01a34270(param_1,uVar3,uVar4,lVar7,param_6);
  }
code_r0x01a34753:
  FUN_00414480(local_40);
  FUN_00414480(&param_6);
  return;
}

