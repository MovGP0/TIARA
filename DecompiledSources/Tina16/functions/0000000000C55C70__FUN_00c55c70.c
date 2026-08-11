/* Ghidra address: 00c55c70 */
/* Ghidra symbol: FUN_00c55c70 */


void FUN_00c55c70(longlong param_1,int param_2,char param_3)

{
  uint3 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if ((-1 < param_2) && (param_2 < 0x10)) {
    iVar4 = param_2;
    if (7 < param_2) {
      iVar4 = param_2 + 4;
    }
    FUN_00498370(&local_38,(param_2 % *(int *)(param_1 + 0x504)) * *(int *)(param_1 + 0x4fc),
                 (param_2 / *(int *)(param_1 + 0x504)) * *(int *)(param_1 + 0x500),
                 *(int *)(param_1 + 0x4fc),*(int *)(param_1 + 0x500));
    if (*(char *)(param_1 + 0x390) == '\0') {
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x78),0);
    }
    else {
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x78),0xff00000f);
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0xf8))
                (*(longlong **)(param_1 + 0x490),local_38,local_34,local_30,local_2c);
      thunk_FUN_04176532(&local_38,0xffffffff,0xffffffff);
      FUN_00741000(*(undefined8 *)(param_1 + 0x490),&local_38,0xff000010,0xff000014,2);
    }
    puVar1 = (uint3 *)(param_1 + 0x498 + (longlong)iVar4 * 4);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),(ulonglong)*puVar1);
    if (*(char *)(param_1 + 0x390) != '\0') {
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x78),(ulonglong)*puVar1);
    }
    if (param_3 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0xf8))
                (*(longlong **)(param_1 + 0x490),local_38,local_34,local_30,local_2c);
    }
    else if (*(char *)(param_1 + 0x390) == '\0') {
      plVar2 = *(longlong **)(param_1 + 0x490);
      FUN_005fd4e0(plVar2[0xf],0);
      FUN_005fd640(plVar2[0xf],3);
      (**(code **)(*plVar2 + 0xf8))(plVar2,local_38,local_34,local_30,local_2c);
      FUN_005fd640(plVar2[0xf],4);
      (**(code **)(*plVar2 + 0xf8))(plVar2,local_38 + 2,local_34 + 2,local_30 + -2,local_2c + -2);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0xf8))
                (*(longlong **)(param_1 + 0x490),local_38,local_34,local_30,local_2c);
      thunk_FUN_04176532(&local_38,0xffffffff,0xffffffff);
      uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
      thunk_FUN_03b3ef59(uVar3,&local_38);
    }
  }
  return;
}

