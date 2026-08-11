/* Ghidra address: 0195af10 */
/* Ghidra symbol: FUN_0195af10 */


void FUN_0195af10(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = 0;
  uVar2 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20),
                   *(undefined4 *)(param_1 + 0x254));
  FUN_00498350(&local_28,*(undefined4 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x24c),
               *(undefined4 *)(param_1 + 0x250),uVar2);
  uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x78),0xff);
  FUN_005fd670(param_2[0xf],1);
  FUN_005fdcb0(param_2[0x10],1);
  FUN_005fd6d0(param_2[0xf],1);
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    uVar2 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x288));
    uVar3 = CONCAT44(uVar4,local_1c + -1);
    FUN_0180c8f0(uVar2,local_28 + 1,local_24 + 1,local_20 + -1,uVar3,0xf0caa6);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else {
    uVar2 = CONCAT44(uVar4,local_1c);
    (**(code **)(*param_2 + 0xf8))(param_2,local_28,local_24,local_20,uVar2);
    uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  cVar1 = FUN_01953ba0(param_1);
  if (cVar1 != '\0') {
    if (*(double *)(param_1 + 0xa8) < *(double *)(param_1 + 0xb0) ||
        *(double *)(param_1 + 0xa8) == *(double *)(param_1 + 0xb0)) {
      local_28 = FUN_0040c770(*(double *)(param_1 + 0xa8) * *(double *)(param_1 + 0x268));
      local_28 = local_20 - local_28;
    }
    else {
      local_28 = FUN_0040c770(*(double *)(param_1 + 0xb0) * *(double *)(param_1 + 0x270));
      local_28 = local_20 - local_28;
    }
    FUN_005fdab0(param_2[0x10],0xffffff);
    FUN_005fd4e0(param_2[0xf],0x808080);
    FUN_005fd670(param_2[0xf],2);
    FUN_005fdcb0(param_2[0x10],0);
    FUN_005fd6d0(param_2[0xf],1);
    (**(code **)(*param_2 + 0xf8))
              (param_2,local_28,local_24 + 2,local_20 + -2,CONCAT44(uVar4,local_1c + -2));
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_0043f780(&local_30,*(longlong *)(param_1 + 0xd8));
      FUN_005fc860(param_2[0xe],0xff);
      (**(code **)(*param_2 + 0x130))(param_2,&local_28,0,0,local_30);
    }
  }
  FUN_00414480(&local_30);
  return;
}

