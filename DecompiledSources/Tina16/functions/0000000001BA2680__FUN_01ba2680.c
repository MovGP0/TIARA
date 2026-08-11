/* Ghidra address: 01ba2680 */
/* Ghidra symbol: FUN_01ba2680 */


bool FUN_01ba2680(longlong param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  *(undefined1 *)(param_1 + 0x998) = 0;
  *(undefined1 *)(param_1 + 0x758) = 1;
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x744) = 8;
  *(undefined4 *)(param_1 + 0x748) = 1;
  *(undefined4 *)(param_1 + 0x74c) = 0x1c200;
  *(undefined4 *)(param_1 + 0x754) = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  puVar6 = &DAT_01fdcc44;
  puVar7 = (undefined8 *)(param_1 + 0x53c);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &DAT_01fdcd44;
  puVar7 = (undefined8 *)(param_1 + 0x63c);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 0x128) = 0xb5d9f0;
  *(undefined4 *)(param_1 + 300) = 0x6388b5;
  FUN_00414480(param_1 + 0x988);
  FUN_00414480(param_1 + 0x990);
  lVar5 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_005fdaa0(*(undefined8 *)(lVar5 + 0x80));
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  FUN_01ba1660();
  *(undefined4 *)(param_1 + 0x9ac) = 0;
  *(undefined1 *)(param_1 + 0x9b0) = 0;
  FUN_00416ba0(param_1 + 0x18,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\Packages\\");
  uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  FUN_00416ba0(local_30,*(undefined8 *)(param_1 + 0x18),L"chess.bmp");
  cVar1 = FUN_00440a20(local_30[0],1);
  if (cVar1 == '\0') {
    FUN_00416cd0(param_1 + 0x980,3,L"File not found: ",*(undefined8 *)(param_1 + 0x18),L"chess.bmp")
    ;
  }
  else {
    FUN_00416ba0(&local_38,*(undefined8 *)(param_1 + 0x18),L"chess.bmp");
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))(*(longlong **)(param_1 + 0x10),local_38);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))(*(longlong **)(param_1 + 0x10));
    *param_3 = uVar2;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10));
    *param_4 = iVar3 + *(int *)(param_1 + 0x73c);
  }
  local_39 = cVar1 != '\0';
  FUN_01ba2ee0(param_1);
  FUN_00414560(&local_38,2);
  return local_39;
}

