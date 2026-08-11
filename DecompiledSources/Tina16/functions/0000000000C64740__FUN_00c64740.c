/* Ghidra address: 00c64740 */
/* Ghidra symbol: FUN_00c64740 */


void FUN_00c64740(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res18 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if ((*param_2 == 0) && (local_res18[0] != 0)) {
    FUN_0043e5a0(local_30,local_res18[0]);
    FUN_00416ba0(&local_20,&LAB_00c648b4,local_30[0]);
    iVar1 = FUN_004d3e30();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        puVar3 = (undefined8 *)FUN_004d3de0(*(undefined8 *)PTR_DAT_02004030,iVar5);
        FUN_00410ae0(*puVar3,&local_40);
        FUN_0043e5a0(&local_38,local_40);
        iVar2 = FUN_00416db0(local_38,local_20);
        if (iVar2 == 0) {
          lVar4 = FUN_004d3de0(*(undefined8 *)PTR_DAT_02004030,iVar5);
          *param_2 = lVar4;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return;
}

