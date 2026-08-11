/* Ghidra address: 00a04c00 */
/* Ghidra symbol: FUN_00a04c00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a04c00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_1a;
  char local_19 [9];
  
  local_30 = auStack_58;
  FUN_00a04a00(param_1);
  _DAT_02013398 = 0;
  FUN_00414480(&DAT_020133a0);
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_004b6dc0(param_2,0);
  FUN_004b9ef0(*(undefined8 *)(param_1 + 8),param_2);
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00a04e80(param_1);
  FUN_00a04f90(param_1);
  local_19[0] = '\0';
  while (local_19[0] == '\0') {
    lVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
    lVar3 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
    if (lVar2 < lVar3) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_1a,1);
    }
    else {
      local_1a = '\0';
    }
    if (local_1a == '\0') {
      local_1a = '\0';
      local_19[0] = '\x01';
    }
    else if (local_1a == DAT_01e6e056) {
      local_19[0] = '\x01';
    }
    else if (local_1a == DAT_01e6e054) {
      FUN_00a051e0(param_1);
    }
    else if (local_1a == DAT_01e6e055) {
      FUN_00a05530(param_1,local_19);
    }
    else {
      FUN_00a074d0(4);
    }
  }
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) == 0) {
    FUN_00a074d0(0x12);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00a06460(param_1,param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

