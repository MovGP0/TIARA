/* Ghidra address: 0064e790 */
/* Ghidra symbol: FUN_0064e790 */


void FUN_0064e790(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  if (((*(char *)((longlong)param_1 + 0xa9) != '\0') ||
      (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0 &&
       ((*(uint *)(param_1 + 0x14) & 0x400) == 0)))) && (param_1[0xf] != 0)) {
    cVar1 = FUN_0065be20(param_1[0xf]);
    if (cVar1 != '\0') {
      if ((*(uint *)(param_1 + 0x14) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x180))(param_1);
        (**(code **)(*param_1 + 0x198))(param_1);
      }
      else {
        uVar2 = FUN_0065b870(param_1[0xf]);
        local_20 = thunk_FUN_040ef593(uVar2);
        local_48 = *(int *)((longlong)param_1 + 0x94) + *(int *)((longlong)param_1 + 0x9c);
        FUN_00428be0(local_20,(int)param_1[0x12],*(int *)((longlong)param_1 + 0x94),
                     (int)param_1[0x12] + (int)param_1[0x13]);
        FUN_006573b0(param_1[0xf],local_20,param_1);
        uVar2 = FUN_0065b870(param_1[0xf]);
        thunk_FUN_041a9b5c(uVar2,local_20);
      }
    }
  }
  return;
}

