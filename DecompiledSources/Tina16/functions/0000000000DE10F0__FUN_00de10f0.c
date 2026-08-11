/* Ghidra address: 00de10f0 */
/* Ghidra symbol: FUN_00de10f0 */


void FUN_00de10f0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 local_4a [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  pcVar3 = (code *)FUN_00411550(param_1,0xffb3);
  cVar1 = (*pcVar3)(param_1);
  if ((cVar1 != '\0') && (*(short *)(param_1 + 0x530) != 0)) {
    FUN_0040d200(&local_48,0x30,0);
    local_48 = FUN_0065b870(param_1);
    local_40 = 0x100;
    local_38 = *(undefined8 *)(param_2 + 8);
    local_30 = *(undefined8 *)(param_2 + 0x10);
    iVar2 = thunk_FUN_03d5c470(*(undefined8 *)(param_1 + 0x528),*(undefined2 *)(param_1 + 0x530),
                               &local_48,local_4a);
    if (iVar2 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x20))
                (*(longlong **)(param_1 + 0x4c0),&local_48);
      *(undefined8 *)(param_2 + 0x18) = 1;
      return;
    }
  }
  FUN_0065a1b0(param_1,param_2);
  return;
}

