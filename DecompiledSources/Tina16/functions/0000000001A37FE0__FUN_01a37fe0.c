/* Ghidra address: 01a37fe0 */
/* Ghidra symbol: FUN_01a37fe0 */


void FUN_01a37fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if (param_4 == 0) {
    iVar1 = FUN_00416db0(local_res10,L"Currents");
    if (iVar1 != 0) {
      iVar1 = FUN_00416db0(local_res10,L"Other Voltages");
      if (iVar1 != 0) {
        iVar1 = FUN_00416db0(local_res10,L"Nodal Voltages");
        if (iVar1 == 0) {
          iVar1 = FUN_004170c0(&LAB_01a38344,local_res18,1);
          FUN_00416dc0(&local_28,local_res18,iVar1 + 3,0xff);
          uVar2 = FUN_0043fc00(local_28);
          *param_5 = uVar2;
          *param_6 = 0;
          *param_7 = 0;
          FUN_00414480(param_8);
        }
        else {
          FUN_00414ad0(param_8,local_res18);
          *param_5 = 0;
          *param_6 = 0;
          *param_7 = 0;
        }
        goto code_r0x01a3824a;
      }
    }
    iVar1 = FUN_004170c0(&DAT_01a382f8,local_res18,1);
    FUN_00416dc0(param_8,local_res18,1,iVar1 + -1);
    FUN_00416dc0(&local_20,local_res18,iVar1 + 1,0xff);
    uVar2 = 0;
    if (local_20 != 0) {
      uVar2 = *(undefined4 *)(local_20 + -4);
    }
    FUN_00416e20(param_8,1,2);
    FUN_00416e20(&local_20,uVar2,1);
    iVar1 = FUN_004170c0(&DAT_01a38308,local_20,1);
    FUN_00416dc0(&local_28,local_20,1,iVar1 + -1);
    uVar2 = FUN_0043fc00(local_28);
    *param_5 = uVar2;
    FUN_00416dc0(&local_28,local_20,iVar1 + 1,0xff);
    uVar2 = FUN_0043fc00(local_28);
    *param_6 = uVar2;
  }
  else {
    FUN_00414b50(&local_28,local_res18);
    uVar2 = 0;
    if (local_28 != 0) {
      uVar2 = *(undefined4 *)(local_28 + -4);
    }
    FUN_00416e20(&local_28,uVar2,1);
    uVar3 = FUN_00b8f030(local_28);
    *param_7 = uVar3;
  }
code_r0x01a3824a:
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res10,2);
  return;
}

