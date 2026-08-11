/* Ghidra address: 00bfd680 */
/* Ghidra symbol: FUN_00bfd680 */


char FUN_00bfd680(longlong *param_1,undefined2 param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined8 local_20;
  
  local_20 = *param_4;
  cVar2 = FUN_0064eee0(param_1,param_2,param_3,&local_20);
  if (cVar2 == '\0') {
    sVar3 = thunk_FUN_040bd713(0x11);
    if (sVar3 < 0) {
      uVar4 = *(uint *)(param_1 + 0xa1) >> ((*(uint *)((longlong)param_1 + 0x63a) & 0x200) != 0);
    }
    else {
      uVar4 = 3;
    }
    *(int *)((longlong)param_1 + 0x5c4) = *(int *)((longlong)param_1 + 0x5c4) + param_3;
    iVar1 = *(int *)((longlong)param_1 + 0x5c4);
    *(int *)((longlong)param_1 + 0x5c4) = *(int *)((longlong)param_1 + 0x5c4) % 0x78;
    FUN_00bfcc50(param_1,*(int *)((longlong)param_1 + 0x534) - (iVar1 / 0x78) * uVar4);
    (**(code **)(*param_1 + 0x198))(param_1);
    if (param_1[0xf0] != 0) {
      (*(code *)param_1[0xf0])(param_1[0xf1],param_1,1);
    }
    cVar2 = '\x01';
  }
  return cVar2;
}

