/* Ghidra address: 00de7540 */
/* Ghidra symbol: FUN_00de7540 */


char FUN_00de7540(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_res10 [3];
  char local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_3 = 0;
  local_21 = '\0';
  iVar4 = 0;
  while( true ) {
    iVar1 = FUN_00de5ed0(*(undefined8 *)(param_1 + 0x30));
    if ((iVar1 <= iVar4) || (local_21 != '\0')) break;
    lVar2 = FUN_00de5ee0(*(undefined8 *)(param_1 + 0x30),iVar4);
    FUN_0043e1a0(local_20,*(undefined8 *)(lVar2 + 0x20));
    iVar1 = FUN_00416db0(local_20[0],local_res10[0]);
    local_21 = iVar1 == 0;
    if ((bool)local_21) {
      uVar3 = FUN_00de5ee0(*(undefined8 *)(param_1 + 0x30),iVar4);
      *param_3 = uVar3;
    }
    else {
      uVar3 = FUN_00de5ee0(*(undefined8 *)(param_1 + 0x30),iVar4);
      local_21 = FUN_00de7540(uVar3,local_res10[0],param_3);
      iVar4 = iVar4 + 1;
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return local_21;
}

