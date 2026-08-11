/* Ghidra address: 01c27100 */
/* Ghidra symbol: FUN_01c27100 */


void FUN_01c27100(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = CONCAT44(param_3,param_2);
  if (*(longlong *)(param_1 + 0x540) == 0) {
    iVar4 = 0;
    while( true ) {
      iVar2 = FUN_01c232b0(param_1);
      if (iVar2 <= iVar4) break;
      lVar3 = FUN_01c233d0(param_1,iVar4);
      cVar1 = FUN_004231e0(lVar3 + 0x20,&local_20);
      if (cVar1 != '\0') break;
      iVar4 = iVar4 + 1;
    }
    iVar2 = FUN_01c232b0(param_1);
    if (iVar4 < iVar2) {
      FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xffeb);
    }
    else {
      cVar1 = FUN_004231e0(param_1 + 0x52c,&local_20);
      if (cVar1 == '\0') {
        FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0);
      }
      else if (*(char *)(param_1 + 0x580) == '\0') {
        FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,1);
      }
      else {
        FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,2);
      }
    }
  }
  else {
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xffeb);
  }
  return;
}

