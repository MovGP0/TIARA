/* Ghidra address: 01083900 */
/* Ghidra symbol: FUN_01083900 */


void FUN_01083900(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  uVar3 = FUN_00b89270();
  FUN_00b8d260(uVar3,param_1,0xffffffff);
  FUN_01608f10(*(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0xe8),
               *(undefined4 *)(param_1 + 0xad8),*(undefined8 *)(param_1 + 0xb38));
  FUN_01608560(*(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0xe8),
               *(undefined4 *)(param_1 + 0xad8),*(undefined8 *)(param_1 + 0xb38));
  FUN_0107a0c0(param_1);
  lVar4 = FUN_01081ce0(param_1);
  FUN_010792a0(param_1,lVar4);
  if (lVar4 != 0) {
    FUN_01085110(param_1,*(undefined8 *)(lVar4 + 0x10),0xffffffff);
  }
  *(undefined4 *)(param_1 + 0xaa0) = 0xffffffff;
  cVar1 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  if (cVar1 != '\0') {
    uVar2 = FUN_0108c4a0(param_1,0);
    *(undefined4 *)(param_1 + 0xaa0) = uVar2;
    FUN_0108c0f0();
  }
  FUN_0108d0e0(param_1);
  uVar3 = FUN_019a4600();
  FUN_01ca2f40(*(undefined8 *)PTR_DAT_02004e40,&local_40,uVar3);
  FUN_00441920(&local_38,local_40);
  FUN_00f60ce0(local_30,local_38);
  FUN_00416cd0(&local_20,3,L"breakpoints_",local_30[0],L".txt");
  if (*(char *)(param_1 + 0xb52) == '\0') {
    FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0xb40),&DAT_01083c68,local_20);
    cVar1 = FUN_00440a20(local_48,1);
    if (cVar1 != '\0') {
      plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_00416cd0(&local_50,3,*(undefined8 *)(param_1 + 0xb40),&DAT_01083c68,local_20);
      (**(code **)(*plVar5 + 0xd8))(plVar5,local_50);
      (**(code **)(*plVar5 + 0x98))(plVar5,0);
      FUN_010b11a0(*(undefined8 *)(param_1 + 0xac8),plVar5);
      FUN_00410f20(plVar5);
    }
  }
  FUN_00416cd0(&local_20,3,*(undefined8 *)PTR_DAT_02005360,&DAT_01083c68,L"mcu_modules.txt");
  cVar1 = FUN_00440a20(local_20,1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xb70) + 0xd8))(*(longlong **)(param_1 + 0xb70),local_20)
    ;
  }
  FUN_01083ca0(param_1,0xc);
  FUN_00bbae50(*(undefined8 *)(*(longlong *)(param_1 + 0xa78) + 0x610),1);
  FUN_00414560(&local_50,5);
  FUN_00414480(&local_20);
  return;
}

