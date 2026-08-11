/* Ghidra address: 0176a710 */
/* Ghidra symbol: FUN_0176a710 */


void FUN_0176a710(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_68;
  local_30 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x48,local_res10[0]);
  local_48 = local_res10[0];
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_020049a0,&LAB_0176a868);
  cVar2 = FUN_00440a20(local_28,1);
  if (cVar2 != '\0') {
    local_48 = local_res10[0];
    FUN_00416cd0(&local_30,3,*(undefined8 *)PTR_DAT_020049a0,&LAB_0176a868);
    local_10 = FUN_014af1b0(local_30,0);
    if (local_10 != 0) {
      puVar1 = *(undefined8 **)(param_1 + 8);
      if (puVar1 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*puVar1)(puVar1);
        FUN_00418590(uVar3,&DAT_01984da0);
      }
      *(longlong *)(param_1 + 8) = local_10;
    }
  }
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res10);
  return;
}

