/* Ghidra address: 00c68390 */
/* Ghidra symbol: FUN_00c68390 */


void FUN_00c68390(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_00c6fa30(*(longlong *)(param_1 + 0x778),local_20);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_20[0]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x20));
    if (*(char *)(*(longlong *)(param_1 + 0x778) + 0x50) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))(*(longlong **)(param_1 + 0x750),1);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x778) + 0x40) == '\0') {
      if (*(longlong *)(*(longlong *)(param_1 + 0x778) + 0x48) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x318))(*(longlong **)(param_1 + 0x748),1);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x748),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x30));
        (**(code **)(**(longlong **)(param_1 + 0x760) + 0x268))(*(longlong **)(param_1 + 0x760),0);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x318))(*(longlong **)(param_1 + 0x748),1);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x748),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x48));
        (**(code **)(**(longlong **)(param_1 + 0x760) + 0x268))(*(longlong **)(param_1 + 0x760),2);
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x748) + 0x318))(*(longlong **)(param_1 + 0x748),2);
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x268))(*(longlong **)(param_1 + 0x760),1);
      FUN_00c65ce0(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x4f0));
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x778) + 0x40);
      if (cVar1 == '\a') {
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))(*(longlong **)(param_1 + 0x748),0);
      }
      else if (cVar1 == '\t') {
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))(*(longlong **)(param_1 + 0x748),1);
      }
      else if (cVar1 == '\r') {
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))(*(longlong **)(param_1 + 0x748),2);
      }
      else if (cVar1 == '\x0e') {
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))(*(longlong **)(param_1 + 0x748),3);
      }
      else if (cVar1 == '\f') {
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))(*(longlong **)(param_1 + 0x748),4);
      }
    }
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0x28));
    FUN_00c67db0(param_1,param_1);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x778) + 0x18);
    if (iVar2 < *(int *)(*(longlong *)(param_1 + 0x700) + 0x4a4)) {
      FUN_008483b0(*(longlong *)(param_1 + 0x700),iVar2);
      FUN_00848960(*(undefined8 *)(param_1 + 0x700),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x778) + 0x18));
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x778) + 0x1c);
    if (iVar2 < *(int *)(*(longlong *)(param_1 + 0x710) + 0x4a4)) {
      FUN_008483b0(*(longlong *)(param_1 + 0x710),iVar2);
      FUN_00848960(*(undefined8 *)(param_1 + 0x710),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x778) + 0x1c));
    }
  }
  FUN_00414480(local_20);
  return;
}

