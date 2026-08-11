/* Ghidra address: 01950170 */
/* Ghidra symbol: FUN_01950170 */


undefined4
FUN_01950170(longlong *param_1,undefined2 param_2,undefined4 param_3,undefined8 *param_4,
            longlong param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_30;
  
  local_30 = *param_4;
  uVar2 = 0;
  if ((*(char *)(param_5 + 0xb) != '\x01') ||
     (((*(byte *)((longlong)param_1 + 0xc4) & 1) != 0 && (*(char *)(param_5 + 0x1e) == '\0')))) {
    FUN_01952520(param_1,param_5);
    if (param_1[0x28] != 0) {
      uVar2 = FUN_0197de00(param_1[0x28],param_2,param_3,&local_30,param_5);
    }
    if ((char)uVar2 == '\0') {
      uVar2 = (**(code **)(*param_1 + 0x158))(param_1,param_2,param_3,&local_30,param_5);
      if ((*(char *)(param_5 + 10) != '\0') && (param_1[0x1e] != 0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x1e] + 0x200))
                          ((longlong *)param_1[0x1e],(double)(int)local_30,(double)local_30._4_4_);
        if (cVar1 != '\0') {
          uVar2 = FUN_01950170(param_1[0x1e],param_2,param_3,&local_30,param_5);
          *(undefined1 *)(param_5 + 10) = 0;
        }
      }
    }
  }
  return uVar2;
}

