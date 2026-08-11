/* Ghidra address: 012281f0 */
/* Ghidra symbol: FUN_012281f0 */


void FUN_012281f0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x898));
  *(undefined8 *)PTR_DAT_02004ea8 = uVar6;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x898),*(undefined8 *)PTR_DAT_02004ea8);
  uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x8a0));
  *(undefined8 *)PTR_DAT_02003be0 = uVar6;
  uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x9f0));
  *(undefined8 *)PTR_DAT_02005b00 = uVar6;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x8a0),*(undefined8 *)PTR_DAT_02003be0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x9f0),*(undefined8 *)PTR_DAT_02005b00);
  uVar6 = FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x750));
  *(undefined8 *)PTR_DAT_02002798 = uVar6;
  uVar6 = FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x748));
  *(undefined8 *)PTR_DAT_02001510 = uVar6;
  *(undefined4 *)(PTR_DAT_02001ad0 + 0x50) = 0x18;
  *(undefined4 *)(PTR_DAT_02001ad0 + 0x54) = 0x28;
  *(undefined8 *)PTR_DAT_020059b0 = 0;
  *(undefined8 *)(PTR_DAT_020059b0 + 8) = 0;
  *(undefined4 *)(PTR_DAT_020059b0 + 0x3880) = 1;
  iVar5 = 0x12d;
  puVar4 = (undefined8 *)(PTR_DAT_020059b0 + 0x10);
  do {
    *puVar4 = 0;
    puVar4[0x12d] = 0;
    puVar4[0x25a] = 0;
    puVar4[0x387] = 0;
    puVar4[0x4b4] = 0;
    puVar4[0x5e1] = 0;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x41) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x9c0) + 0x260))(*(longlong **)(param_1 + 0x9c0))
    ;
    *(undefined1 *)(*(longlong *)PTR_DAT_020019a0 + 0x1fc8) = uVar1;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x9c0) + 0x260))(*(longlong **)(param_1 + 0x9c0))
    ;
    if (cVar2 == '\x01') {
      uVar3 = FUN_0117a420(PTR_DAT_020019a0,PTR_DAT_02005030,*(undefined8 *)PTR_DAT_02004ea8,
                           *(undefined8 *)PTR_DAT_02003be0);
      *(undefined4 *)PTR_DAT_02001520 = uVar3;
      if (*(int *)PTR_DAT_02001520 == 0) {
        FUN_011804b0(PTR_DAT_02005030,*(undefined8 *)PTR_DAT_02005aa0);
      }
      FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_02005010,L"\\filter_log_tina.txt");
      FUN_01192ee0(local_20[0],*(undefined8 *)PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005030);
    }
    else {
      uVar3 = FUN_0117a570(PTR_DAT_020019a0,PTR_DAT_02001390);
      *(undefined4 *)PTR_DAT_02001520 = uVar3;
      if (*(int *)PTR_DAT_02001520 == 0) {
        FUN_01181220(PTR_DAT_02001390,*(undefined8 *)PTR_DAT_02005aa0);
      }
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

