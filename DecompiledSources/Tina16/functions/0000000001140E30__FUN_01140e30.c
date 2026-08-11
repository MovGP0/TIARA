/* Ghidra address: 01140e30 */
/* Ghidra symbol: FUN_01140e30 */


void FUN_01140e30(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e0));
  *(undefined8 *)(param_1 + 0x781) = uVar7;
  uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
  *(undefined8 *)(param_1 + 0x789) = uVar7;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  *(char *)(param_1 + 0x780) = cVar4 + '\a';
  uVar5 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x6f8));
  *(undefined1 *)(param_1 + 0x791) = uVar5;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  *(undefined1 *)(param_1 + 0x792) = uVar5;
  PTR_DAT_02004010[0x82b] = (char)((*(int *)(*(longlong *)(param_1 + 0x710) + 0x4a8) + 1) % 3);
  puVar3 = PTR_DAT_02004010;
  if (*(char *)(param_1 + 0x1007b0) == '\0') {
    puVar1 = (undefined8 *)(PTR_DAT_02004010 + 0x3dd);
    *(undefined8 *)(PTR_DAT_02004010 + 0x3d5) = *(undefined8 *)(param_1 + 0x780);
    *puVar1 = *(undefined8 *)(param_1 + 0x788);
    *(undefined2 *)(puVar3 + 0x3e5) = *(undefined2 *)(param_1 + 0x790);
    puVar3[999] = *(undefined1 *)(param_1 + 0x792);
    *(undefined1 *)(param_1 + 0x1055dd) = 1;
    FUN_007fdf10(param_1,*(int *)(param_1 + 0x1055d8) +
                         *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c));
    FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),1);
    FUN_0064c650(*(undefined8 *)(param_1 + 0x748),5);
    *(undefined1 *)(param_1 + 0x1055dc) = 1;
    *(undefined1 *)(param_1 + 0x1055dd) = 0;
    plVar2 = *(longlong **)(param_1 + 0x708);
    uVar6 = (**(code **)(*plVar2 + 0x260))(plVar2);
    (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],local_30,uVar6);
    FUN_00414ad0(PTR_DAT_02004010 + 0x81b,local_30[0]);
    FUN_01142c20(param_1);
  }
  *(undefined1 *)(param_1 + 0x1007b0) = 0;
  FUN_00414480(local_30);
  return;
}

