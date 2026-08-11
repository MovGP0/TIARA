/* Ghidra address: 006e63d0 */
/* Ghidra symbol: FUN_006e63d0 */


void FUN_006e63d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FUN_00655080(param_1);
  if (*(char *)(param_1 + 0x490) == '\0') {
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar2,0x401,0,
                       CONCAT22(*(undefined2 *)(param_1 + 0x498),*(undefined2 *)(param_1 + 0x494)));
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar2,0x406,(longlong)*(int *)(param_1 + 0x494),
                       (longlong)*(int *)(param_1 + 0x498));
  }
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar2,0x404,(longlong)*(int *)(param_1 + 0x4a4),0);
  FUN_006e6920(param_1,*(undefined4 *)(param_1 + 0x49c));
  FUN_006e6b80(param_1,*(undefined4 *)(param_1 + 0x4b4));
  FUN_006e6be0(param_1,*(undefined4 *)(param_1 + 0x4b8));
  FUN_006e6c40(param_1,*(undefined1 *)(param_1 + 0x4bc));
  plVar3 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar3 + 0x90))(plVar3);
  if (cVar1 != '\0') {
    cVar1 = FUN_0044f0c0(5,1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0065be20(param_1);
      if ((cVar1 != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
        cVar1 = *(char *)(param_1 + 0x4b0);
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar2,0x40a,cVar1 == '\x01',(longlong)*(int *)(param_1 + 0x4ac));
      }
    }
  }
  return;
}

