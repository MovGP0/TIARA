/* Ghidra address: 018cd3a0 */
/* Ghidra symbol: FUN_018cd3a0 */


void FUN_018cd3a0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((int)param_1[1] < *(int *)(param_1[0x25] + 0x180)) {
    if (*(char *)((longlong)param_1 + 0xf1) != '\0') {
      if ((char)param_1[0x1e] != '\0') {
        (**(code **)(*(longlong *)param_1[0x13] + 0x30))((longlong *)param_1[0x13],param_1[0x1d]);
      }
      (**(code **)(*(longlong *)param_1[7] + 0x68))((longlong *)param_1[7],(int)param_1[0x22]);
      lVar2 = (**(code **)(*(longlong *)param_1[7] + 0xe0))((longlong *)param_1[7],0);
      param_1[0x12] = lVar2;
    }
    param_1[0x16] = param_1[0x15];
    FUN_018cceb0(param_1);
    FUN_018cccd0(param_1);
    param_1[0x16] = 0;
    if (*(char *)((longlong)param_1 + 0xf1) != '\0') {
      (**(code **)(*(longlong *)param_1[0x13] + 0x48))((longlong *)param_1[0x13]);
      (**(code **)(*(longlong *)param_1[7] + 0xa0))
                ((longlong *)param_1[7],param_1[0x11],param_1[0x12]);
      uVar1 = FUN_0040c770(param_1[0x12]);
      (**(code **)(**(longlong **)(param_1[7] + 0x18) + 0x58))
                (*(longlong **)(param_1[7] + 0x18),param_1[0x21],uVar1);
      uVar1 = FUN_0040c770(param_1[0x12]);
      (**(code **)(*(longlong *)param_1[7] + 0xa8))
                ((longlong *)param_1[7],*(undefined4 *)((longlong)param_1 + 0x114),uVar1);
      lVar2 = (**(code **)(*(longlong *)param_1[7] + 0xe0))((longlong *)param_1[7],param_1[0x11]);
      param_1[0x12] = lVar2;
      if ((char)param_1[0x1e] != '\0') {
        (**(code **)(*(longlong *)param_1[0x13] + 0x18))((longlong *)param_1[0x13],param_1[0x1d],0);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
    *(undefined1 *)((longlong)param_1 + 0xf2) = 0;
  }
  else {
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}

