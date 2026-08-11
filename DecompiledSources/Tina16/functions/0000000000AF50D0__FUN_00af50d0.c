/* Ghidra address: 00af50d0 */
/* Ghidra symbol: FUN_00af50d0 */


undefined1 FUN_00af50d0(longlong param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  short *local_res10 [3];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_29 = 0;
  if (local_res10[0] != (short *)0x0) {
    if (*local_res10[0] == 0x23) {
      FUN_00416e20(local_res10,1,1);
    }
    FUN_0043e130(local_20,local_res10[0]);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0xb0))
                      (*(longlong **)(param_1 + 0x910),local_20[0]);
    if (-1 < iVar2) {
      puVar4 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 0x910) + 0x30))
                         (*(longlong **)(param_1 + 0x910),iVar2);
      cVar1 = FUN_004113d0(puVar4,&PTR_FUN_00a6bec0);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)*puVar4)(puVar4);
        FUN_00af26c0(param_1,uVar3);
      }
      FUN_0068e980(*(undefined8 *)(param_1 + 0x750),0);
      FUN_00416cd0(&local_28,3,*(undefined8 *)(param_1 + 0x8b8),&LAB_00af5248,local_res10[0]);
      FUN_00af2d10(param_1,local_28);
      local_29 = 1;
    }
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return local_29;
}

