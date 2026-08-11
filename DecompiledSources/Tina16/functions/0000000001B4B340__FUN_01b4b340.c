/* Ghidra address: 01b4b340 */
/* Ghidra symbol: FUN_01b4b340 */


undefined8 FUN_01b4b340(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_50[0] = 0;
  local_58 = 0;
  local_40 = 0;
  FUN_01539a50(*(undefined8 *)(param_1 + 0x10),&local_30,&local_38);
  FUN_01b4b1e0(&local_40,local_30);
  FUN_00416ad0(&local_40,&DAT_01b4b4c8);
  iVar5 = *(int *)(local_38 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01d3aab0(local_38,iVar4);
      uVar1 = *(undefined1 *)(lVar2 + 8);
      puVar3 = (undefined8 *)FUN_01d3aab0(local_38,iVar4);
      FUN_01b4b1e0(local_50,*puVar3);
      FUN_01aa0820(&local_58,uVar1);
      FUN_00416cd0(&local_40,4,local_40,local_50[0],&DAT_01b4b4dc,local_58);
      if (iVar4 < *(int *)(local_38 + 0x10) + -1) {
        FUN_00416ad0(&local_40,&DAT_01b4b4ec);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414ad0(param_2,local_40);
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_40);
  return param_2;
}

