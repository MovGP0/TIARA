/* Ghidra address: 019cdc10 */
/* Ghidra symbol: FUN_019cdc10 */


void FUN_019cdc10(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  if (*(char *)(param_1 + 0x3b) == '\0') {
    uVar1 = FUN_00f309b0(&LAB_00f23b78,1);
    FUN_00f30ec0(uVar1,&DAT_019cdd58,local_res10);
    uVar2 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(param_1 + 0x48));
    FUN_00f30e70(uVar1,L"item_id",uVar2);
    FUN_00f30ec0(uVar1,L"question",*(undefined8 *)(param_1 + 0x20));
    if (local_res18 != 0) {
      FUN_00f30ec0(uVar1,L"value",local_res18);
      FUN_00f30ec0(uVar1,L"value_expected",local_res20);
    }
    FUN_00f335b0(*(undefined8 *)(param_1 + 0x58),uVar1);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    FUN_019cd8c0(param_1,1);
  }
  FUN_00414560(&local_res10,3);
  return;
}

