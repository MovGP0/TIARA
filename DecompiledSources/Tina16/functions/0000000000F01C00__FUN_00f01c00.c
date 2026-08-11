/* Ghidra address: 00f01c00 */
/* Ghidra symbol: FUN_00f01c00 */


void FUN_00f01c00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 0x530) != '\0') {
    uVar1 = thunk_FUN_0415f13b(&local_38,*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x518),0,
                               *(int *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    uVar2 = 0;
    if (*(byte *)(param_1 + 0x530) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (*(byte *)(param_1 + 0x530) & 0x1f)
              & 0xcU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if (*(longlong *)(param_1 + 0x528) == 0) {
        uVar2 = 0x100;
      }
      else if (*(char *)(param_1 + 0x533) != '\0') {
        uVar2 = 0x4200;
      }
      thunk_FUN_03ea73e5(param_2,&local_38,3,uVar2 | 5);
    }
    else {
      if (*(char *)(param_1 + 0x533) != '\0') {
        uVar2 = 0x4000;
      }
      thunk_FUN_03998bad(param_2,&local_38,5,uVar2 | 0x80f);
      iVar3 = ((uint)(local_30 - local_38) >> 1) + (uint)*(byte *)(param_1 + 0x533);
      thunk_FUN_04161b78(param_2,local_38 + iVar3,local_34 + 10,1,1,0x42);
      thunk_FUN_04161b78(param_2,local_38 + iVar3 + -3,local_34 + 10,1,1,0x42);
      thunk_FUN_04161b78(param_2,local_38 + iVar3 + 3,local_34 + 10,1,1,0x42);
    }
    thunk_FUN_041a27b3(param_2,local_38,local_34,local_30,local_2c);
  }
  FUN_00657350(param_1,param_2);
  return;
}

