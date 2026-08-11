/* Ghidra address: 01c82f90 */
/* Ghidra symbol: FUN_01c82f90 */


void FUN_01c82f90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_130 [256];
  undefined8 local_30;
  
  local_30 = 0;
  uVar2 = FUN_01d34560(&PTR_FUN_01b9b320,1,5,5);
  *(undefined8 *)PTR_DAT_020043c8 = uVar2;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))
                         (*(longlong **)(param_1 + 0x90),iVar4);
      (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
      FUN_00416910(local_130,local_30,0xff);
      FUN_01b9b580(*(undefined8 *)PTR_DAT_020043c8,local_130,plVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01b9b710();
  FUN_00410f20(*(undefined8 *)PTR_DAT_020043c8);
  FUN_00414480(&local_30);
  return;
}

