/* Ghidra address: 01643940 */
/* Ghidra symbol: FUN_01643940 */


void FUN_01643940(longlong *param_1,undefined2 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined8 local_res18 [2];
  longlong local_18;
  ushort local_a;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_0043fc00(local_res18[0]);
  if (param_4 == '\0') {
    if (iVar1 == 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  if (iVar1 == 1) {
    FUN_01d3d920(param_1,9,0,&local_a);
    (**(code **)(*param_1 + 0x2d0))(param_1,local_a,&local_18);
    FUN_01d3d920(param_1,9,local_a + 1,&local_a);
    (**(code **)(*param_1 + 0x2d0))(param_1,local_a,&local_18);
  }
  else {
    FUN_01d3d920(param_1,9,0,&local_a);
    (**(code **)(*param_1 + 0x2d0))(param_1,local_a,&local_18);
  }
  *(undefined2 *)(local_18 + 0x1f) = param_2;
  FUN_00414480(local_res18);
  return;
}

