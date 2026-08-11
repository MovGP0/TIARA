/* Ghidra address: 01359e20 */
/* Ghidra symbol: FUN_01359e20 */


void FUN_01359e20(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined1 *puVar10;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49 [49];
  
  if (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x27c1) != '\0') {
    return;
  }
  if (*(char *)(*(longlong *)PTR_DAT_02001d08 + 0x70e) != '\0') {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  sVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
  if ((sVar5 != 0x3e) && (sVar5 = (**(code **)(*param_2 + 0xf8))(param_2), sVar5 != 0x66)) {
    iVar6 = FUN_01359d80(auStack_88,param_2);
    if (iVar6 < 0) {
      return;
    }
    cVar4 = FUN_013491e0(&local_58);
    if (cVar4 != '\0') {
      FUN_017d2710(local_58);
      FUN_017d2750(local_58,iVar6 + -1);
      sVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
      if ((sVar5 == 0x3d) || (sVar5 = (**(code **)(*param_2 + 0xf8))(param_2), sVar5 == 0x65)) {
        FUN_017d2750(local_58,iVar6);
      }
      FUN_013d2f60(local_58,0,0);
      return;
    }
    return;
  }
  uVar7 = FUN_019a4600();
  FUN_01396fa0(uVar7);
  *PTR_DAT_02002b78 = 1;
  *(undefined1 *)(*(longlong *)PTR_DAT_02001d08 + 0x70e) = 1;
  local_68 = &local_4a;
  local_60 = &local_4b;
  puVar8 = (undefined8 *)FUN_01cfde70(param_2,1,0,local_49);
  uVar7 = *puVar8;
  local_68 = &local_4a;
  local_60 = &local_4b;
  puVar8 = (undefined8 *)FUN_01cfde70(param_2,3,0,local_49);
  uVar1 = *puVar8;
  local_68 = &local_4a;
  local_60 = &local_4b;
  puVar8 = (undefined8 *)FUN_01cfde70(param_2,4,0,local_49);
  uVar2 = *puVar8;
  local_68 = &local_4a;
  local_60 = &local_4b;
  psVar9 = (short *)FUN_01cfde70(param_2,7,0,local_49);
  sVar5 = *psVar9;
  local_68 = &local_4a;
  local_60 = &local_4b;
  puVar10 = (undefined1 *)FUN_01cfde70(param_2,8,0,local_49);
  uVar3 = *puVar10;
  local_68 = (undefined1 *)0x0;
  FUN_0153b430(uVar1,uVar2,(int)sVar5,1);
  cVar4 = FUN_0153bc10(1,0,0,0);
  if (cVar4 != '\0') {
    *(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 0x28) = uVar7;
    local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
    FUN_013d4bc0(*(undefined8 *)PTR_DAT_020027c0,1,0,uVar3);
  }
  *(undefined1 *)(*(longlong *)PTR_DAT_02001d08 + 0x70e) = 0;
  *PTR_DAT_02002b78 = 0;
  return;
}

