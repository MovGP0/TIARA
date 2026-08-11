/* Ghidra address: 007ff400 */
/* Ghidra symbol: FUN_007ff400 */


void FUN_007ff400(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0x4d0) != param_2) {
    *(char *)(param_1 + 0x4d0) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if ((cVar1 != '\0') &&
       (((*(ushort *)(param_1 + 0x34) & 0x10) == 0 ||
        (((*(ushort *)(param_1 + 0x34) & 0x10) != 0 && (*(longlong *)(param_1 + 0x78) != 0)))))) {
      if ((*(char *)(param_1 + 0x4d6) == '\x01') && (*(char *)(param_1 + 0x4d2) == '\x02')) {
        FUN_00655b90(param_1);
      }
      else {
        uVar2 = FUN_0065b870(param_1);
        local_1c = thunk_FUN_04118143(uVar2,0xfffffff0);
        uVar2 = FUN_0065b870(param_1);
        local_20 = thunk_FUN_04118143(uVar2,0xffffffec);
        pcVar3 = (code *)FUN_00411550(param_1,0xffa6);
        (*pcVar3)(param_1,&local_1c,&local_20);
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_03c9d277(uVar2,0xfffffff0,local_1c);
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_03c9d277(uVar2,0xffffffec,local_20);
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_041cc6e2(uVar2,0,0,0,0,0,0x37);
      }
    }
  }
  return;
}

