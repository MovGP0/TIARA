/* Ghidra address: 01158140 */
/* Ghidra symbol: FUN_01158140 */


longlong * FUN_01158140(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined8 local_40 [4];
  undefined8 local_20;
  
  local_48 = 0;
  local_20 = 0;
  FUN_00414480(param_2);
  bVar1 = true;
  *(undefined8 *)(param_1 + 0xa38) = 0;
  FUN_01cc5c60(*(undefined8 *)(param_1 + 0xa78));
  do {
    lVar4 = FUN_01cc5cc0(*(undefined8 *)(param_1 + 0xa78));
    if (((lVar4 != 0) && (*(char *)(lVar4 + 8) == '\0')) && (*(int *)(lVar4 + 0x158) == 0)) {
      FUN_01cc0ae0(lVar4,&local_20);
      if (bVar1) {
        FUN_01cc0aa0(lVar4,local_40);
        *(undefined8 *)(param_1 + 0xa38) = local_40[0];
      }
      iVar2 = FUN_004413f0(&DAT_01158304,local_20);
      if (iVar2 < 1) {
        FUN_00416cd0(param_2,3,*param_2,local_20,&DAT_01158314);
      }
      else {
        iVar2 = FUN_004170c0(&DAT_01158304,local_20,1);
        FUN_00416dc0(&local_48,local_20,1,iVar2 + -1);
        FUN_00416cd0(param_2,3,*param_2,local_48,&DAT_01158314);
      }
      bVar1 = false;
    }
  } while (lVar4 != 0);
  uVar3 = 0;
  if (*param_2 != 0) {
    uVar3 = *(undefined4 *)(*param_2 + -4);
  }
  FUN_00416e20(param_2,uVar3,1);
  FUN_00414480(&local_48);
  FUN_00414480(&local_20);
  return param_2;
}

