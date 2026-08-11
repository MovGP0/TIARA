/* Ghidra address: 00a35400 */
/* Ghidra symbol: FUN_00a35400 */


void FUN_00a35400(longlong param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_0040d200(param_1 + 0x44,0x428,0);
  FUN_00a34e50(param_1);
  cVar1 = *(char *)(param_1 + 0x491);
  if (cVar1 == '\0') {
LAB_00a3545e:
    bVar2 = *(byte *)(param_1 + 0x490);
    if (bVar2 < 5) {
      if ((bVar2 != 4) && (bVar2 != 1)) {
        if (bVar2 == 2) {
          FUN_00a353b0(auStack_38,4,1);
        }
        goto LAB_00a354e7;
      }
    }
    else if (bVar2 != 8) {
      if (bVar2 == 0x10) {
        FUN_00a353b0(auStack_38,8,1);
      }
      goto LAB_00a354e7;
    }
    FUN_00a353b0(auStack_38,bVar2,1);
  }
  else {
    if (cVar1 != '\x02') {
      if ((byte)(cVar1 - 3U) < 2) goto LAB_00a3545e;
      if (cVar1 != '\x06') goto LAB_00a354e7;
    }
    FUN_00a353b0(auStack_38,0x18,0);
  }
LAB_00a354e7:
  uVar3 = (uint)*(ushort *)(param_1 + 0x52) * *(int *)(param_1 + 0x488) + 0x1f & 0xffffffe0;
  *(uint *)(param_1 + 0x498) = uVar3 / 8;
  if ((*(char *)(param_1 + 0x491) == '\x06') || (*(char *)(param_1 + 0x491) == '\x04')) {
    uVar4 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x488) * *(int *)(param_1 + 0x48c)),
                         (ulonglong)uVar3 % 8);
    *(undefined8 *)(param_1 + 0x480) = uVar4;
    FUN_0040d200(uVar4,(longlong)(*(int *)(param_1 + 0x488) * *(int *)(param_1 + 0x48c)),0);
  }
  if (*(char *)(param_1 + 0x490) == '\x10') {
    uVar4 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x498) * *(int *)(param_1 + 0x48c)));
    *(undefined8 *)(param_1 + 0x470) = uVar4;
    FUN_0040d200(uVar4,(longlong)(*(int *)(param_1 + 0x498) * *(int *)(param_1 + 0x48c)),0);
  }
  uVar4 = thunk_FUN_04137b5f(0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  FUN_005ffb10(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x148),
               *(undefined8 *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (*(char *)(param_1 + 0x491) == '\x03') {
      uVar4 = thunk_FUN_041d714e(*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x38) = uVar4;
    }
    else {
      uVar4 = FUN_00a35250(param_1,*(undefined1 *)(param_1 + 0x490));
      *(undefined8 *)(param_1 + 0x38) = uVar4;
    }
    thunk_FUN_03b6102d(*(undefined8 *)(param_1 + 0x38),1 << (*(byte *)(param_1 + 0x52) & 0x1f));
    *(int *)(param_1 + 100) = 1 << (*(byte *)(param_1 + 0x52) & 0x1f);
    thunk_FUN_0418f5de(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),0);
    thunk_FUN_03a5de49(*(undefined8 *)(param_1 + 0x30));
    FUN_00a35310(param_1,*(undefined8 *)(param_1 + 0x38));
  }
  local_18 = 0;
  local_10 = 0;
  uVar4 = thunk_FUN_041c0f30(*(undefined8 *)(param_1 + 0x30),param_1 + 0x44,0,param_1 + 0x478);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  FUN_0040d200(*(undefined8 *)(param_1 + 0x478),
               (longlong)(*(int *)(param_1 + 0x498) * *(int *)(param_1 + 0x48c)),0);
  return;
}

