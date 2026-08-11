/* Ghidra address: 00b0a150 */
/* Ghidra symbol: FUN_00b0a150 */


undefined1 FUN_00b0a150(longlong param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_21 = 1;
  cVar1 = FUN_00b09b70(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_0084e390(param_1,param_2,param_3);
    FUN_00b07a80(*(undefined8 *)(param_1 + 0x618),&local_38);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_38);
    lVar4 = FUN_0084e390(param_1,param_2,param_3);
    *(undefined1 *)(lVar4 + 0x39) = *(undefined1 *)(*(longlong *)(param_1 + 0x620) + 0x499);
    plVar3 = (longlong *)FUN_0084e390(param_1,param_2,param_3);
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    FUN_00b0b2a0(param_1,param_2,param_3,local_40);
    if (*(longlong *)(param_1 + 0x648) != 0) {
      (**(code **)(param_1 + 0x648))(*(undefined8 *)(param_1 + 0x650),param_1);
    }
    if (param_2 < 2) {
      cVar1 = FUN_00b07c10(*(undefined8 *)(param_1 + 0x618));
      if ((cVar1 == '\0') && (*(char *)(param_1 + 0x66a) == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)(param_1 + 0x66a) = uVar2;
    }
    else {
      cVar1 = FUN_00b07c10(*(undefined8 *)(param_1 + 0x618));
      if ((cVar1 == '\0') && (*(char *)(param_1 + 0x66b) == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)(param_1 + 0x66b) = uVar2;
    }
    local_21 = 0;
  }
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  return local_21;
}

