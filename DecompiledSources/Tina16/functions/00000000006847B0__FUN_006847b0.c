/* Ghidra address: 006847b0 */
/* Ghidra symbol: FUN_006847b0 */


void FUN_006847b0(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
     ((((*param_2 == 0x201 || (*param_2 == 0x203)) && (cVar2 = FUN_0064eb50(param_1), cVar2 == '\0')
       ) && (cVar2 = FUN_0064c470(param_1), cVar2 == '\x01')))) {
    cVar2 = FUN_00656320(param_1,param_2);
    if (cVar2 != '\0') {
      return;
    }
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
    (**(code **)(*param_1 + -0x40))(param_1,param_2);
    return;
  }
  iVar1 = *param_2;
  if (iVar1 < 0x84) {
    if (iVar1 == 0x83) {
      return;
    }
    if (iVar1 == 5) {
      if ((char)param_1[0xa4] != '\0') {
        (**(code **)(*param_1 + -0x38))(param_1,param_2);
        return;
      }
    }
    else if ((iVar1 == 0x7b) && (param_1[0x1d] == 0)) {
      (**(code **)(*param_1 + -0x40))(param_1,param_2);
      uVar4 = thunk_FUN_03a65bf1(param_1[0xa2],param_1[0x9f],*param_2,*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar4;
      return;
    }
  }
  else if (iVar1 == 0x102) {
    cVar2 = FUN_00659a70(param_1,param_2);
    if (cVar2 != '\0') {
      return;
    }
    if ((((short)param_2[2] == 0xd) || ((short)param_2[2] == 0x1b)) &&
       (cVar2 = FUN_006838c0(param_1), cVar2 != '\0')) {
      FUN_006838f0(param_1,0);
      return;
    }
  }
  else if ((iVar1 - 0x132U < 7) &&
          ((cVar2 = FUN_00781870(), cVar2 == '\0' ||
           ((cVar2 = FUN_00781870(), cVar2 != '\0' && ((*(byte *)(param_1 + 0x59) & 4) == 0)))))) {
    uVar3 = FUN_005fbf20(*(undefined4 *)(param_1[0x17] + 0x28));
    thunk_FUN_0412a071(*(undefined8 *)(param_2 + 2),uVar3);
    uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[0x66] + 0x18) + 0x28));
    thunk_FUN_03e3a7dc(*(undefined8 *)(param_2 + 2),uVar3);
    uVar4 = FUN_005fdb10(param_1[0x66]);
    *(undefined8 *)(param_2 + 6) = uVar4;
    if ((*(uint *)((longlong)param_1 + 0xa4) & 0x8000) == 0) {
      return;
    }
    if ((char)param_1[0x94] != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x94) = 1;
    thunk_FUN_0413e052(param_1[0x9f],0xb04d,0,0);
    return;
  }
  FUN_00656570(param_1,param_2);
  return;
}

