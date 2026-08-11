/* Ghidra address: 01bbe940 */
/* Ghidra symbol: FUN_01bbe940 */


void FUN_01bbe940(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_3c;
  short *local_38;
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = (short *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(local_30,&DAT_01bbeb18,local_res10[0]);
  FUN_01b22620(param_3,local_30[0],&local_3c,0);
  if (local_3c == -1) {
    FUN_00416ba0(local_50,local_res10[0],L" not found in the template file");
    FUN_01bbc400(param_1,local_50[0]);
  }
  iVar3 = local_3c + 1;
  bVar1 = false;
  do {
    (**(code **)(*param_3 + 0x18))(param_3,&local_38,iVar3);
    if ((*local_38 == 0x2b) && (iVar2 = FUN_004170c0(&LAB_01bbeb74,local_38,1), 0 < iVar2)) {
      (**(code **)(*param_3 + 0x98))(param_3,iVar3);
    }
    else {
      bVar1 = true;
    }
  } while (!bVar1);
  iVar3 = (**(code **)(*param_4 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*param_4 + 0x18))(param_4,&local_58,iVar2);
      (**(code **)(*param_3 + 200))(param_3,local_3c + iVar2 + 1,local_58);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return;
}

