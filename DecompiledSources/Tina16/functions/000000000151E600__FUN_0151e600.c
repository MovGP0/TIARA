/* Ghidra address: 0151e600 */
/* Ghidra symbol: FUN_0151e600 */


void FUN_0151e600(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  if ((*(longlong *)(param_1 + 0x880) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x880), *(char *)(*(longlong *)(lVar1 + 8) + 0x434) == '\n'))
  {
    iVar3 = 1;
    FUN_01cc5c60(lVar1);
    do {
      lVar2 = FUN_01cc5cc0(lVar1);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x18) != '\0')) {
        FUN_01cc0ae0(lVar2,&local_38);
        FUN_0043f750(&local_40,iVar3);
        FUN_00416cd0(local_30,3,local_38,&LAB_0151e728,local_40);
        FUN_01cc09f0(lVar2,local_30[0]);
        iVar3 = iVar3 + 1;
      }
    } while (lVar2 != 0);
  }
  FUN_013d39a0(*(undefined8 *)(param_1 + 0x880));
  *param_2 = *(undefined8 *)(param_1 + 0x880);
  FUN_00414560(&local_40,3);
  return;
}

