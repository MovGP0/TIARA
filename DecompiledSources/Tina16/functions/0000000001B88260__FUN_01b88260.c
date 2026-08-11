/* Ghidra address: 01b88260 */
/* Ghidra symbol: FUN_01b88260 */


undefined1 FUN_01b88260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_39 = 0;
  iVar3 = 6;
  ppuVar2 = &PTR_u_PULSE_01fda340;
  while( true ) {
    FUN_0043e1a0(&local_20,*ppuVar2);
    FUN_0043e1a0(&local_30,local_res10[0]);
    FUN_01b88140(param_1,&local_28,local_30);
    iVar1 = FUN_00416db0(local_28,L"sine");
    if (iVar1 == 0) {
      FUN_00414b50(&local_28,&DAT_01b883d4);
    }
    iVar1 = FUN_004170c0(local_20,local_28,1);
    if (iVar1 == 1) break;
    ppuVar2 = ppuVar2 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
LAB_01b88351:
      FUN_00414560(&local_38,4);
      FUN_00414480(local_res10);
      return local_39;
    }
  }
  FUN_0043e130(&local_38,*ppuVar2);
  FUN_00414ad0(param_3,local_38);
  local_39 = 1;
  goto LAB_01b88351;
}

