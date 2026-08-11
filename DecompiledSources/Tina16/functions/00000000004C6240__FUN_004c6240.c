/* Ghidra address: 004c6240 */
/* Ghidra symbol: FUN_004c6240 */


bool FUN_004c6240(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong local_20 [2];
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_0058ce80(local_20,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  if (*(char *)(param_1 + 0x7f) == '\0') {
    uVar3 = FUN_00460ba0(&local_38);
    cVar1 = FUN_004c5b80(param_1,uVar3);
    if (cVar1 == '\0') {
      if ((*(int *)(*(longlong *)(param_1 + 0xb8) + 0x24) == -0x80000000) || (local_20[0] != 0)) {
        local_59 = false;
      }
      else {
        local_59 = true;
      }
    }
    else {
      cVar1 = FUN_0046c3d0(&local_38);
      if (cVar1 == '\0') {
        FUN_00468a10(&local_58,local_20[0]);
        cVar1 = FUN_0046f320(&local_58,&local_38);
        if (cVar1 != '\0') {
          local_59 = true;
          goto code_r0x004c6346;
        }
      }
      local_59 = false;
    }
  }
  else {
    FUN_0058ce80(&local_40,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb8));
    iVar2 = FUN_00416db0(local_20[0],local_40);
    local_59 = iVar2 == 0;
  }
code_r0x004c6346:
  FUN_00460ba0(&local_58);
  FUN_00414480(&local_40);
  FUN_00460ba0(&local_38);
  FUN_00414480(local_20);
  return local_59;
}

