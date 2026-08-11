/* Ghidra address: 00dde990 */
/* Ghidra symbol: FUN_00dde990 */


undefined1 FUN_00dde990(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong *local_40;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int local_28;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_50 = auStack_78;
  local_40 = (longlong *)0x0;
  local_21 = 0;
  local_20[0] = FUN_00418700(*(undefined8 *)(param_1 + 0xa8));
  local_2c = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      uVar1 = (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_2c,&local_30);
      FUN_006245b0(uVar1);
      if ((local_30 & 3) != 0) {
        uVar1 = (**(code **)(*(longlong *)*param_3 + 0x40))((longlong *)*param_3,local_2c,&local_34)
        ;
        FUN_006245b0(uVar1);
        uVar2 = FUN_0041b800(&local_40);
        uVar1 = (**(code **)(*(longlong *)*param_3 + 0x70))((longlong *)*param_3,local_34,uVar2);
        FUN_006245b0(uVar1);
        local_28 = (**(code **)(*local_40 + 0x50))(local_40,local_20,1,param_1 + 0x7c);
        if (local_28 != -0x7ffdfffa) {
          FUN_006245b0(local_28);
          FUN_00dde980(param_3,&local_40);
          local_21 = 1;
          break;
        }
      }
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_1 + 0x78));
  }
  thunk_FUN_041b9bbd(local_20[0]);
  FUN_0041b800(&local_40);
  return local_21;
}

