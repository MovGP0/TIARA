/* Ghidra address: 01a9f830 */
/* Ghidra symbol: FUN_01a9f830 */


void FUN_01a9f830(longlong param_1,int param_2,int param_3,float param_4,undefined8 *param_5,
                 char param_6)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((*(ushort *)(param_1 + 0x160) & 4) == 0) {
    local_50 = FUN_00498310(param_2,param_3);
    local_40 = FUN_01a9cdf0(param_1,&local_50);
    iVar1 = (**(code **)(*(longlong *)*param_5 + 0x60))((longlong *)*param_5);
    iVar1 = FUN_0040c840((double)iVar1 / (double)param_4);
    iVar2 = (**(code **)(*(longlong *)*param_5 + 0x48))((longlong *)*param_5);
    iVar2 = FUN_0040c840((double)iVar2 / (double)param_4);
    local_50 = FUN_00498310(param_2 + iVar1,param_3 + iVar2);
    local_48 = FUN_01a9cdf0(param_1,&local_50);
    if (param_6 != '\0') {
      if ((int)local_48 < (int)local_40) {
        FUN_01cefdf0(&local_40,&local_48);
      }
      if (local_48._4_4_ < local_40._4_4_) {
        FUN_01cefdf0((longlong)&local_40 + 4,(longlong)&local_48 + 4);
      }
    }
    FUN_01a98380(param_1,local_40 & 0xffffffff,local_40._4_4_,&local_40,(longlong)&local_40 + 4);
    lVar4 = (longlong)&local_48 + 4;
    FUN_01a98380(param_1,local_48 & 0xffffffff,local_48 >> 0x20,&local_48,lVar4);
    uVar5 = (undefined4)((ulonglong)lVar4 >> 0x20);
    if ((*(ushort *)(param_1 + 0x160) & 1) != 0) {
      FUN_01a9ee60(param_1,*param_5,3,0x3c);
    }
    if (*(char *)(param_1 + 0x12d) == '\0') {
      plVar3 = (longlong *)FUN_01a97e00(param_1);
      FUN_00498350(local_60,(int)local_40 - *(int *)(param_1 + 0x188),
                   local_40._4_4_ - *(int *)(param_1 + 0x18c),
                   (int)local_48 - *(int *)(param_1 + 0x188),
                   CONCAT44(uVar5,local_48._4_4_ - *(int *)(param_1 + 0x18c)));
      (**(code **)(*plVar3 + 0x110))(plVar3,local_60,*param_5);
      FUN_01a97ea0(param_1,plVar3);
    }
  }
  return;
}

