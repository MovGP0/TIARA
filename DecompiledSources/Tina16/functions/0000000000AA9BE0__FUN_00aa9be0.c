/* Ghidra address: 00aa9be0 */
/* Ghidra symbol: FUN_00aa9be0 */


void FUN_00aa9be0(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 local_1c;
  
  if (0 < *(int *)(*(longlong *)(param_1 + 0x80) + 0x10)) {
    iVar4 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x30)) -
            (*(int *)(param_1 + 0x14) + param_5);
    cVar1 = *(char *)(param_1 + 0x38);
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else if (cVar1 == '\x02') {
      *(int *)(param_1 + 0x34) = iVar4 / 2;
    }
    else if ((byte)(cVar1 - 3U) < 2) {
      *(int *)(param_1 + 0x34) = iVar4;
    }
    local_1c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
              (*(longlong **)(param_1 + 0x80),param_2,
               param_3 + *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x70) + param_5 +
               *(int *)(param_1 + 0x34),
               *(int *)(param_1 + 0x28) - (*(int *)(param_1 + 0x10) + param_4),
               (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x14)) - param_5,0,&local_1c,param_6);
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  if ((plVar2 != (longlong *)0x0) &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x91) != '\0')) {
    (**(code **)(*plVar2 + 0xe0))(plVar2,param_2,0,100,0);
    if (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x198) == *(longlong *)PTR_DAT_02003010) {
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = 0;
      FUN_00410f20(uVar3);
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0xd8) = 1;
      *(undefined1 *)(param_1 + 0x88) = 1;
    }
  }
  return;
}

