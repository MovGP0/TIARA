/* Ghidra address: 013cbd70 */
/* Ghidra symbol: FUN_013cbd70 */


void FUN_013cbd70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  wchar_t *local_30 [2];
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = (wchar_t *)0x0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x128))
            (*(longlong **)(param_1 + 0x7a0),*PTR_DAT_020017c0);
  (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x128))
            (*(longlong **)(param_1 + 0x7b0),*PTR_DAT_020017c0);
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x128))
            (*(longlong **)(param_1 + 0x7a8),*PTR_DAT_020017c0);
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x128))(*(longlong **)(param_1 + 0x7b8),1);
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x128))
            (*(longlong **)(param_1 + 0x7c8),*PTR_DAT_020017c0);
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))
            (*(longlong **)(param_1 + 0x7a0),*PTR_DAT_020017c0);
  (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x268))
            (*(longlong **)(param_1 + 0x7b0),*PTR_DAT_020017c0);
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))
            (*(longlong **)(param_1 + 0x7a8),*PTR_DAT_020017c0);
  (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x268))(*(longlong **)(param_1 + 0x7b8),1);
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x268))
            (*(longlong **)(param_1 + 0x7c8),*PTR_DAT_020017c0);
  FUN_00742ed0(*(undefined8 *)(param_1 + 0x6b8),1000);
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_00441a10(local_30,*(undefined8 *)(param_1 + 0x940));
    if (local_30[0] == L".CIR") {
      bVar7 = true;
    }
    else if (local_30[0] == (wchar_t *)0x0) {
      bVar7 = false;
    }
    else {
      iVar4 = FUN_0043e420(local_30[0],L".CIR");
      bVar7 = iVar4 == 0;
    }
    if (!bVar7) {
      FUN_01c98690(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)(param_1 + 0x940));
    }
  }
  uVar5 = FUN_00b89270();
  FUN_00b8ac60(uVar5,param_1,*(undefined8 *)(param_1 + 0x800));
  if (*(longlong *)(param_1 + 0x940) == 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),0);
  }
  else {
    FUN_00441920(&local_40,*(undefined8 *)(param_1 + 0x940));
    FUN_00416cd0(&local_38,3,&DAT_013cc538,local_40,L" >> ");
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_38);
  }
  if (((*(char *)(param_1 + 0x93c) == '\b') && (*(longlong *)PTR_DAT_02005188 != 0)) &&
     (cVar2 = FUN_01cc6030(*(undefined8 *)PTR_DAT_02005188), cVar2 != '\0')) {
    *(undefined8 *)PTR_DAT_02005188 = 0;
  }
  *(undefined1 *)(param_1 + 0x92e) = 0;
  if (*(longlong *)PTR_DAT_02005188 == 0) {
    *(undefined1 *)(param_1 + 0x92e) = 1;
    uVar5 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,*(undefined1 *)(param_1 + 0x93c),1,0);
    *(undefined8 *)PTR_DAT_02005188 = uVar5;
    FUN_01cc6020(*(undefined8 *)PTR_DAT_02005188);
    puVar6 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_01cc3760(*(undefined8 *)(*(longlong *)PTR_DAT_02005188 + 8),*puVar6);
  }
  if (*(char *)(param_1 + 0x93c) == '\n') {
    if (*(char *)(param_1 + 0x949) != '\0') {
      FUN_013cf760(param_1,param_2);
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x808),0);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x808),1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x6b0);
  FUN_0064dd90(uVar5,&local_48);
  FUN_013cb810(param_1,&local_50,*(undefined1 *)(param_1 + 0x93c));
  FUN_00416ad0(&local_48,local_50);
  FUN_0064de00(uVar5,local_48);
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  uVar3 = FUN_013c4180();
  *(undefined1 *)(param_1 + 0x92d) = uVar3;
  *(undefined1 *)(param_1 + 0x92c) = 1;
  FUN_013cab80(param_1,param_2 == 0);
  *(undefined1 *)(param_1 + 0x92c) = 0;
  uVar8 = 0;
  uVar5 = FUN_013b9a60(&DAT_013b8648,1,0,0,0);
  *(undefined8 *)(param_1 + 0x8e0) = uVar5;
  uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x8f0) = uVar5;
  FUN_01099800(param_1,uVar5,0);
  uVar5 = FUN_013c43c0(&DAT_013c3858,1,*(undefined1 *)(param_1 + 0x93c),0,
                       CONCAT44(uVar8,(uint)(*PTR_DAT_02005258 != '\0')),0,0,0);
  *(undefined8 *)(param_1 + 0x900) = uVar5;
  FUN_013cd540();
  FUN_013c4e30(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)(param_1 + 0x878),0);
  FUN_013cb410(param_1,&local_58);
  FUN_013d0330(param_1,*(undefined8 *)(param_1 + 0x700),0);
  FUN_013cd8c0(param_1,0,0);
  FUN_00414480(PTR_DAT_020044f0);
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x298))(*(longlong **)(param_1 + 0x700));
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x298))(*(longlong **)(param_1 + 0x748));
  FUN_00c0fae0(*(undefined8 *)(param_1 + 0x848));
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))(*(longlong **)(param_1 + 0x750),0);
  FUN_013cb5d0(param_1);
  FUN_013cb560(param_1);
  FUN_006806a0(*(undefined8 *)(param_1 + 0x700),0);
  FUN_00c0dad0(*(undefined8 *)(param_1 + 0x848),0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar4) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_20,0);
    FUN_00414ad0(*(longlong *)(param_1 + 0x778) + 0xf0,local_20[0]);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  (**(code **)(**(longlong **)(param_1 + 0x880) + 0x90))(*(longlong **)(param_1 + 0x880));
  (**(code **)(**(longlong **)(param_1 + 0x890) + 0x10))(*(longlong **)(param_1 + 0x890));
  (**(code **)(**(longlong **)(param_1 + 0x888) + 0x90))(*(longlong **)(param_1 + 0x888));
  uVar5 = FUN_019a4630();
  FUN_017ccae0(uVar5,*(undefined8 *)(param_1 + 0x880));
  uVar5 = FUN_019a4630();
  FUN_017cd0b0(uVar5,*(undefined8 *)(param_1 + 0x880),0,0);
  uVar5 = FUN_019a4630();
  FUN_017cd2d0(uVar5,*(undefined8 *)(param_1 + 0x890),*(undefined8 *)(param_1 + 0x888));
  *(undefined1 *)(param_1 + 0x931) = 1;
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return;
}

