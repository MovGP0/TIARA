/* Ghidra address: 00ddeb40 */
/* Ghidra symbol: FUN_00ddeb40 */


char FUN_00ddeb40(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 *local_70;
  longlong local_60;
  undefined4 *local_58;
  undefined8 local_50;
  char local_41;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  uint local_20;
  undefined4 local_1c;
  
  local_40 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_res10[0] = param_2;
  local_60 = param_1;
  local_58 = param_3;
  local_50 = param_4;
  FUN_00414610(param_2);
  *local_58 = 0;
  FUN_00414480(local_50);
  FUN_00ddd3d0(local_60);
  FUN_0041b890(&local_40,*(undefined8 *)(local_60 + 0x4b0),&DAT_00ddedb4);
  uVar3 = FUN_0041b800(&local_28);
  uVar1 = (**(code **)(*local_40 + 0x18))(local_40,uVar3);
  FUN_006245b0(uVar1);
  local_1c = 0xffffffff;
  iVar2 = 0;
  if (local_res10[0] != 0) {
    iVar2 = *(int *)(local_res10[0] + -4);
  }
  if (0 < iVar2) {
    uVar1 = (**(code **)(*local_28 + 0x18))(local_28,&local_38);
    FUN_006245b0(uVar1);
    local_20 = (uint)*(ushort *)(local_38 + 0x34);
    (**(code **)(*local_28 + 0x98))(local_28,local_38);
    local_41 = FUN_00dde990(auStack_98,local_res10[0],&local_28);
    if (local_41 == '\0') {
      iVar2 = 0;
      if (local_res10[0] != 0) {
        iVar2 = *(int *)(local_res10[0] + -4);
      }
      if (*(short *)(local_res10[0] + -2 + (longlong)iVar2 * 2) == 0x5f) {
        iVar2 = 0;
        if (local_res10[0] != 0) {
          iVar2 = *(int *)(local_res10[0] + -4);
        }
        FUN_00416e20(local_res10,iVar2 + -1,1);
        local_41 = FUN_00dde990(auStack_98,local_res10[0],&local_28);
      }
    }
    if (local_41 == '\0') {
      iVar2 = FUN_004170c0(&LAB_00ddedd0,local_res10[0],1);
      if (iVar2 == 1) {
        FUN_00416e20(local_res10,1,2);
        local_41 = FUN_00dde990(auStack_98,local_res10[0],&local_28);
      }
    }
    if (local_41 == '\0') goto LAB_00dded4f;
  }
  local_78 = local_58;
  local_70 = &local_30;
  uVar1 = (**(code **)(*local_28 + 0x60))(local_28,local_1c,0,0);
  FUN_006245b0(uVar1);
  FUN_00418670(local_50,local_30);
  thunk_FUN_041b9bbd(local_30);
  local_41 = '\x01';
LAB_00dded4f:
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_28);
  FUN_00414480(local_res10);
  return local_41;
}

