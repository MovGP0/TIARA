/* Ghidra address: 01498190 */
/* Ghidra symbol: FUN_01498190 */


char FUN_01498190(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  cVar2 = FUN_01497210(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_019a4600();
    *(undefined8 *)(param_1 + 0xbb0) = *(undefined8 *)(lVar3 + 0x208);
    plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00416cd0(local_30,3,*(undefined8 *)PTR_DAT_020052a8,&DAT_01498344,L"temp.txt");
    lVar3 = *(longlong *)(param_1 + 0x930);
    FUN_010cd780(local_30[0],*(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + 0x4e8),lVar3 + 0x628,
                 lVar3 + 0x630,lVar3 + 0x650,*(undefined4 *)(param_1 + 0xc08));
    (**(code **)(*plVar4 + 0xd8))(plVar4,local_30[0]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 0x18);
    (**(code **)(*plVar1 + 0x10))(plVar1,plVar4);
    FUN_00410f20(plVar4);
    FUN_014979d0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 8),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x10));
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),local_40);
    FUN_00414ad0(*(longlong *)(param_1 + 0xbb0) + 0x20,local_40[0]);
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return cVar2;
}

