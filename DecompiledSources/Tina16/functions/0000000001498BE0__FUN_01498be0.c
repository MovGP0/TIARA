/* Ghidra address: 01498be0 */
/* Ghidra symbol: FUN_01498be0 */


void FUN_01498be0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 local_20;
  
  local_20 = 0;
  uVar4 = 0;
  FUN_00f08d50(&local_20,0xb);
  plVar3 = (longlong *)
           FUN_007fc180(&PTR_FUN_01474ce8,CONCAT11(uVar4,1),*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*plVar3 + 0x2d0))(plVar3);
  iVar1 = *(int *)((longlong)plVar3 + 0x6dc);
  *(char *)(param_1 + 0xba0) = (char)plVar3[0xdb];
  FUN_00410f20(plVar3);
  if (iVar1 == 2) {
    *param_3 = 0;
  }
  else if (iVar1 == 6) {
    cVar2 = FUN_01498190(param_1);
    if (cVar2 == '\0') {
      *param_3 = 0;
    }
    else {
      *param_3 = 1;
    }
  }
  else if (iVar1 == 7) {
    *param_3 = 1;
  }
  FUN_00414480(&local_20);
  return;
}

