/* Ghidra address: 00a33180 */
/* Ghidra symbol: FUN_00a33180 */


longlong FUN_00a33180(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined4 local_res10 [6];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  ppuVar5 = &PTR_FUN_00a302d8;
  local_res10[0] = param_2;
  if (DAT_020133c8 != 0) {
    iVar6 = *(int *)(DAT_020133c8 + 0x10);
    iVar4 = 0;
    if (-1 < iVar6 + -1) {
      do {
        puVar2 = (undefined8 *)FUN_00a338f0(DAT_020133c8,iVar4);
        (**(code **)*puVar2)((undefined8 *)*puVar2,&local_30);
        FUN_00416800(&local_38,local_res10,4);
        iVar1 = FUN_00416db0(local_30,local_38);
        if (iVar1 == 0) {
          puVar2 = (undefined8 *)FUN_00a338f0(DAT_020133c8,iVar4);
          ppuVar5 = (undefined **)*puVar2;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  lVar3 = (*(code *)ppuVar5[2])(ppuVar5,1,param_1);
  *(undefined4 *)(lVar3 + 0x20) = local_res10[0];
  FUN_00414560(&local_38,2);
  return lVar3;
}

