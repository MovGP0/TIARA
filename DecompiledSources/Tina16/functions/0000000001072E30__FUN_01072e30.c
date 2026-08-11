/* Ghidra address: 01072e30 */
/* Ghidra symbol: FUN_01072e30 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

float FUN_01072e30(longlong param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong local_res10 [3];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  float *local_20;
  float local_14;
  int local_10;
  float local_c;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if ((*(int *)(param_1 + 0x6f0) == 5) || (*(int *)(param_1 + 0x6f0) == 6)) {
    local_c = (float)FUN_0043fc00(local_res10[0]);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x6f0);
    if ((iVar3 == 7) || (iVar3 == 8)) {
      local_24 = 0;
      if (local_res10[0] != 0) {
        local_24 = *(int *)(local_res10[0] + -4);
      }
      local_10 = local_24;
      if (*(int *)(param_1 + 0x6ec) == 0) {
        if (local_24 < 3) {
          *(undefined1 *)(param_1 + 0x6e8) = 1;
          goto LAB_01072fe0;
        }
        FUN_00416dc0(&local_38,local_res10[0],1,2);
        iVar3 = FUN_00416db0(local_38,&DAT_01073044);
        if (iVar3 != 0) {
          *(undefined1 *)(param_1 + 0x6e8) = 1;
          goto LAB_01072fe0;
        }
        FUN_00416dc0(local_res10,local_res10[0],3,0xff);
      }
      cVar2 = FUN_01072d50(local_res10[0],*(int *)(param_1 + 0x6ec) == 0);
      *(bool *)(param_1 + 0x6e8) = cVar2 == '\0';
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x6ec) == 0) {
          uVar4 = FUN_01aa1170(local_res10[0]);
          *(undefined4 *)(param_1 + 0x6d8) = uVar4;
        }
        else {
          uVar4 = FUN_0043fc00(local_res10[0]);
          *(undefined4 *)(param_1 + 0x6d8) = uVar4;
        }
      }
      local_c = *(float *)(param_1 + 0x6d8);
    }
    else if (iVar3 == 4) {
      dVar1 = (double)FUN_00448650(local_res10[0],PTR_DAT_02004830);
      local_14 = (float)dVar1;
      local_20 = &local_14;
      local_c = local_14;
    }
  }
LAB_01072fe0:
  FUN_00414480(&local_38);
  FUN_00414480(local_res10);
  return local_c;
}

