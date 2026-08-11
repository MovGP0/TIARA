/* Ghidra address: 0160f2b0 */
/* Ghidra symbol: FUN_0160f2b0 */


void FUN_0160f2b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_015f4380(local_20,param_1,0);
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  uVar4 = FUN_007fc180(&PTR_FUN_010739f8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02002ab0 = uVar4;
  FUN_010792c0(*(undefined8 *)PTR_DAT_02002ab0,lVar1);
  FUN_01079310(*(undefined8 *)PTR_DAT_02002ab0,param_1);
  FUN_01081a90(*(undefined8 *)PTR_DAT_02002ab0,param_2,local_20[0]);
  uVar4 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002ab0);
  FUN_01081d80(*(undefined8 *)PTR_DAT_02002ab0,uVar4,1,0,0,0);
  (**(code **)(**(longlong **)PTR_DAT_02002ab0 + 0x2d0))(*(longlong **)PTR_DAT_02002ab0);
  cVar3 = FUN_0107b2f0(*(undefined8 *)PTR_DAT_02002ab0);
  if (cVar3 == '\0') {
    cVar3 = FUN_01079390(*(undefined8 *)PTR_DAT_02002ab0);
    if (cVar3 != '\0') {
      plVar2 = *(longlong **)(lVar1 + 0xd0);
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(*(longlong *)PTR_DAT_02002ab0 + 0x4d40));
    }
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02002ab0);
  *(undefined8 *)PTR_DAT_02002ab0 = 0;
  FUN_00414480(local_20);
  return;
}

