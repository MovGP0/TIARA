/* Ghidra address: 01a99a30 */
/* Ghidra symbol: FUN_01a99a30 */


void FUN_01a99a30(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_30 [4];
  undefined4 local_2c [3];
  
  *(char *)(param_1 + 0x85) = param_2;
  if (param_2 == '\0') {
    uVar3 = 0;
  }
  else if (param_2 == '\x01') {
    uVar3 = 1;
  }
  else if (param_2 == '\x02') {
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x88);
    if ((*(char *)(param_1 + 0x12e) == '\0') && (*(char *)(param_1 + 0x12f) == '\0')) {
      uVar2 = FUN_00b905e0(*(undefined1 *)(param_1 + 0x86),1);
      FUN_01a98500(param_1,uVar2,0,local_2c,local_30);
    }
    else {
      FUN_01a98500(param_1,*(undefined1 *)(param_1 + 0x86),0,local_2c,local_30);
    }
    uVar2 = FUN_00b905e0(local_2c[0],1);
    uVar3 = thunk_FUN_041d21bb(uVar3,uVar2,uVar1);
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),uVar3);
    thunk_FUN_0412a071(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x88));
  }
  return;
}

