/* Ghidra address: 0088f630 */
/* Ghidra symbol: FUN_0088f630 */


undefined4
FUN_0088f630(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            undefined2 *param_5,longlong *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  *param_6 = 0;
  *param_5 = 0;
  FUN_00415460(local_30,param_1,0);
  uVar2 = FUN_00415ab0(local_30[0]);
  puVar3 = (undefined8 *)(**(code **)PTR_PTR_02003058)(uVar2);
  if (puVar3 == (undefined8 *)0x0) {
    iVar1 = (**(code **)PTR_PTR_020051a8)();
    if (iVar1 == 0x2af9) {
      local_3c = 0x2af9;
    }
    else if (iVar1 == 0x2afa) {
      local_3c = 0x2afa;
    }
    else if (iVar1 == 0x2afb) {
      local_3c = 0x2afb;
    }
    else if (iVar1 == 0x2afc) {
      local_3c = 0x2af9;
    }
    else {
      local_3c = 0x2af9;
    }
  }
  else {
    if ((*(short *)(puVar3 + 2) == 2) && (*(short *)((longlong)puVar3 + 0x12) == 4)) {
      for (puVar5 = (undefined8 *)puVar3[3]; (undefined4 *)*puVar5 != (undefined4 *)0x0;
          puVar5 = puVar5 + 1) {
        lVar4 = FUN_0088f5b0(param_2,param_3,param_4,*(undefined4 *)*puVar5);
        *param_6 = lVar4;
        if (lVar4 == 0) {
          local_3c = 8;
          goto LAB_0088f782;
        }
        param_6 = (longlong *)(lVar4 + 0x28);
      }
    }
    FUN_004167a0(&local_38,*puVar3);
    uVar2 = FUN_00416740(local_38);
    FUN_00442580(param_5,uVar2,0x401);
    local_3c = 0;
  }
LAB_0088f782:
  FUN_00414480(&local_38);
  FUN_004144d0(local_30);
  return local_3c;
}

