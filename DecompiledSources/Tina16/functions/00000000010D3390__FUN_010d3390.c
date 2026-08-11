/* Ghidra address: 010d3390 */
/* Ghidra symbol: FUN_010d3390 */


void FUN_010d3390(longlong param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  iVar4 = 0;
  iVar5 = -1;
  do {
    cVar2 = FUN_010d3070(param_1,iVar4,&local_20);
    if (cVar2 != '\0') {
      FUN_00416910(local_128,local_20,0xff);
      lVar3 = FUN_013b3d40(param_2,local_128,&local_28);
      iVar5 = iVar4;
      if (lVar3 != 0) {
        FUN_013b3710(param_2,iVar4,local_28);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 0x10));
  bVar1 = false;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else {
    do {
      cVar2 = FUN_010d3040(param_1,iVar5);
      if (cVar2 != '\0') {
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x10) && !bVar1);
  }
  if (*(int *)(param_1 + 0x10) <= iVar5) {
    iVar5 = -1;
  }
  *param_3 = iVar5;
  FUN_00414560(&local_28,2);
  return;
}

