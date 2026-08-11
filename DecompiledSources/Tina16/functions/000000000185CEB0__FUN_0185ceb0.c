/* Ghidra address: 0185ceb0 */
/* Ghidra symbol: FUN_0185ceb0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0185ceb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  char local_1a;
  char local_19 [9];
  
  local_30 = auStack_58;
  FUN_0185ccb0(param_1);
  _DAT_02110304 = 0;
  FUN_00414480(&DAT_02110308);
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  local_28 = FUN_004b6da0(param_2);
  FUN_004b9ef0(*(undefined8 *)(param_1 + 8),param_2);
  FUN_004b6dc0(*(undefined8 *)(param_1 + 8),local_28);
  uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_0185d120(param_1);
  FUN_0185d230(param_1);
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
    else if (local_1a == DAT_01fae666) {
      local_19[0] = '\x01';
    }
    else if (local_1a == DAT_01fae664) {
      FUN_0185d480(param_1);
    }
    else if (local_1a == DAT_01fae665) {
      FUN_0185d7d0(param_1,local_19);
    }
    else {
      FUN_01860ba0(4);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_0185f580(param_1,param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

