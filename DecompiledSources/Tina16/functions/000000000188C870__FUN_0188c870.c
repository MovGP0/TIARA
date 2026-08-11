/* Ghidra address: 0188c870 */
/* Ghidra symbol: FUN_0188c870 */


void FUN_0188c870(longlong param_1,int param_2,double param_3,double param_4,char param_5,
                 int param_6,int param_7,undefined2 param_8)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 0xe0) + 0x48);
  *puVar1 = *puVar1 | 0x8303;
  if ((param_2 != 0x100) && (iVar5 = FUN_0188b8b0(param_1,param_2), iVar5 == -1)) {
    param_2 = 0x100;
  }
  if (param_2 == 0x100) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    *(uint *)(lVar2 + 0x48) = *(uint *)(lVar2 + 0x48) | 0xc;
    if (param_5 == '\x01') {
      uVar4 = FUN_0040c770(param_3 * 10.0);
      *(undefined2 *)(lVar2 + 0x50) = uVar4;
      uVar4 = FUN_0040c770(param_4 * 10.0);
      *(undefined2 *)(lVar2 + 0x52) = uVar4;
    }
    else {
      uVar4 = FUN_0040c770(param_4 * 10.0);
      *(undefined2 *)(lVar2 + 0x50) = uVar4;
      uVar4 = FUN_0040c770(param_3 * 10.0);
      *(undefined2 *)(lVar2 + 0x52) = uVar4;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    *(undefined2 *)(lVar2 + 0x50) = 0;
    *(undefined2 *)(lVar2 + 0x52) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  *(short *)(lVar2 + 0x4e) = (short)param_2;
  if (param_5 == '\0') {
    *(undefined2 *)(lVar2 + 0x4c) = 1;
  }
  else {
    *(undefined2 *)(lVar2 + 0x4c) = 2;
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  *(undefined2 *)(lVar2 + 0x56) = param_8;
  *(undefined2 *)(lVar2 + 100) = 0;
  if ((param_6 == 7) && (param_6 = *(int *)(param_1 + 8), param_6 == -1)) {
    param_6 = *(int *)(param_1 + 0x3c);
  }
  *(undefined2 *)(lVar2 + 0x58) = (undefined2)param_6;
  if (param_7 == 0) {
    param_7 = *(int *)(param_1 + 0x38);
  }
  else {
    param_7 = param_7 + 1;
  }
  if (param_7 == 4) {
    param_7 = 1;
  }
  if (*(int *)(param_1 + 0xc) != -1) {
    param_7 = *(int *)(param_1 + 0xc);
  }
  if (param_7 != 1) {
    *(uint *)(lVar2 + 0x48) = *(uint *)(lVar2 + 0x48) | 0x1000;
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  *(undefined2 *)(lVar2 + 0x5e) = (undefined2)param_7;
  uVar6 = thunk_FUN_041b3853(*(undefined8 *)(param_1 + 0xd0),lVar2);
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  uVar6 = thunk_FUN_041b3853(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x100))(*(longlong **)(param_1 + 0x18));
  cVar3 = FUN_0188caa0(param_1);
  if (cVar3 != '\0') {
    *(int *)(param_1 + 0x68) = param_2;
    *(char *)(param_1 + 0xa8) = param_5;
  }
  return;
}

