/* Ghidra address: 0180bbc0 */
/* Ghidra symbol: FUN_0180bbc0 */


void FUN_0180bbc0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480(&local_20);
  if (param_2 != (undefined8 *)0x0) {
    iVar3 = 0x11;
    ppuVar2 = &PTR_u_TfrxDesignerForm_01fa82e8;
    do {
      FUN_00410ae0(*param_2,local_30);
      iVar1 = FUN_0043e420(*ppuVar2,local_30[0]);
      if (iVar1 == 0) {
        FUN_00416ba0(&local_20,&DAT_0180bd18,ppuVar2[1]);
      }
      ppuVar2 = ppuVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0080dcf0(*(undefined8 *)PTR_DAT_02004030,&local_48);
  FUN_00441640(&local_40,local_48);
  FUN_00416cd0(&local_38,3,local_40,*(undefined8 *)(param_1 + 0x50),local_20);
  FUN_01807e90(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),local_38);
  FUN_00414560(&local_48,4);
  FUN_00414480(&local_20);
  return;
}

